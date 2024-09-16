#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{

    Person *mahmud = new Person("Mahmud Hassan", 25);
    Person *suruj = new Person("Suruj Hassan", 26);
    // mahmud->name = suruj->name;
    // mahmud->age = suruj->age; //aivabe kora jai but korbo na. dereference kore korbo
    *mahmud=*suruj;
    delete suruj;
    cout << mahmud->name << " " << mahmud->age << endl;
    return 0;
}
