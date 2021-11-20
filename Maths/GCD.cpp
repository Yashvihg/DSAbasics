// three solutions to the same --> 

//optimized approach (euclidean algorithm)
#include "Bits/stdc++.h"
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int divisor = gcd(a,b);
    cout<<divisor;
    return 0;
}

/*
int gcd(int a, int b)
{
    int res = min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
            break;
        res--;
    }
}

//other one --> 
int gcd(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }return a;
}
 */