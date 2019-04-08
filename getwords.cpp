// C++ program to print words in a sentence 
#include <bits/stdc++.h> 
using namespace std; 
  
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
  
// Driver function 
int main() 
{ 
    string str = "echo all"; 
    extract_tokens(str); 
    return 0; 
} 
