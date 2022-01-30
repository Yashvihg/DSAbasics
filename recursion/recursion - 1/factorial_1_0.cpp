// basics-1 - factorial using recursion. 
//steps to follow include ->
// recursiom follows mathematical rules -> PMI (principle of mathematical induction)
// 1 --> find out the base case. 
// 2 --> assumption - that sub problems can be solved recursively
// 3 --> using sub problems write the answer for current problems
// 4! --> 4 x 3 x 2 x 1   


#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int factorial(int n){
    if(n==0) return 1;     //base case
    return n * factorial(n-1);     //recursive case
}

int main(){
    int n; 
    cout<<"enter the number to find FACTORIAL --> ";
    cin>>n; // n!
    cout<<factorial(n)<<nl;
    return 0;
}

// OR 

/*
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

*/