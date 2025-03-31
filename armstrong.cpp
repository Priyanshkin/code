#include<iostream>
using namespace std;
int main(){
int n;
cout<<"for checking armstrong number";
cin>>n;
int s=n;
cout<<"size of armstrong number";
int size;
cin>>size;

int p;

int l=0;


for(int i=1;i<=size+1;i++){

   if(n>0){
  p=n%10;
l=p*p*p+l;

      n=n/10;
      cout<<l<<endl;
    
    
      }
      /* code */
    else if(n==0){
      if (s==l){
       cout<<"armstrong number";
      }
      else{
      cout<<"not armstrong";
    }}
    }
    
    
       return 0;
}
     
    
   
    
    



