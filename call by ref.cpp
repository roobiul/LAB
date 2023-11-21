#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
// call by ref a value cat hoye ase
void incrage(int* x, int* y)
{
    *x=*x+1;
    *y=*y+1;
    
}
 
int main () {
 
int a,b;
cin >> a>> b; 
incrage(&a,&b);
cout << a <<" "<<b << endl;
 
return 0;
}