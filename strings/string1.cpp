
//creating an strtok - string tokenizer funtion -->

#include <iostream>
#include<cstring>

using namespace std;

char *mystrtok(char *str, char delim){
  static char *input = NULL;
  if(str!=NULL){
    input=str;
  }
  //base case to stop the while loop. 
  if(input == NULL){   
    return NULL;
  }

  //extraction of Tokens from here. 
  //since we dont know the size needed we give the strings size. 
  char *output = new char[strlen(input)+1]; 
  // char *output = new char[10];
  int i=0;
  for(; input[i]!='\0'; i++){
    if(input[i]!=delim){
      output[i] = input[i];
    }
    else{
      output[i] = '\0';
      input = input + i + 1;
      return output;
    }
  }
  output[i] = '\0';
  input = NULL;
  return output;

}

int main() {
  char s[50] = "Today is a rainy day";
  char *ptr = mystrtok(s, ' '); // prints the first word. 
  cout<<ptr<<endl;

  while(ptr!=NULL){
    ptr = mystrtok(NULL, ' ');
    cout<<ptr<<endl;
  }

  return 0;
} 