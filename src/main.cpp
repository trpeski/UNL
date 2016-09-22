#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
  if(argc == 1)
  {
     cout<<"No commands given"<<endl;
     exit(1);
  }
  else
  {
      if(string(argv[1]) == "print")
        {
            cout << argv[2];
        }



	  return 0;
  }
}
