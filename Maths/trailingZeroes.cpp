//trailing zeroes for a factorial -->
//example - n = 5
// 5! = 120
//Number of trailing zeroes are - 1 (output --> 1)
//Idea - greatest integer function. 

//https://leetcode.com/problems/factorial-trailing-zeroes/discuss/52371/My-one-line-solutions-in-3-languages

#include "bits/stdc++.h"
using namespace std;

int trailingZeros(int n){
int res=0;
for(int i=5; i<=n; i=i*5)
    res = res+n/i;
return res;
}

int main(){
    int n;
    cin>>n;
    int result = trailingZeros(n);
    cout<<result;
}

/*
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int p=5;
        while(n/p>0)
        {
            ans += n/p;
            p=p*5;
        }
        return ans;
        
    }
};
*/