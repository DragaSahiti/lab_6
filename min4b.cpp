/*4b.(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.*/
//library
# include <iostream>
using namespace std;
      //write a function that takes two int parameters,and takes a third parameter
      void func(int u,int v,int &w){
        if(u<v){
          w = u;
        }
        else{
          w = v;
        }
      }

//main function
int main(){
      //declarations
      int num1,num2,min;
      //ask the user for two numbers
      cout <<"give any two numbers to find the minimum of the two";
      cin >>num1>>num2;
      // call the function with the numbers as arguments
      func(num1,num2,min);
      //tell the user the minimum
      cout <<"the minimum of the two is"<<min<<endl;
     
    return 0;
}

