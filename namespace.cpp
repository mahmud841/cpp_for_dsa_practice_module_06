#include <bits/stdc++.h>
using namespace std;
namespace Mahmud
{
    int age = 25;
    void hello()
    {
        cout << "Mahmud Namespace" << endl;
    }
};
namespace Tahmina
{
    int age2 = 23;
    void hello2()
    {
        cout << "Tahmina Namespace" << endl;
    }
};
using namespace Mahmud;
using namespace Tahmina;

int main()
{
    // cout<<Mahmud::age<<endl;
    // cout<<Tahmina::age2<<endl;
    cout << age << endl;
    cout << age2 << endl;
    hello();
    hello2();
    return 0;
}
