#include<iostream>
#include<string>
#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
 
string s={"BSFMSTU"} ;


/*
//using for loop
for (int i=0; i<s.size(); i++)
{
    cout << s[i];
} 
 */

/*
// using do while loop
 int i=0;
do
{
   
  cout << s[i];
  i++;
} while (s[i]!='\0');
*/

//using while loop
int i=0;
while (s[i]!='\0')
{
   cout << s[i];
  i++;
}


 
return 0;
}