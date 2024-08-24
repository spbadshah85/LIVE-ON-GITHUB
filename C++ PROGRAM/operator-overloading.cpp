#include<iostream>

using namespace std;
class complex {
    private:
         int a,b;
    public:
    void setData (int x,int y){
        a=x;
        b=y;
    }

    void showData ()
    {
        cout<<"\na="<<a<<"  b="<<b;
    }
    friend ostream& operator<<(ostream& ,complex);  // ostream ka datatype ostream reference
   friend istream& operator>>(istream& ,complex&);  // istream ka datatype istream reference
};

ostream& operator<<(ostream &dout, complex C){
    cout<<"\na="<<C.a<<" b="<<C.b;
    return (dout);
}
istream& operator>>(istream& din ,complex &C){
    cin>>C.a>>C.b;
    return(din);

}
int main(){
using namespace std;
    complex c1;
    cout<<"Enter a complex number ";
    cout<<"\nyou entered ";
     //operator<<(cout,c1);

    cin>>c1;
    cout<<c1; 
return 0;
}