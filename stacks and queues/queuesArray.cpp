// Implementation of queues using arrays

#include<bits.stdc++.h>
using namespace std;

class Queue {
    int start, end, currSize, maxSize, *arr;
    public:
        Queue(){
            arr = new int[20];
            start = -1;
            end = -1;
            currSize = 0;
        }
        
}