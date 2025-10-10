#include <iostream>
using namespace std;

int main(void)
{
    cout << "tabla de multiplicar" << endl;
    int num1 = 0;
    int num2;
 
    cout << "introducir un numero del 1 al 20" << endl;
    cin >> num2;

    
for ( num1 = 1; num1 <=20; num1++){

cout << num2 <<  " * " << num1 << " = " << num1 * num2 << endl;
}
  return 0;

}