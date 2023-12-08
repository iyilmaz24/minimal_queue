#include"quick-queue.h"

int main()
{
    QuickQueue<int> main_queue;

    // dynamically allocate some ints for demo
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
    
    main_queue.Enqueue(value1);
    main_queue.Enqueue(value2);
    main_queue.Enqueue(value3);
    main_queue.Enqueue(value4);
    main_queue.Enqueue(value5);
    main_queue.PrintOut();

    int returnedValue = main_queue.Dequeue();
    cout << "returnedValue: " << returnedValue << endl;
    main_queue.PrintOut();

    int value6 = 87;
    main_queue.Enqueue(&value6);
    main_queue.PrintOut();    



    return 0;
}


// g++ quick-queue.h quick-queue-main.cpp -o appQuickQueue.exe