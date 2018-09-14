/*
(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
*/

// libtrary
# include <iostream>
using namespace std;

 // function that takes two int parameters
    void func(int a, int b, int &c){
         // find maximum
            if (a>b){
              c = a;
            }
            else{
              c = b;
            }
    }
 // main function
    int main(){
        // declarations
           int num1, num2, max;
        // ask the user for two numbers
            cout << "enter any two numbers";
            cin >> num1 >> num2; 
        //  call the function with the numbers as arguments
            func(num1, num2, max);
        //  tell the user the maximum.
            cout <<"the maximum of the two numbers is" << max <<endl;     
       
        return 0;
    }

           
