#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter number: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    int row=i;
    for(int j=1;j<=n;j++){
      if(i>=j){
        cout<<row<<" ";
        row--;
      }
    }
    cout<<endl;
  }
}

// enter number: 4

// 1
// 2 1
// 3 2 1
// 4 3 2 1