#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>
#include<readline/history.h>
#include<sstream>
using namespace std;

char* username = getenv("USER");

void clear(){
  printf("\033[H\033[J");
}

void init_shell()
{
    clear();
    printf("\033[1;34m\no----------------------------------------o"
        "\n|                        _          _ _  |"
        "\n|   ___  _     _     ___| |__   ___| | | |"
        "\n|  / __|| |_ _| |_  / __| '_ \\ / _ \\ | | |"
        "\n| | (_|_   _|_   _| \\__ \\ | | |  __/ | | |"
        "\n|  \\___||_|   |_|   |___/_| |_|\\___|_|_| |"
        "\n|                                        |"
        "\no----------------------------------------o"
        "\033[0m\n");
    printf("\n******************************************");
    printf("\n");
    printf("|\033[1;32m Welcome %s\033[0m", username);
    printf("\n******************************************");
    printf("\n|\033[1;32m You can exit by pressing q at any time\033[0m");
    printf("\n******************************************");
    printf("\n");
    printf("\n");
    sleep(1);
}

void prompt(){
  cout << "\033[1;31m[cli] >>> \033[0m";
}

int main(){
  init_shell();
  string instr;
  prompt();
  getline(cin, instr);
  cout << instr << endl;
  return 0;
}
