//recursive function to perform power --> a^n. follow --> a.a^(n-1)

#include<bits/stdc++.h>
using namespace std;

int power(int val, int n){
    if(n!=0)
        return val * power(val, n-1);
    else return 1;
}

int main(){
    int a, n;  // a-base, n-power. 
    cout<<"Enter A and N respectively: ";
    cin>>a>>n;
    cout<<power(a,n);
}