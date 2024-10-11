#include <iostream> 
using namespace std;

int main() {
  int a=0;
  int b=1;
  int c;

  int n;
  cout<<"enter no: ";
  cin>>n;

  if(n==0){
    return 0;
  } 
  
  for(int i=2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;

  }
  cout<<"the no is: "<<b;

}