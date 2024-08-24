#include<iostream>
using namespace std;
class A {
    private:
    int a;
    public:
    A(int k)
    {
        a=k;
    }
};
class B :public A{
    private:
    int b;
    public :
    B (int x,int y):A(x)   //construction calling of class A
    {
        b=y;
    }
    void showData()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
};
int main()
{
    B obj(4,5);
    return 0;
}
