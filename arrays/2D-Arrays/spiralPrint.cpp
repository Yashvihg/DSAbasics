//to print a spiral of a 2D arrat -->

// basic program to input and output 2-D arrays:

#include<iostream>
using namespace std;

void spiralPrint(int a[][10], int m , int n){
    int sr=0, sc=0, er=m-1, ec=n-1 ; // s-start, e-end, r-row, c-col. 
    while(sr<=er and sc<=ec){
        for(int i=sc; i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;

        for(int i=sr; i<=er; i++){
            cout<<a[i][ec]<<" ";
        }
        ec--;

        //last row
        if(er>sr){
            for(int i=ec; i>=sc; i--){
                cout<<a[er][i]<<" ";
            }
            er--;
        }

        //start col
        if(ec>sc){
            for(int i=er; i>=sr; i--){
                cout<<a[i][sc]<<" ";
            }
            sc++;
        }

    }

}

int main(){
    int a[10][10] = {0};
    int m, n; // m-rows, n-cols
    cout<<"enter the 2D Array dimensions: ";
    cin>>m>>n;

    //INPUT
    cout<<"Enter Elements: "<<endl;
    for(int row = 0; row<m; row++)
        for(int col = 0; col<n; col++)
            cin>>a[row][col];
    
    //OUTPUT
    for(int row = 0; row<m; row++){
        for(int col = 0; col<n; col++)
            cout<<a[row][col]<<"  ";
        cout<<endl;
    }

    //spiral printing --> 
    spiralPrint(a, m, n);

    return 0;
}