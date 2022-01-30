//normally --> maths
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER n: "; 
    cin>>n;
    int f0=0, f1=1, sum=0;
    for(int i=0; i<n; i++){
        sum=f0+f1;
        f0 = f1;
        f1 = sum;
    }
    cout<<"Fibonacchi --> "<<f0;
}
*/
// DP -->


#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int fibonacchi(int f[],int n){
    // int n = f.size();
    f[0]=0; 
    f[1]=1;
    for(int i=2; i<n; i++){
        f[i] = f[i-1]+f[i-2];
    }
    return f[n];
}

int main(){
    int f[100],n;
    cout<<"enter: ";
    cin>>n;
    cout<<fibonacchi(f,n)<<nl;
    return 0;
}
