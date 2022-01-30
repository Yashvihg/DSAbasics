#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[10][20];
    int n;
    cin>>n;

    cin.get();
    for(int i=0; i<n; i++){
        cin.getline(a[i], 20);
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}