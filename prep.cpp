#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    virtual void sound()
    {
        cout << "Animal";
    }
};
class dog : public animal
{
public:
    void sound() override
    {
        cout << "Dog";
    }
};
int main()
{
    animal a;
    dog d;
    // d.sound();
    animal *an = new dog();
    an->sound();
    return 0;
}