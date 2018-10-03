/*7. UpperCase and LowerCase */

//library
# include <iostream>
using namespace std;

 //a.Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
     char toUpper(char r){
          char s = char (int (r)-32);
          return s;
     }
     
 //b.Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
     char toLower(char m){
          char n = char (int (m)+32);
          return n;
     }

 //c.Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
 
     //main function
     int main(){
         // declarations
         char alphabet;
         cout << "type any letter" << endl;
         cin >> alphabet;
         
         //uppercase
         if (int (alphabet)>64 && int (alphabet)<91){
         char x = toLower (alphabet);
         cout << "this is an upper case letter" << endl;
         cout << "this when converted to lower case is:" << x << endl;
         }
         
         //lowercase
         if (int (alphabet)>96 && int (alphabet)<123){
         char y = toUpper (alphabet);
         cout << "this is a lower case letter" << endl;
         cout << "this when converted to upper case is:"<< y << endl;
         }
         return 0;
     }

