
/*#include <iostream>

using namespace std;
int main ()
{


int n,i,j;

cin >>n;
for (i=1; i<=n; i++)
{
    for (j=n; j>=1; j--)
    {
        if (i>=j)
        {
            cout << "*" << " ";
        }
        else
        {
            cout << " ";
        }
        
    }
    cout << endl;

}


} 
*/

//sir er deya 

#include<iostream>
#include<math.h>
using namespace std;

int n=4,z=1,i,j,k;

int main ()
{

for (i=0; i<n; i++)
{
    for (j=n-1; j>=i; j--)
    {
        cout << " ";
    }

    for (k=i; k>=-i; k--)
    {
        cout << char(i-abs(k)+65);
    }
    z+=2;
    cout << endl;
}
return 0;
}
