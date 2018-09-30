/*4a.(By Value) Write a program with a function that takes two int parameters,finds the min, and returns the minnimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.*/

//library
# include <iostream>
using namespace std;
      //write a function that takes two int parameters,finds the min and returns the min
      int func(int u,int v){
        if(u<v){
          return u;
        }
        else{
          return v;
        }
      }

//main function
int main(){
      //declarations
      int num1,num2;
      //ask the user for two numbers
      cout <<"give any two numbers to find the minimum of the two";
      cin >>num1>>num2;
       //tell the user the minimum
      cout <<"the minimum of the two is"
      // call the function with the numbers as arguments
      <<func(num1,num2)<<endl;
     
    return 0;
}
