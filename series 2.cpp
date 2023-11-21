#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,i,sum=0,mult=0;
cin >> n;

for (i=1; i<=n; i++)
{
    mult=i*(i+1);
     sum=sum+mult;
  cout << mult << " ";
}
 cout <<endl<< sum;
return 0;
}