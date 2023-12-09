#include"quick-queue.h"

int main()
{
    QuickQueue<int> int_queue;

    // Dynamically allocate some ints for demo
    int* value1 = new int; 
    *(value1) = 5;
    int* value2 = new int; 
    *(value2) = 7;
    int* value3 = new int; 
    *(value3) = 2;
    int* value4 = new int; 
    *(value4) = 1;
    int* value5 = new int;
    *(value5) = 9;
    
    // Enqueue all the new dynamically allocated ints
    int_queue.Enqueue(value1);
    int_queue.Enqueue(value2);
    int_queue.Enqueue(value3);
    int_queue.Enqueue(value4);
    int_queue.Enqueue(value5);
    int_queue.PrintOut();

    // Dequeue a value from the array
    int returnedValue = int_queue.Dequeue();
    cout << "returnedValue: " << returnedValue << endl;
    int_queue.PrintOut();

    // Add another value to array to demonstrate successful Dequeue implementation
    int* value6 = new int;
    *(value6) = 87;
    int_queue.Enqueue(value6);
    int_queue.PrintOut();    

    for(int i = 0; i < 6; i++)
    {    
    // Dequeue's else statement triggered when trying to delete from empty pointer list
        // 'No More Pointers Left To Delete'
        int_queue.Dequeue();
    }
    int_queue.PrintOut();


//-------------------------- Same As Above But With Char Type --------------------------//

    // demo of QuickQueue (template class) being used for char type

    QuickQueue<char> char_queue;

    // Dynamically allocate some chars for demo
    char* char1 = new char; 
    *(char1) = 'a';
    char* char2 = new char; 
    *(char2) = 'b';
    char* char3 = new char; 
    *(char3) = 'c';
    char* char4 = new char; 
    *(char4) = 'd';
    char* char5 = new char; 
    *(char5) = 'e';

    // Enqueue all the new dynamically allocated chars
    char_queue.Enqueue(char1);
    char_queue.Enqueue(char2);
    char_queue.Enqueue(char3);
    char_queue.Enqueue(char4);
    char_queue.Enqueue(char5);
    char_queue.PrintOut();

    for(int i = 0; i < 6; i++)
    {
    // Dequeue's else statement triggered when trying to delete from empty pointer list
        // 'No More Pointers Left To Delete'
        char_queue.Dequeue();
    }
    char_queue.PrintOut();
    
    cout << "Note that when destructor called, 'PPc' stands for char-pointer-pointer type and 'PPi' stands for int-pointer-pointer type" << endl;

    return 0;
}


// g++ quick-queue.h quick-queue-main.cpp -o appQuickQueue.exe