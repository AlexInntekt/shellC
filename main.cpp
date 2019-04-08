
#include <bits/stdc++.h> 
#include <iostream> 
#include <string> 

using namespace std; 
  
void run_program(void);
string* extract_tokens(string str);
void run_arg_1(string arg);

int main(int argc, char **argv)
{

  run_program();

  return EXIT_SUCCESS;
}



void run_program(void)
{

  int running=1;

  do {
    printf("> ");
    string input; 
      
    //cout << "Point A1 \n"; 
    string* commands = new string[3];
    getline (cin, input); 
    commands = extract_tokens(input);

    for(int i=0;i<3;i++)
    {
      cout << commands[i] << "\n";
      
    }

  } while(running);
}



string* extract_tokens(string str) 
{ 
   //cout << "Point A2 \n";
   string* commands = new string[3];
   string word = "";
   int i=0; 
   for (auto x : str) 
   { 
       if (x == ' ') 
       { 
           commands[i]=word;
           i++;
           word = ""; 
       } 
       else
       { 
           word = word + x; 
       } 
   }  
   commands[i]=word;

   return commands;
} 

void run_arg_1(string arg)
{
     cout << "run_arg_1 \n";

     if(arg.compare("dirs")==1)
     {
        cout << "exit";
        //system("exit");
     }
}





