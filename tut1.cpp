#include<iostream>

using namespace std;
class b
{int a;
public:
void greet(){
  cout<<"hello world"<<endl;
}

};
class d:public b{
  int v;
  // public:
  // void greet(){
  //   cout<<"hii!! you are looking preety today"<<endl;
  // }
};

int main(){
d abhay;
abhay.greet();
return 0;
}