#include<iostream>
#include<list>
using namespace std;    

 void print(list<int> &lim){ 
list<int>::iterator iter1;
  for ( iter1 =lim.begin() ;iter1!=lim.end(); iter1++)
  {
   cout<<*iter1<<" ";
 
  }
    cout<<endl;
 }
int main(){
  list<int>list1;
  list1.push_back(1);
  list1.push_back(2);
 list1.push_back(3);
 // list1.push_back(67);
  print(list1);
  //list1.pop_back();
 // print(list1);
 // list1.remove(23);
//print(list1); 
list<int>::iterator iter1;
iter1=list1.begin();
list1.insert(iter1,23);


print(list1);
iter1++;
list1.insert(iter1 ,56);

print(list1);

  // iter1=list1.begin();

return 0;}

  