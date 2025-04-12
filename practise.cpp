#include<iostream>
using namespace std;
class A{//baseclass
    protected:
    int a,b;
    public:
   virtual void show(){
        cout<<a;
    }
};
class B: virtual public A{//derived  class base class a->b a->c d->b->c 
    public:
    void show(){
        cout<<b;
    }
};
class C:virtual public A{
    protected:
    int d;
    public:
    void show(){
        cout<<"c class";
        cin>>d;
        cout<<d;
    }
};
class d:public B,public C{
    protected:
    int  g;
    public:
    void show(){
        cout<<"d class";
        cin>>g;
        cout<<g;
    }
};
int main(){
    A *pbtr;
    d d1;
    C d2;
pbtr=&d1;
pbtr->show();
pbtr=&d2;
pbtr->show();
return 0;

}