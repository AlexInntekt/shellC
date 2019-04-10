
#include <bits/stdc++.h> 
#include <iostream> 
#include <string> 
#include <stdio.h>

using namespace std; 
  
void run_program(void);
string* extract_tokens(string str);
int run_arg_1(string arg);

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
      //cout << commands[i] << "\n";
      // run_arg_1(commands[i]);
    }

    run_arg_1(commands[0]);

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



int run_arg_1(string arg)
{
     //cout << "run_arg_1 \n";
     int status=1;
     
     if(string("halt")==string(arg))
     {
        cout << "exit";
        //system("exit");
     }

     if(string("dire")==string(arg))
     {
        cout << system("ls");
        //system("exit");
     }

     

     return status;
}





