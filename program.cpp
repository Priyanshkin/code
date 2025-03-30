#include<iostream>
using namespace std;
//template<class T>
class A{
    int n;
public:
int fact(int b){
    
    for(int i=1;i<b;i++){
if (b==0){

    return 1;
}
else
  n= b*(b-1);
 return n*fact(b-2);
    
}
}
};
int main(){
    A p;
    int b;
    cin>>b;
    cout<<p.fact(b);
}