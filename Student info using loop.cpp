#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    cout << "Enter student number: ";
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        struct Student s[i];
        cout << "Name";
        cin >> s[i].name;
        cout << "age";
        cin >> s[i].age;
        cout << "GPA";
        cin >> s[i].grade;
    }

    for (int i=1; i<=n; i++)
    {
         struct Student s[i];
        cout<< s[i].name;
        cout<< s[i].age;
        cout<< s[i].grade;
    }
    return 0;
}

   
