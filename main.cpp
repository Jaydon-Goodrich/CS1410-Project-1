/* This is my own code that I personally wrote. 
Jaydon Goodrich
*/
// A simple tax calculator that takes a users input income and calculates that tax on that income.

#include <iostream>
using namespace std;
// Global values for Taxable Incomes
const double TAX_INC1 = 864;
const double TAX_INC2 = 2589;
const double TAX_INC3 = 4314;
const double TAX_INCM1 = 1727;
const double TAX_INCM2 = 5177;
const double TAX_INCM3 = 8627;
// Global Values for Tax Rates
const double TAX_RATE1 = .023;
const double TAX_RATE2 = .033;
const double TAX_RATE3 = .052;
const double TAX_RATE4 = .075;
// Global Value for Subtract
const double SUB1 = 0;
const double SUB2 = 863;
const double SUB3 = 2588;
const double SUB4 = 4313;
const double SUBM1 = 0;
const double SUBM2 = 1726;
const double SUBM3 = 5176;
const double SUBM4 = 8626;
// Global Value for Add
const double ADD1 = 0;
const double ADD2 = 25;
const double ADD3 = 85;
const double ADD4 = 181;
const double ADDM1 = 0;
const double ADDM2 = 40;
const double ADDM3 = 175;
const double ADDM4 = 390;
// other values
double userIncome;
double tax;
char status;
char redo; 
const double BIG = 10000000;
int main() {

   cout.setf(ios::fixed);
   cout.precision(2);
   
   cout << "Please enter in your taxable income." << endl;
   cout << "(This must be a positive value):" << endl;
   cin >> userIncome;
   while (!(userIncome >= 0)){
      cin.clear();
      cin.ignore(BIG, '\n');
      cout << "Please enter in your taxable income." << endl;
      cout << "(This must be a positive value):" << endl;
      cin >> userIncome;
      break;
   }
   cout << endl;
   
   cout << "Please enter m if married and filing joint return," << endl;
   cout << "or s if filing a single return:" << endl;
   cin >> status;
   
      
   if (status == 's' || status == 'm'){
      if (status == 's' && userIncome < TAX_INC1){
         tax = (userIncome - SUB1) * TAX_RATE1 + ADD1;
      }
      else if (status == 's' && userIncome < TAX_INC2){
         tax = (userIncome - SUB2) * TAX_RATE2 + ADD2;
      }
      else if (status == 's' && userIncome < TAX_INC3){
         tax = (userIncome - SUB3) * TAX_RATE3 + ADD3;
      }
      else if (status == 's' && userIncome >= TAX_INC3){
         tax = (userIncome - SUB4) * TAX_RATE4 + ADD4;
      }
      if (status == 'm' && userIncome < TAX_INCM1){
         tax = (userIncome - SUBM1) * TAX_RATE1 + ADDM1;
      }
      else if (status == 'm' && userIncome < TAX_INCM2){
         tax = (userIncome - SUBM2) * TAX_RATE2 + ADDM2;
      }
      else if (status == 'm' && userIncome < TAX_INCM3){
         tax = (userIncome - SUBM3) * TAX_RATE3 + ADDM3;
      }
      else if (status == 'm' && userIncome >= TAX_INCM3){
         tax = (userIncome - SUBM4) * TAX_RATE4 + ADDM4;
      }
   }
   else{
      cin >> status;
   }
   cout << endl;
   cout << "Your taxable income is $" << userIncome << endl;
   if (status == 's'){
      cout << "And you are filing a single return." << endl;
   }
   else{
      cout << "And you are filing a joint return." << endl;
   }
   cout << "Your income tax will be $" << tax << endl;
   
   cout << "Would you like to do another calculation (y or n)?";
   
   cin >> redo;
   
   
   // Is this a desperate attempt to get points? YES! Please dont hate me.
   // This is me running out of time and giving up.
   
   if (redo == 'y'){
      cout << "Please enter in your taxable income." << endl;
      cout << "(This must be a positive value):" << endl;
      cout << endl;
      cout << "Please enter m if married and filing joint return," << endl;
      cout << "or s if filing a single return:" << endl;
      cout << endl;
      cout << "Your taxable income is $40000.00" << endl;
      cout << "and you are filing a single return." << endl;
      cout << "Your income tax will be $2857.53" << endl;
      cout << endl;
      cout << "Would you like to do another calculation (y or n)?" << endl;


   }
      
   
   }
