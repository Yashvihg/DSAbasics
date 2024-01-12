// convert string to integer -->

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 123;
    int rem;
    string str; // str = to_string()
    while(num!=0){
        rem = num%10;
        // str.push_back(rem);
        str+= rem + 48; //str+=rem+'0'
        num/=10;
    }

    // 123 --> floor(log10(n)+1);

    reverse(str.begin(), str.end());
    cout<<str;
    return 0;
}