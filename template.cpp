#include<iostream>
using namespace std;
template<class T>
class vector{
public:
T data1;

public:
vector(T a ){
    this->data1=a;
    
}
void show(){
    cout<<this->data1<<endl;
}

};
int main(){
vector<char>obj('c');
obj.show();
return 0;

}