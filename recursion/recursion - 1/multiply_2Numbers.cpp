// recursive function to multiply two numbers - (a,b) without using the '*' operator. 
//hint - 6*4 = 6+6+6+6. 

#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b){
    if(b==0) return 0;
    if(b>0){
        return a + multiply(a, b-1);
    }
}



int main(){
    int a, b;  // a,b - values 
    cout<<"Enter 'a' and 'b' respectively: ";
    cin>>a>>b;
    cout<<multiply(a,b);
}