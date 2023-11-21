#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,i,sum=0;
cin >> n;
for (i=1; i<=n; i=i+2)
{
    cout << i << " ";
    sum+=i;
}

 cout <<endl<<"Total is: "<< sum<< endl;
return 0;
}