// WinSudo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

int main(int argc, char* argv[]) 
{
    std::string start_process_str 
        = "powershell -Command \"Start-Process powershell -Verb RunAs -ArgumentList ";

    std::string arg_str;

    // Loop through each argument and append it to the arg_str string
    for (int i = 1; i < argc; i++) 
    {
        arg_str += std::string(argv[i]) + "\"";
    }

    // Execute the command string using the system() function
    system((start_process_str + arg_str).c_str());

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
