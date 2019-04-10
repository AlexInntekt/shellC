
#include <bits/stdc++.h> 
#include <iostream> 
#include <string> 
#include <stdio.h>
#include<unistd.h> 

using namespace std; 
  
void run_program(void);
string* extract_tokens(string str);
int run_arg(string arg, string str2);

int main(int argc, char **argv)
{

  

  run_program();

  

  return EXIT_SUCCESS;
}



void run_program(void)
{

  int running=1;

  do {
    printf("\n> ");
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

    run_arg(commands[0], commands[1]);

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



int run_arg(string arg, string arg2)
{
     //cout << "run_arg_1 \n";
     int status=1;
     
     if(string("halt")==string(arg))
     {
        cout << "Exiting shell";
        exit(0);

     }

     //show all childs of current directory
     if(string("sldir")==string(arg))
     {
        cout << system("ls");

        return status;
     }

     //show path
     if(string("spath")==string(arg))
     {
        cout << getenv("PATH");

        return status;
     }

     //get back one parent
     if(string("back")==string(arg))
     {
        chdir("..");

        return status;
     }

     //show path of current directory
     if(string("sdir")==string(arg))
     {
        char cwd[PATH_MAX];
         if (getcwd(cwd, sizeof(cwd)) != NULL) {
             printf("Current working dir: %s\n", cwd);
         } else {
             perror("getcwd() error");
         }

         return status;
     }

     
      
     cout << "set of commands not found";
     return status;
}





