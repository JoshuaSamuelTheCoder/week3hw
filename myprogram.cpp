
#include <fstream>
#include <iostream>

using namespace std;

void pyramid(string* loc, int levels) 
{
    std::string s = *loc;
    s = "*\n**\n***\n****"; //no you can't do this, you gotta do it with for loops
    //put code here (s+= "*") and etc, \n gives you a line break

    for (int i = 1; i <= levels; i++)
    {
      for (int j = 0; j < i; j++)
     {

         s+="*";
      }

      s+="/n"

     }
    *loc = s;

}
int main ( int argc, char *argv[] )
{
  if (argc == 1)
  {
     // print an error and do nothing
  }
  else if (argc == 2)
  {
      // validate argv[1]  to be "-h"
      if ((strcmp (argv[1], "-h")) == 0)
      {
      }
      else
      {
      }
  }
  else if (argc == 3)
  {
      // validate argv[1]  to be "-h"
      if ((strcmp (argv[1], "-h")) == 0)
      {
      }
      else
      {
           break;
      }

      // validate argv[2]  to be one of the commands
      if ((strcmp (argv[2], "nano")) == 0)
      {
         cout << "A terminal text editor (cannot run now)";
      }
      else if ((strcmp (argv[2], "ls")) == 0)
      {
         cout << "list file in a dir";
      }
      else if ((strcmp (argv[2], "cd")) == 0)
      {
         cout << "change current working directory";
      }

      else
      {
           break;
      }

    string str = "";
    string* strLoc = &str;
    pyramid(strLoc, 3);
    cout << str << endl;
      
  }

}
