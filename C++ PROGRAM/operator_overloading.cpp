#include<iostream>
using namespace std;
class complex {
    private :
    int a,b;
    public :
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"\na="<<a<<"\t b="<<b;
    }

    complex operator +(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }

};

int main(){
    complex c1,c2,c3;
    c1.setData(4,5);
    c2.setData(6,5);
    c3=c1+c2;
    c3.showData();
    return 0;
}