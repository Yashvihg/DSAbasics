// basics-1 - fibonacchi using recursion. 
// 0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34....
// 0   1   2   3   4   5   6    7   8    10
//RECURSIVE -->
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int fibonacchi(int n){
    if(n==0 or n==1) return n;  //or of(n<2) return n;
    return fibonacchi(n-1) + fibonacchi(n-2);
}

int main(){
    int n;
    cout<<"enter: ";
    cin>>n;
    cout<<fibonacchi(n)<<nl;
    return 0;
}

    //f1 = fibonacchi(n-1);
    //f2 = fibonacchi(n-2);
    //f = f1 + f2;



