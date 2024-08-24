#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public :
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }    
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
        complex operator-(){
            complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
};
int main(){
    complex c1,c2;
    c1.setData(5,8);
    c1.showData();
    //c2=c1.operator-();
    // or
    c2=-c1;
    c2.showData();
    return 0;
}