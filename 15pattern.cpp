#include <iostream>
using namespace std;

int main(){
  int n ;
  cout<<"enter no: "<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i>=j){
        char ch = 'A' + n - i +j  -1;
        cout<<ch<<" ";
      }
      
      
    }
    cout<<endl;
  }
}

// enter no: 
// 4
// D 
// C D 
// B C D
// A B C D