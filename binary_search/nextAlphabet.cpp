// to find the next alphabet of the given alphabet in a sorted array of alphabets / letters -->
 // To find the ceiling of a number in a sorted array

#include "bits/stdc++.h"
using namespace std;

// char nextLetterSearch( vector<char>& c, int n, char alpha){
char nextLetterSearch( char c[], int n, char alpha){
    int s=0, e=n-1;
    // char res = '#'; 
    char res = -1;
    if(alpha>=c[n-1]) return c[0]; // or doesnt exist
    while(s<=e){
        int mid= s + (e-s)/2;
        if(alpha == c[mid]){ s= mid+1;}
        else if(alpha>c[mid]){ s = mid + 1;}
        else if(alpha<c[mid]){ 
            res = mid;
            e = mid - 1;
        }
    }
    return c[res];
}

int main(){
    int n;
    char ele, alpha;
    // vector<char> c;
    char c[50];
    cout<<"Enter number of Alphabets: ";
    cin>>n;
    cout<<"Enter Alphabets: ";
    for(int i=0; i<n; i++){
        // cin>>ele;
        // c.push_back(ele);
        cin>>c[i];
    }

    cout<<"\nEnter the alphabet to search: ";
    cin>>alpha;
    char result = nextLetterSearch(c, n, alpha);
    cout<<"the Next Alphabet of "<<alpha<<" is --> "<< result;
}