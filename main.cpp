
#include <bits/stdc++.h> 
#include <iostream> 
#include <string> 

using namespace std; 
  
void run_program(void);
void extract_tokens(string str);

int main(int argc, char **argv)
{

  run_program();


  return EXIT_SUCCESS;
}



void run_program(void)
{

  int status=1;

  do {
    printf("> ");
    string input; 
      
    cout << "Point A1 \n"; 
    getline (cin, input); 
    extract_tokens(input);


  } while(status);
}



void extract_tokens(string str) 
{ 
   string word = ""; 
   for (auto x : str) 
   { 
       if (x == ' ') 
       { 
           cout << word << endl; 
           word = ""; 
       } 
       else
       { 
           word = word + x; 
       } 
   }  
   cout << word << endl; 
} 