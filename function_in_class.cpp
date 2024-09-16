#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void hello()
    {
        // cout << "hello gelo" << endl;
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person mahmud("Mahmud Hassan", 24, 40, 50);
    cout << mahmud.name << " " << mahmud.age << endl;
    mahmud.hello();
    cout << mahmud.total_marks() << endl;

    return 0;
}