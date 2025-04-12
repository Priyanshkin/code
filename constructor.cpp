#include<iostream>
//program of the using construtor in derived class 
using namespace std;
class A{
    public:
    int a,b;
    A(int c){
        a=c;
        cout<<a;
    }
};
class B :public A {
    public:
    B(int d):A(d){
        b=d;
        cout<<b;
    }
};
int main(){
    B g(12);
}