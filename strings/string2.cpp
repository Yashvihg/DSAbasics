// #include<iostream>
// #include<cstring>
// #include <algorithm>
// question from --> https://hack.codingblocks.com/app/practice/6
#include "bits/stdc++.h"
using namespace std;

//function accepts and returns a string: 
string extractStringAtKey(string str, int key){
  // string str has to be converted to char - typecasting
//strtok - accepts and returns a char array. 
  char *s = strtok((char * )str.c_str()," ");
  while(key>1){
    s = strtok(NULL, " ");
    key--;
  }
  return string(s);
}

int convertToInt(string s){
  int ans = 0;
  int p = 1;
  for(int i=s.length()-1; i>=0;i--){
    ans += ((s[i] - '0')*p);
    p*=10;
  }
  return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2){

  string key1, key2;
  key1=s1.second;
  key2=s2.second;
  return convertToInt(key1) < convertToInt(key2);  //key1=13, key2=022 -> 13<22
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2){

  string key1, key2;
  key1=s1.second;
  key2=s2.second;
  return key1<key2;   //already defined on strings
}

 int main(){
   int n;
   cin>>n;
   cin.get(); // take all the whitespaces. 

   //5\n - the \n gets removed here. 

   string a[100];
   for(int i = 0; i<n; i++){
     getline(cin, a[i]);
   }

   int key;
   string revarsal, ordering;
   cin>>key>>revarsal>>ordering;
  


   pair<string, string> strPair[100];
    for(int i=0; i<n; i++){
      strPair[i].first = a[i];
      strPair[i].second = extractStringAtKey(a[i], key);
    }

    //sorting

    if(ordering == "numeric"){
      sort(strPair, strPair+n, numericCompare);
    }
      else{
        sort(strPair, strPair+n, lexicoCompare);
      }

    //revarsal
    if(revarsal == "true"){
        for(int i=0; i<n/2; i++){
          swap(strPair[i], strPair[n-i-1]);
        }
      }

      for(int i = 0; i<n; i++){
        cout<<strPair[i].first<<endl;
      }

      return 0;  
 }