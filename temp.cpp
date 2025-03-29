

#include<iostream>
#include<stdio.h>
using namespace std;
int n;
int count=0;

void check(){
for(int i=1;i<=n;i++){
    if(n%i==0){
count++;}
// }
//4%1=0,4%2=0,4%3=1,4%4=0,
if(count>2&&n%i==1){ 
   cout<<"prime";

   }  
 if(count>2){
    cout<<" co prime number"<<endl;

 
}
}
}


int main(){
    cin>>n;
    check();
    return 0;
}
