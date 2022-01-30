// to take in strings into 2d arrays. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    // char a[][10] = {{'a','b','\0'}, {'d', 'e', 'f', '\0'}};
    char a[][10] = {"ab", "def", "ghi", "hello"};   //automatically terminated by NULL chars 
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;

    return 0;
}