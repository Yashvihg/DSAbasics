//  CB question.  --> https://hack.codingblocks.com/app/practice/6/1012/problem

#include "bits/stdc++.h"
#include<iostream>
using namespace std;

void rotateImage(int a[][10], int n){ //changing rows
    //Row Reversal -->
    for(int i=0;i<n;i++){
        int startCol=0, endCol=n-1;
        while(startCol<endCol){
            swap(a[i][startCol], a[i][endCol]);
            startCol++; 
            endCol--;
        }
    }

    //transpose it -->
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(a[i][j], a[j][i]);
            }

        }
    }

}

void display(int a[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

/*
//same above function using STL -reverse(start_container, end_container) 
void rotate_stl(int a[][10], int n){
    //go to every row and col_wise reverse values. 
    for(int i=0; i<n; i++){ 
        reverse(a[i], a[i]+n)   // a[i] - row pointer - denotes address of the row. 
    }   

    //redo TRANSPOSE.
}
*/


int main(){
    int a[10][10];
    int n;
    cin>>n; //SQUARE MATRIX. 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    
    rotateImage(a, n);
    display(a, n);

    return 0;
}