// Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.

#include <iostream> 

using namespace std;

class complex_number
{
   public :
      int real, imag;
};

int main()
{
   complex_number num1, num2, sum;

   //getting the value of first complex number from user
   cout << "Enter real and imaginary parts of first complex number:"<<endl; 
   cin >> num1.real >> num1.imag;

   //getting the value of second complex number from user
   cout << "Enter real and imaginary parts of second complex number:"<<endl; 
   cin >> num2.real >> num2.imag;

   //addition of real and imaginary parts of complex numbers entered by user
   sum.real = num1.real + num2.real;
   sum.imag = num1.imag + num2.imag;

   //displaying the sum of complex numbers
   if ( sum.imag >= 0 )
      cout << "Sum of two complex numbers = " << sum.real << " + " << sum.imag << "i";
   else
      cout << "Sum of two complex numbers = " << sum.real << " - " << sum.imag << "i";

   return 0;
}