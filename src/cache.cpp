#include "../include/cache.h"
#include <iostream>


template<class T>
Cache<T>::Cache(unsigned int size){
    this->size = size;
    this->curr_index = 0;
    this->cache = new T[size];
}

template<class T>
void Cache<T>::insert_element(T element){
    this->cache[this->curr_index % this->size] = element;
    this->curr_index++;
}

template<class T>
T Cache<T>::get_element(unsigned int index){
    return index < this->size ? this->cache[index] : 0;
}

template<class T>
vector<T> Cache<T>::get_range(unsigned int index_from, unsigned int index_to){
    vector<T> vec;
    for (size_t index = index_from; index <= index_to && index < this->size; index++)
        vec.push_back(this->cache[index]);
    return vec;
}




