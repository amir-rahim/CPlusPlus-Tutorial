<a name="C-Plus-Plus-Tutorial"/>

# C++ Tutorial

## Table of Contents

- **[Introduction](#Introduction)**
- **[Chapter 1 - Back to Basics](#Back-to-Basics)**
- **[Chapter 2 - Running a Program](#Running-a-Program)**
- **[Chapter 3 - Variables and Data](#Variables)**
- **[FAQs](#FAQs)**
- **[Credits](#Credits)**

<a name="Introduction"/>

## Introduction

<a name="Back-to-Basics"/>

## Chapter 1 - Back to Basics

Starting off by talking about the fundamental structure of the program in this programming language. 

We will start off about the headers which contain the information that is required for the program.
We only need to include the things that we need to use in the program. This can be added to as you program, so this you can come back to later.

There are pre-existing header files, or you can create your own header files, either way you have to import is using #include.

Below shows a code example of including the input output stream header file.
```C++
#include <iostream>
```

Having namespace allows you to tell the compiler to use std, which we will see below in this chapter why it is useful.
This part also shows that ; is used to show the end of a statement.
```C++
using namespace std;
```

Like a quite a few other programming languages, such as Java, program starts at main().
This has 'int' in the signature of the method as this is later returned as an exit code.
```C++
int main() {
    return 0;
}
```

"cout" is a commonly used function for outputting to the terminal. 
Without the name space we would hae to put STD and two colons prior to writing "cout".
"endl"  marks the end of the line, so anything after this will be printed on the line after this.
```C++
cout << "Hello World!" << endl;
```

By combining all the things in this chapter so far we can make our first program of C++ which prints out "Hello World!" to the terminal.
```C++
#include <iostream>

using namespace std;

int main() {

    cout << "Hello World!" << endl;
    
    return 0;
}
```

<a name="Running-a-Program"/>

## Chapter 2 - Running a Program

Now that we have a program in our file, we can save this file with the extension of ".cpp", any extra header files would have the extension of ".h".
With this you will need knowledge of the terminal or command line in order to run this file, as C++ runs on this (future tutorial potentially to be added).

Navigate in the command line to the current directory and use the format
>$ g++ *FILE NAME*.cpp

Replacing the file name with what you named your file, then in order to see a result you type
>$ ./a.out

This will run the executable file that was generated from the first command... and voilà, you have your program running if of course without errors.

To set a standard on the creation of the executable "-std=*version number*", "-o" creates an executable and that followed up by what you want to name it.

This could then lead to this command instead of the first command.
>$ g++ -std=c++11 -o HelloWorld HelloWorld.cpp
> 
>$ ./HelloWorld

<a name="Variables"/>

## Chapter 3 - Variables and Data

The Primitive data types are listed in the program, these can be used without any use of an import needed. A table of them is listed below as well.

| Name  | Data Type |
| ------------- | ------------- |
| Integer  | int  |
| Float  | float |
| Double  | double  |
| Boolean  | bool  |
| Character  | char  |
| Valueless  | void  |
| Wide Character  | wchat_t  |

In C++ you have typedef which allows you to use an alternative name for a data type. Like the example used in the program and shown below, meters is now the same as an int.

```C++
typedef int meters;
meters distance;
```

Enumerated Types or Enums are also usable in C++, that is by using the key word enum prior to the enum.
This limits the options the value of a variable can be, from a predicated list, from the declaration. 
The typical form of an Enum is shown below.
```C++
enum name {*list of options*} *variableName*; 
```



<a name="FAQs"/>

## Frequently Asked Questions (FAQs)
You may have a lot of questions about what this repo is about, and I will try and answer as many as I can.

### Where is that great "Hello World!" program again?
Here you go!
```C++
#include <iostream>

using namespace std;

int main() {

    cout << "Hello World!" << endl;
    
    return 0;
}
```
### What is this repo about?
This repo is a basic and fundamentals tutorial to the foundations of C++.

This is done through practically using code and comments to demonstrate the features and syntax of the language.

### What is C++?

> C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes".
> Source: [Wikipedia](https://en.wikipedia.org/wiki/C++)

<a name="Credits"/>

## Credits
Creator - Amir Rahim: [@amir-rahim](https://github.com/amir-rahim) on Github and [Amir Rahim](https://www.linkedin.com/in/amir-rahim/) on LinkedIn
