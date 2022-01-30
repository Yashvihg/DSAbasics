
// https://leetcode.com/problems/perfect-number/solution/

#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num) {
    long int sum=1;
    for(int i=2; i*i<=num; i++){
        if(num%i == 0){
            if(i*i!=num){
                sum = sum + i + num/i;
                // cout<<i<<"  "<<sum<<endl;
            }

            else
                sum=sum+i;
        }
        if(sum == num && num!=1) return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(checkPerfectNumber(n)) cout<<"true";
    else cout<<"false";
}