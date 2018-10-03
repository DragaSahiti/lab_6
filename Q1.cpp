/*1. Tax Rate calculation using functions */

//library
# include <iostream>
using namespace std;

/*a.Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/
  int value(int &unitCst,int &unit,int &taxRt){
  cout <<"give a value of unit cost"<< endl;
  cin >> unitCst;
  cout <<"give the value of unit purchase"<< endl;
  cin >> unit;
  cout <<"give the value of the total due"<< endl;
  cin >> taxRt;
  //return the values to user
  cout <<"the unit cost is:"<< unitCst << endl;
  cout <<"the unit purchase is:"<< unit << endl;
  cout <<"the unit tax rate is:"<< taxRt << endl;
  }
  
/*b.Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/  
  int calculation(int &unitCst,int &unit,int &taxRt,int &salesTx,int &totDue){
        value(unitCst,unit,taxRt);
        salesTx = (unitCst*unit*taxRt);
        totDue = (unitCst*unit)+salesTx;
  }

/*Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
*/  

//main function
int main(){
    //declarations
    int unitCst,unit,taxRt,salesTx,totDue;
    calculation(unitCst,unit,taxRt,salesTx,totDue);
    //give values
    cout<<"the sales tax is:"<<salesTx<<"and"<<"the total due is:"<<totDue<<endl;

    return 0;
}
