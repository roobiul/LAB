#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;


 
 void swap(int x,int y)
 {
    int temp;
    temp=x;
    x=y;
    y=temp;

    cout<< x <<" "<<y<<endl;

    
 }
int main () {
 
int a,b;
cin >>a>>b;
swap(a,b);
 // value copy hoye jasse..
return 0;
}