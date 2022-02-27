#ifndef CACHE_H
#define CACHE_H

#include <vector>
#include <memory>

using namespace std;

template<class T>
struct Object{
    T element;
};


template <class T>
class Cache{
    private:
        unsigned int size;
        unsigned int curr_index;
        vector<unique_ptr<Object<T > > > cache;
    public:
        Cache(unsigned int);
        void insert_element(T);
        void pop_element();
        T get_element(unsigned int);
        vector<T> get_range(unsigned int, unsigned int);
        int get_size() { return cache.size(); }

};


#endif
