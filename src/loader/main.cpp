
#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;

int main(int argc,char** argv)
{
    fstream file(argv[1]);
    string line;

    while(getline(file, line))
    {
        line = "uname " + line;
        system(line.c_str());
    }



    return 0;
}
