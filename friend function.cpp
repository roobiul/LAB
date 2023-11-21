#include<iostream>
using namespace std;

 class robiul{

private:

 int id=  22111102;
 string name = "Robiul";

friend void display(robiul object);
};




void display(robiul object)   {

 cout<<object.name<<endl;
 cout<<object.id<<endl;
 }



int main(){

robiul ob1;

display(ob1);


}