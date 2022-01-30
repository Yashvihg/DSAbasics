// CB question.  --> https://hack.codingblocks.com/app/practice/6/1051/problem

#include<iostream>
using namespace std;


//k threshold strength to get out of the park
//s initial strength
void magicalPark(char a[][10], int m, int n, int k, int s){
   //can the person get out of the park 
   bool success = true;

   for(int i=0; i<m; i++){
       for(int j=0; i<n; j++){
           char ch = a[i][j];

           if(s<k){
               success = false;
               break;
           }

           if(ch=='*'){
               s+=5;
           }
           else if(ch == '.'){
               s-=2;
           }
           else{
               break;  //incase of a '#'
           }  //loss of one point when moving right. 
            if(j!=n-1){
                s--;
            }
       }
   }

   if(success){
       cout<<"Yes"<<endl;
       cout<<s<<endl;
   }
   else{
       cout<<"No"<<endl;
       cout<<s<<endl;
   }
}

int main(){
    int m, n, k, s;
    char a[10][10];
    cin>>m>>n>>k>>s;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    
    magicalPark(a, m, n, k, s);

    return 0;
}