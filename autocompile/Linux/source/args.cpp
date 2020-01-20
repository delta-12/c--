#include <iostream>
using namespace std;

// Can use agrc and argv
// argc = argument count, number of arguments
// argv = argument vector, array of arguments
// int main(int argc, char** argv)
// int main(int num_args, char** arg_strings)

int main(int argc, char** argv)
{
    cout << "You have entered " << argc
         << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}
