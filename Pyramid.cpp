#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
int n,row,col;
cin >> n;
for (row=0; row<n; row++)
{
    for (col=row; col>=0; col--)
    {
        cout << (char)(col+65)<<" ";

    }
    cout << endl;
} 
 
return 0;
}