/* 
  2a. (by value) Write a program with a function that takes two parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/

// library
# include <iostream>
using namespace std;

  // function that takes two parameters
     int func(int a, int b){
        // add them
          int sum = a+b;
          return sum;
     }
  
  // main function
     int main() {
        // declarations 
           int num1, num2;
        // ask user for two numbers
           cout << "enter any two numbers";
           cin >> num1 >> num2;
        //  tell the user the sum.
           cout << "sum" <<     
        // call function  with the numbers as arguments
           func(num1, num2) << endl;
           
     
         return 0;
     }
