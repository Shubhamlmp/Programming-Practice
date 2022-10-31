#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solution()
{

  int n, count=0; 

  //Taking input for number of elements in the array
  cin>>n;

  //Declaring an array of size n
  int a[n];

  //Taking n inputs for n no. of elements of the array
  for(int i=0; i<n;i++)
  {
     cin>>a[i];
  }

  //Declaring a set which only stores distinct elements
  unordered_set<int> s;

  //Inserting element inside set only if element is already no present and storing its count
  for(int i=0; i<n;i++)
  {
     if(s.find(a[i])==s.end())
     {
        s.insert(a[i]);
        count++;
     }
  }

  //Printing number of distinct elements present
  cout << count;
  return 0;
}


int main()
{

    //Function call   
    solution();
    return 0;
}
