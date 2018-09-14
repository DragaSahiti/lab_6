/*
3a. (By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
*/

// libtrary
# include <iostream>
using namespace std;

 // function that takes two int parameters
    int func(int a, int b){
         // find maximum
            if (a>b){
              return a;
            }
            else{
              return b;
            }
    }
 // main function
    int main(){
        // declarations
           int num1, num2;
        // ask the user for two numbers
            cout << "enter any two numbers";
            cin >> num1 >> num2;  
         //  tell the user the maximum.
            cout <<"the maximum of the two numbers is" <<         
        //  call the function with the numbers as arguments
            func(num1, num2)<< endl;
    
        return 0;
    }

           
