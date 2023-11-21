#include<iostream>

using namespace std;

int main ()
{
    int r,b,l;
    cout << "Enter redius,Breadth,length: "<<endl;
    cin >> r>> b>>l;

    float area_of_circle=3.1416*r*r;
    int area_of_rectangle=l*b;
    float area_of_triangle=(b*l)/2;
    cout << "Area of Circle : "<<area_of_circle<<endl<<"Area of Rectangle : "<<area_of_rectangle<<endl<<"Area of Triangle : "<<area_of_triangle<<endl;
}