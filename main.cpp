#include <iostream>
#include "./src/cache.cpp"

using namespace std;

int main(){
 
    Cache<int> cache(3);
    cache.insert_element(10);
    cache.insert_element(11); 
    int element = cache.get_element(2);
    cout << element << endl;
}
