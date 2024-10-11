#include <iostream>
using namespace std;
#include <math.h>

int main(){
  int n;
  cout<<"enter the no: ";
  cin>>n;
 
 int len = trunc(log10(n))+1;
  cout<<"len is "<<len<<endl;

  int digit;
  int temp = n;
  int sum= 0;
  while(temp>0){
    digit = temp %10;
    cout<<"digit is "<<digit<< endl;
    sum+=pow(digit,len);
    temp= temp/10;
  }
  cout<<"sum is "<<sum <<endl;

  if(sum==n){
    cout<<n<<" is Armstrong no";
  }
  else{
    cout<<n<<" is not Armstrong no";
  }
}