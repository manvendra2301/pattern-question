#include <iostream>
using namespace std;

int main (){
  int n;
  cout<<"enter no: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i+j>n){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}

// enter no: 4

//       *
//     * *
//   * * *
// * * * *