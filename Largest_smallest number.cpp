#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
 int n,num[100];
 cout << "Enter Number of array: " ;
 cin >> n;

 for (int i=0; i<n; i++)
 {
    cin >> num[i];
 }
 int max=num[0];
  
  for (int i=1; i<n; i++)
  {
    if (num[i]> max)
    {
        max=num[i];
    }
  }
  cout << "Largest number is : "<< max<< endl;

  int min=num[0];
  for (int i=1; i<n; i++)
  {
    if (num[i]<min)
    {
        min=num[i];
    }
  }
 cout << "Smallest number is : "<< min<< endl;
return 0;
}