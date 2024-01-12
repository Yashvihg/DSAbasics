// String to integer without - stoi() funtion

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "123";
    int sum=0;

    for(int i = 0; i<s.size(); i++){
        sum = sum*10 + (int) s[i] - 48;
    }

    cout<<sum;

}