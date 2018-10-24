//@rofi
//36. Write a program to copy a text file to another file.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{

     

    ifstream infile(argv[2]);
    ofstream outfile(argv[1]);
    string content = "";
    int i;

    for(i=0 ; infile.eof()!=true ; i++) 
        content += infile.get();

    i--;
    content.erase(content.end()-1);     // erase last character

    infile.close();

    outfile << content;                 // output
    outfile.close();
    return 0;
}

