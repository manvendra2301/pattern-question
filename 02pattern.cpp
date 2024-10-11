#include <iostream>
using namespace std;

// int main(){
//   for(int i=1;i<=4;i++){
//     for(int j=1;j<=4;j++){
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }

//by using input 

int main() {
  int n;
  cout<<"enter the number: ";
  cin>>n;

  for(int i=1; i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

// enter the number: 4

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4