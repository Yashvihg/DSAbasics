// to print the first n numbers -->
 // incresing order
 // decresing order

#include<bits/stdc++.h>
using namespace std;
    
void decreasing(int n){
    if(n==0){
        return;
    }
        cout<<n<<"  ";
        decreasing(n-1);
        
}

void increasing(int n){
    if(n==0){
        return;
    }
        increasing(n-1);
        cout<<n<<"  ";
}

 int main(){
    int n; 
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Decreasing --> "<<"\n";
    decreasing(n);
    cout<<endl;
    cout<<"Increasing --> "<<"\n";
    increasing(n);
 }


// int decreasing(int n){
//     if(n!=0){
//         cout<<n<<"  ";
//         decreasing(n-1);
//     }  
//     return 0;
// }