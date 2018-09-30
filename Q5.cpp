/*5.Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output.*/

//library
# include <iostream>
using namespace std;
   //write a function that has two parameters and a reference
   int fun(int a,int n,int &t){
   if(t==1){
   //give their sum
   int sum=a+n;
   return sum;
   }
   if(t==2){
   //give the max
     if(a>n){
      return a;
     }
     else{
     return n;
     }
   }
   if(t==3){
   //give the min
     if(a<n){
     return a;
     }
     else{
     return n;
     }
   }
   }

//main function
int main(){
   //declarations
   int num1,num2,operation,sum,max,min;
   //ask yhe user for two numbers
   cout <<"give any two numbers";
   cin >>num1>>num2;
   //ask the user for operation
   cout <<"for the sum of the two numbers type 1"<<endl;
   cout <<"for maximum between the two numbers type 2"<<endl;
   cout <<"for minimum between the two numbers type 3"<<endl;
   cin>>operation;
   //display the output
   cout<<"the value of the operation chosen for the numbers is"
   //call the function with numbers as arguments
   <<fun(num1,num2,operation)<<endl;

   return 0; 
   
   } 

