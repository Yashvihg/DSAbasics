// basic program to input and output 2-D arrays:

#include<iostream>
using namespace std;

int main(){
    int a[10][10] = {0};
    int m, n; // m-rows, n-cols
    cout<<"enter the 2D Array dimensions: ";
    cin>>m>>n;

    //INPUT
    for(int row = 0; row<m; row++)
        for(int col = 0; col<n; col++)
            cin>>a[row][col];
    
    //OUTPUT
    for(int row = 0; row<m; row++){
        for(int col = 0; col<n; col++)
            cout<<a[row][col]<<"  ";
        cout<<endl;
    }

    return 0;
}