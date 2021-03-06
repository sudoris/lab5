Description:
Homework assignment - Lab 5 

Author:
David Chen

Course:
Oregon State University - CS162

Assignment description:
Goals
-Create recursive functions
-Call your functions in a program
-Design the user interface

In this lab, you will implement three functions using recursion and write a menu program to call these functions:
1. Write a function that recursively reverses a string. The function will have a single parameter of type string. It will print the reversed characters to the screen followed by a newline character. So if you input “Hello, world”, it should output “dlrow ,olleH(newline)”. Note that you just print the reverse of the string rather than actually reversing the string itself, and your recursive function should do the printing.
2. Write a function that recursively calculates the sum of an array. The function should have 2 parameters, the array (or a pointer to the array) and an integer showing the number of elements (assume they are all integers) in the array. The function will use a recursive call to sum the value of all elements. Use array here, no vectors.
3. Write a recursive function to calculate the triangular number for N. (Or a function that counts the number of pins necessary for a triangular of N rows.) A triangular number is the sum of all items that form a triangle with N rows. It may help to think of the number of bowling pins if you changed the number of rows. For example, when N=0, the triangular number is 0; When N=1, the triangular number is 1; When N=2, the triangular number is 1+2=3; When N=3, the triangular number is 1+2+3=6, so on so forth.

You will also need to write a program to demonstrate all three recursive functions. Provide a menu for the user to select which function to run, and after running the function, return to the menu. For #1, you must prompt the user to enter a string and your program will print the reversed string on screen. For #2, you first prompt an input as the number of integers in the array, then a series of integers to be entered in the array. Then your program will print the sum of the array elements on the screen. For #3, prompt the user to enter an integer and your program will print the triangular number for that integer. You will need a fourth item in the menu to allow them to exit the program. You can add your input validation functions into these three functions to make it robust.

You must separate the implementation and declaration in .cpp and .hpp files and include a makefile in your code.  For this lab, you do not need to write a reflection document.  Turn in all your program files in a zip file on Canvas.

Grading

Programming style – 10%
Implement the function to reverse a string – 20%
Implement the function to calculate the sum of the array – 25%
Implement the function to calculate the triangular number – 25%
Implement a program with a menu and interface to call each function or to exit – 20%




