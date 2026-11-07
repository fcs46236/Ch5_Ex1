/* Program File Name: Ch5_Ex1
Programmer: Frank Sonsini
Date : November 2026
Requirements :
    Write a program that uses a loop to display the characters for ASCII codes 32 through 127.  Display 16 characters on each line with one space between characters.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    for (int i = 32; i <= 127; ++i)
    {

        if (i == 32)
            cout << "Space";

        else if (i == 127)
            cout << "DEL";

        else
            cout << static_cast<char>(i);


        if ((i - 31) % 16 == 0)  // Print 16 characters per line
            cout << "\n";

        else
            cout << " ";
    }

    return(0);
}