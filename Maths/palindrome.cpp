#include "bits/stdc++.h"
using namespace std;
  bool isPalindrome(int num)
  {
      int rev=0;
      int temp = num;
      while(temp!=0)
      {
          int ud=temp%10;
          rev= rev*10+ud;
          temp=temp/10;
      }
      return(rev==num);
  }

  int main()
  {
        int num;
        cin>>num;
        if(isPalindrome(num))
        cout<<"is palindrome!";
        else
        cout<<"NOT palindrome";
        return 0;
  }