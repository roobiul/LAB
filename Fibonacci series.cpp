#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int first=0,second=1,count=0,fibo,n; 
cout << "Enter Range: ";
cin >> n;
while (count<n)
{
    if (count <=1)
    {
        fibo=count;
    }
    else
    {
        fibo = first +second;
        first=second;
        second=fibo;
    }
    cout << fibo<<" ";
    count++;
}
 
return 0;
}