// program to print values in a wave form 

#include<iostream>
using namespace std;

int main(){
    int a[10][10] = {0};
    int m, n; // m-rows, n-cols
    cout<<"enter the 2D Array dimensions: ";
    cin>>m>>n;

    //INPUT
    cout<<"enter elements: \n";
    for(int row = 0; row<m; row++)
        for(int col = 0; col<n; col++)
            cin>>a[row][col];
    
    //OUTPUT
    for(int row = 0; row<m; row++){
        for(int col = 0; col<n; col++)
            cout<<a[row][col]<<"  ";
        cout<<endl;
    }
    cout<<endl;

    //wave print --> 
    for(int col=0;col<n;col++){
        if(col%2 == 0){
            //even - top to down
            for(int row = 0; row<m; row++)
                cout<<a[row][col]<<" "; 
        }
        else{
            //down to top
            for(int row = m-1; row>=0; row--)
                cout<<a[row][col]<<" ";
        }
    }

    return 0;
}