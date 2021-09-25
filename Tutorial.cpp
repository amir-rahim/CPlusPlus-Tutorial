//
// Created by Amir Rahim on 25/09/2021.
//

// Single line comments indicated by two slashes

/*
 * Multiple line comments indicated by a slash and asterisk
 */

#include <iostream>

// This allows for you not to have to put before commands
using namespace std;

// main() is where program execution begins.
int main() {

    // Prints Hello World to the terminal using the "cout" command
    cout << "Hello World!" << endl;

    // Primitive data types are listed below
    bool boolean = true;
    char character = 'a';
    int integer = 1;
    float decimal = 1.1;
    double biggerDecimal = 1.2;
    void valueless;
    wchar_t wideCharacter;
    // It is heavily recommended for variables in C++ to be initiated to keep consistency between runs

    // In C++ you have typedef which allows you to use an alternative name for a data type
    typedef int meters;
    meters distance;

    // Enums limits the options the value of a variable can be, from a predicated list from the declaration
    enum Colours {Red, Orange, Yellow, Green, Blue, Indigo, Violet} rainbowColours;
    rainbowColours = Red;

    // This return is the exit code, similar to the exit codes in other languages
    return 0;
}