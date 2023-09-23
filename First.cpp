#include<iostream>
using namespace std;
class Fruit
{
    public:
    string color;
    string name;
};
int main()
{
    Fruit mango;
    mango.name="Mangoes";
    mango.color="Yellow";
    cout<<mango.color<<endl;
    cout<<mango.name<<endl;
    return 0;
}
