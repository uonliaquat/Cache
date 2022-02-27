#include "../include/cache.h"

template<class T>
Cache<T>::Cache(unsigned int size){
    this->size = size;
    this->curr_index = 0;
}

template<class T>
void Cache<T>::insert_element(T element){
    unique_ptr<Object<T> > uptr(new Object<T>);
    uptr->element = element;
    if (this->cache.size() < this->size)
        this->cache.push_back(move(uptr));
    else
        this->cache[this->curr_index % this->size] = move(uptr);
    this->curr_index++;
}

template<class T>
void Cache<T>::pop_element(){
    if (this->cache.size() > 0){
        this->cache.erase(this->cache.begin() + (--this->curr_index) % this->size);
    }
}

template<class T>
T Cache<T>::get_element(unsigned int index){
    return index < this->cache.size() ? this->cache[index]->element : 0;
}

template<class T>
vector<T> Cache<T>::get_range(unsigned int index_from, unsigned int index_to){
    vector<T> vec;
    for (size_t index = index_from; index <= index_to && index < this->cache.size(); index++)
        vec.push_back(this->cache[index]->element);
    return vec;
}




