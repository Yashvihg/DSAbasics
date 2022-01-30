//Efficient approach
#include "bits/stdc++.h"
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int multiple = lcm(a,b);
    cout<<multiple;
    return 0;
}


// not efficient
/*
int lcm(int a, int b)
{
    int res = max(a,b);
    while(true) //always true
    {
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
}
*/