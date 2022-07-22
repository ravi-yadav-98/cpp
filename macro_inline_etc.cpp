#include <iostream>
#include <bits/stdc++.h>
#define PI 3.14
#define AREA(l,h) l*h
using namespace std;

/*
Lecture: 29 Lave Babbar Macros, Global Variables, Inline Functions, default args

#include -> preprocess directive ( before compilation files will be included in source code)

#define --> to define macro(variable which has been used multiple times in code)

//Variable Vs Macro--> less memory, and chances of change the variable


macro-> a peice of code in a program that is replaced by value of macor
 - before compilation value of macro will be replaced in code)
 - can not  be change while runtime
 - no extra storage (as value will be replaced before compilation)
 - definitions need not be terminated by a semi-colon(;).
 - functions can be defined as macro also


Types of macro:
1. Object Like Macro
An object-like macro is a simple identifier that will be replaced by a code fragment. It is called object-like because it looks like an object in code that uses it. It is popularly used to replace a symbolic name with numerical/variable represented as constant.
i.e #define MAX 100

2. Chain Macros:
Macros inside macros are termed as chain macros. In chain macros first of all parent macro is expanded then the child macro is expanded.
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

3.  Multi-line Macros: An object-like macro could have a multi-line. So to create a multi-line macro you have to use backslash-newline.
// Multi-line Macro definition,  we put a space between the macro name and the parentheses in the macro definition then the macro will not work.

#define ELE 1, \
            2, \
            3
     int arr[] = { ELE };

4. Function like macro:
These macros are the same as a function call.


--------------Global Variable-------------------------
- share a variable between more than two fun
*/




int main(void)
{
    int l =5, h=10;
    // double area = PI*r*r;
    // cout<<"area: "<<area<<endl;
    int area = AREA(l,h);
    cout<<area<<endl;
  return 0;
}