#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int countDigits(int x)
{
    int res = 0;
    while(x>0)
    {
        x = x/10;
        res++;
    }
     return res;
}
int main()
{
   int x;
   cin>>x;
   int result = countDigits(x);
   cout<<result;
return 0;
}