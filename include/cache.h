#ifndef CACHE_H
#define CACHE_H

#include <vector>


using namespace std;

template <class T>
class Cache{
    private:
        unsigned int size;
        unsigned int curr_index;
        T * cache;         
    public:
        Cache(unsigned int);
        void insert_element(T);
        T get_element(unsigned int);
        vector<T> get_range(unsigned int, unsigned int);
        int get_size() { return size; }
        void print();

};


#endif
