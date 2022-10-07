#include<iostream>
using namespace std;

// Forward declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
// Setter Function
    int setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

// Function To Print The Result
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
// friend int Calculator ::sumCompComplex(Complex, Complex);
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}








int main()
{
    Complex o1, o2;
    // callling setter Function
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    //Creating Object
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}