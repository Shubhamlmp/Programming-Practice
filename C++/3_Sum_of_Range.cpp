#include <bits/stdc++.h>
using namespace std;

// To use ll instead of long long
typedef long long ll;

// Function for sum of all natural numbers
ll sum_all(ll n)
{
    ll sum = (n * (n + 1)) / 2;
    return sum;
}
ll sum_even(ll n)
{
    ll sum = (n * (n + 1));
    return sum;
}
ll sum_odd(ll n)
{
    ll terms = (n + 1) / 2;
    ll sum = terms * terms;
    return sum;
}

ll sum_range_all(ll l, ll r)
{
    return sum_all(r) - sum_all(l - 1);
}
ll sum_range_even(ll l, ll r)
{
    return sum_even(r / 2) - sum_even((l - 1) / 2);
}
ll sum_range_odd(ll l, ll r)
{
    return sum_odd(r) - sum_odd(l - 1);
}

void sum(ll A, ll B)
{
    cout << "Sum of all numbers between A and B (inclusive) = " << sum_range_all(A, B) << endl;
    cout << "Sum of all even numbers between A and B (inclusive) = " << sum_range_even(A, B) << endl;
    cout << "Sum of all odd numbers between A and B (inclusive) = " << sum_range_odd(A, B) << endl;
}

int main()
{
    ll A, B;
    cout << "Enter the two numbers A and B \n";
    cin >> A >> B;
    if (A > B)
        swap(A, B);
    sum(A, B);
}