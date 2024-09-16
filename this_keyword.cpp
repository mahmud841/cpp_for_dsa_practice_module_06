#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        // (*this).name = name;
        // (*this).age = age;
        this->name=name;
        this->age=age ;
    }
    void hello()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Person mahmud("Mahmud Hassan", 25);
    cout << mahmud.name << " " << mahmud.age << endl;

    return 0;
}
