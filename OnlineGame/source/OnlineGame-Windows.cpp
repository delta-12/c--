#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  for(int a=0;a<10;a++)	// Change a<10 to how many times you want the command to be run
  {
    system("start http://google.com");	// Change google with a URL you want or
                                        // insert any other shell command that would start a process
  }
}
