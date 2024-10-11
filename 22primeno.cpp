#include <iostream>
using namespace std;

int isPrime(int num){
  if(num<2){
    return 0;
  }
  else{
    int x = num/2;

    for(int i=2;i<=x;i++){
      if(num%i==0){
        return 0;
      }
    }
    return 1;
  }
}

int main(){
  int a,b;
  cout<<"enter lower bound: ";
  cin>>a;
  cout<<"enter upper bound: ";
  cin>>b;

  for(int i=a;i<=b;i++){
    if(isPrime(i)){
      cout<<i<<" ";
    }
  }
}