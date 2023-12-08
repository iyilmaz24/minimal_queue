#include<string.h>
#include<iostream>
using namespace std;


template<class T>
class QuickQueue 
{

    private:
        // internal storage of QuickQueue is a dynamically allocated array of pointers
        T** myList;
        int size;
        int capacity;

    public:
        void Enqueue(T* item);
        T* Dequeue();

        // constructor
        QuickQueue();

        // destructor
        ~QuickQueue();
        
        // deep copy assignment operator overload
        QuickQueue<T>& operator=(const T &item);

};

#include "quick_queue.hpp"