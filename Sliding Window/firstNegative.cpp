//first negative number in every subarray - k. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
}



/*
Great explanation.
BTW, this can be solved without using queue(or any other DS), if we slide the window from right to left.

GFG sol :
vector<long long> printFirstNegativeInteger(long long int a[], 
                            long long int n, long long int k) 
{
    vector<long long> ans;
    int i = n-1, j = n-1;
    int neg = 0, ind=n;
    
    while(i>=0){
        if(a[i]<0) {
            neg = a[i];
            ind = i;
        }
        if(j-i+1<k) i--;
        else if(j-i+1==k){
            if(ind>j) neg = 0;
            ans.push_back(neg);
            i--; j--;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}
*/