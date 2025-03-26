#include<iostream>
using namespace std;
template<class T1,class T2>
class abc{
public:
T1 data1;
T2 data2;
abc(T1 a,T2 b){
this->data1=a;
this->data2=b;
}
void show(){
cout<<this->data1<<this->data2<<endl;
}

};
int main(){
abc<char,float>obj('c',123);
obj.show();

}