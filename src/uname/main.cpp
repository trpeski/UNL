
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
#include <sstream>


using namespace std;

#define MAX_STRING_SIZE 9999999999

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
      if(string(argv[1]) == "print")
        {
            cout << argv[2] << endl;
        }


     //////////////////////////////////////////////////
      else if(string(argv[1]) == "writetofile")
        {
            ofstream file(argv[2]);
            file << argv[3];
            file.close();
        }

    /////////////////////////////////////////////////
     else if(string(argv[1]) == "readfromfile")
        {
            string line;
            fstream file(argv[2]);
            while(getline(file, line))
                {
                    cout << line;
                }
        }
      /////////////////////////////////////////////
       else if(string(argv[1]) == "help")
        {
            cout << " print param(str) // prints to the screen \n\n writetofile param(name,str) // writes a word to a file \n\n readfromfile param(name) // reads from a file \n\n delete param(name) // deletes a file \n\n load param(name) // loads a script\n\n";
        }
      /////////////////////////////////////////////
       else if(string(argv[1]) == "delete")
        {
            remove(argv[2]);
        }
     //////////////////////////////////////////////
       else if(string(argv[1]) == "load")
        {
            string str("loader ");
            str += argv[2];
            system(str.c_str());
        }
        else if(string(argv[1]) == "matrixeffect")
        {
                ofstream file("matrix.bat");
                file << "@echo off \n color 2 \n :a \n echo %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% \n goto a";
                file.close();
                system("start matrix.bat");

                //system("del matrix.bat"); deleting the file will couse the cmd to not be able to find the bat file and give
		                           // an error message so for now the user will need to delete it :)

        }




	  return 0;
  }
}

