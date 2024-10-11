#include <iostream>
using namespace std ;

// int main () {
//   for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//       cout<<"* ";
//     }
//     cout<<endl;

//   }
// }

//printing square pattern using input 

int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}


//  output------
//  enter the number: 4
// 
// * * * * 
// * * * * 
// * * * * 
// * * * * 