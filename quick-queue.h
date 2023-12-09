#include<iostream>
#include<typeinfo>
using namespace std;


const int DEFAULT_SIZE = 3;

template<class T>
class QuickQueue 
{

    private:
        // internal storage of QuickQueue is a dynamically allocated array of pointers
        T** myList;
        int current_size;
        int capacity;

    public:
        void Enqueue(T* item);
        T Dequeue();
        void PrintOut();

        // default constructor
        QuickQueue();

        // copy constructor
        QuickQueue(const QuickQueue<T> &item);

        // destructor
        ~QuickQueue();

        // deep copy assignment operator overload
        QuickQueue<T>& operator=(const T &item);

};

#include "quick_queue.hpp"