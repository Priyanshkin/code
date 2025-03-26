#include<iostream>
using namespace std;
template<class T>
class vector{
public:
T arr1[3];
T arr2[3];
T size;

vector(T a ){
    this->size=a;

}
T show(){ 
    T d;
    for (int i = 0; i <size; i++)
    {
        /* code */  d+=this->arr1[i]*arr2[i];
 
    }
    return d;
    
}

};
int main(){
vector<float>obj(3);

obj.arr1[0]=1.0;
obj.arr1[1]=2.0;
obj.arr1[2]=3.0;

obj.arr2[0]=4.1;
obj.arr2[1]=5.0;
obj.arr2[2]=6.0;
cout<<obj.show();


return 0;

}