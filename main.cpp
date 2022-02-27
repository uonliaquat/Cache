#include <iostream>
#include "./src/cache.cpp"

using namespace std;

int main(){
 
    Cache<int> cache(3);
    cache.insert_element(10);
    cache.insert_element(11);
    cache.insert_element(12);

    int ele = cache.get_element(0);
    cout << ele << endl;

}
