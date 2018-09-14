/*
2b. (By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
*/
// library
# include <iostream>
using namespace std;

  // function that takes two parameters
     void fun(int a, int b, int &c){
        // add them
          c = a+b;
         
     }
  
  // main function
     int main() {
        // declarations 
           int num1, num2, sum;
        // ask user for two numbers
           cout << "enter any two numbers";
           cin >> num1 >> num2;
        // call function  with the numbers as arguments
           fun(num1, num2, sum);
        //  tell the user the sum.
           cout << sum << endl;    
       
     
         return 0;
     }

