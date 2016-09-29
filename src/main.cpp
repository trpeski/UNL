
/*
MIT License

Copyright (c) 2016 Antonio Trpeski

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

#define MAX_SIZE 9
using namespace std;



int main(int argc,char *argv[])
{

/////////////////////////////////////////////////////
  if(argc == 1)
  {
     cout<<"No commands given"<<endl;
     exit(1);
  }
/////////////////////////////////////////////////////
  else{


     //////////////////////////////////////////////////
      if(string(argv[1]) == "print \n")
        {
            cout << argv[2];
        }


     //////////////////////////////////////////////////
      if(string(argv[1]) == "writetofile")
        {
            ofstream file(argv[2]);
            file << argv[3];
            file.close();
        }

    /////////////////////////////////////////////////
      if(string(argv[1]) == "readfromfile")
        {
            ifstream file(argv[2]);
            bool endoffile = false;

			char* str = new char[MAX_SIZE];

			while (!file.eof())
			{
				for (int i = 0; i <= MAX_SIZE; i++)
				{
				    file >> str[i];
				    if(str[i] == '\0'){endoffile = true; break;}
				    cout << str[i];
                }
                if(endoffile == true)break;
			}


			delete[] str;

            file.close();
        }

      /////////////////////////////////////////////
       if(string(argv[1]) == "help")
        {
            cout << " print param(str) // prints to the screen \n\n writetofile param(name,str) // writes a word to a file \n\n readfromfile param(name) // reads from a file \n\n delete param(name) // deletes a file ";
        }
      /////////////////////////////////////////////
       if(string(argv[1]) == "delete")
        {
            string str("del ");
            str += argv[2];
            system(str.c_str());
        }




	  return 0;
  }
}
