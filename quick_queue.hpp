#ifndef _QUICK_QUEUE_HPP
#define _QUICK_QUEUE_HPP


template<class T>
QuickQueue<T> :: QuickQueue()
{
    // construct the QuickQueue object
    // allocate memory to T** myList[]
    this->myList = new T*[DEFAULT_SIZE];
    this->current_size = 0;
    this->capacity = DEFAULT_SIZE;

};

template<class T>
void QuickQueue<T> :: Enqueue(T* item)
{
    // dynamically allocate more memory if needed
    if(this->current_size == this->capacity)
    {
        cout << "Dynamically Allocated 3 Additional Indices in Array" << endl;
        this->capacity += 3;
        T** temp = new T*[this->capacity];

        for(int i = 0; i < this->current_size; i++)
        {
            temp[i] = this->myList[i];
        }
        delete [] myList;
        this->myList = temp;
    }
    // implement the Enqueue function
    this->myList[current_size] = item;
    this-> current_size++;

};

template<class T>
T QuickQueue<T> :: Dequeue()
{
    // implement the Dequeue function
    T temp = *(this->myList[current_size - 1]);
    delete this->myList[current_size - 1];
    cout << "Deleted Pointer Succesfully" << endl;

    current_size--;
    return temp;
};

template<class T>
void QuickQueue<T> :: PrintOut()
{
    // print out all values pointed at in array of pointers
    cout << "Total List Size: " << this->current_size << endl;
    for(int i = 0; i < this->current_size; i++)
    {
        cout << "List Index " << i <<  " Value Pointed At: " << *(myList[i]) << endl;
    }
}

template<class T>
QuickQueue<T> :: ~QuickQueue<T>()
{
    // implement deletion of T** myList[] and then the object itself
        // for loop to delete pointers stored in T** myList[]
};

template<class T>
QuickQueue<T>& QuickQueue<T> :: operator=(const T& item)
{
    // implement the deep copy assignment operator overload
};


#endif