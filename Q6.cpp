/*6.sum of even and odd*/

//library
# include <iostream>
using namespace std;
/*a.Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
*/
int sumEvenNumbers(int firstNum,int secondNum,int sumEven){
    for(int n=firstNum;n<=secondNum;n++){
       if(n%2==0){
         sumEven=sumEven+n;
       }
    }
       return sumEven;
}
/*b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
*/
int sumOddNumbers(int firstNum,int secondNum,int sumOdd){
    for(int n=firstNum;n<=secondNum;n++){
       if(n%2==1){
         sumOdd=sumOdd+n;
       }
    }
       return sumOdd;
}
/*c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */
int sumSquareOddNumbers(int firstNum,int secondNum,int sumSqOdd){
    for(int n=firstNum;n<=secondNum;n++){
       if(n%2==1){
         sumSqOdd=sumSqOdd+n*n;
       }
    }
      return sumSqOdd;
}
/*d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.*/
int sumSquareEvenNumbers(int firstNum,int secondNum,int sumSqEven){
    for(int n=firstNum;n<=secondNum;n++){
       if(n%2==0){
         sumSqEven=sumSqEven+n*n;
       }
    }
      return sumSqEven;
}

/*e.write a main program/
/*1.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
2.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
3.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
4.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
5.Then display the values
*/

int main(){
        //declare sumEvven,sumOdd,sumSquareEven,sumSquareOdd
        int x,y,z=0,sumEven,sumOdd,sumSqEven,sumSqOdd;
        //ask the user for two numbers
        cout <<"give any two numbers";
        cin >>x>>y;
        // 1.
        sumEven = sumEvenNumbers(x,y,z);
        //tell the user the sum
        cout<<"the sum of even numbers is "<<sumEven<<endl;
        // 2.
        sumOdd = sumOddNumbers(x,y,z);
        //tell the user the sum
        cout<<"the sum of odd numbers is "<<sumOdd<<endl;
        // 3.
        sumSqEven = sumSquareEvenNumbers(x,y,z);
        //tell the user the sum
        cout<<"the sum of square of even numbers is "<<sumSqEven<<endl;
        // 4.
        sumSqOdd = sumSquareOddNumbers(x,y,z);
        //tell the user the sum
        cout<<"the sum of square of odd numbers is "<<sumSqOdd<<endl;

    return 0;
}
