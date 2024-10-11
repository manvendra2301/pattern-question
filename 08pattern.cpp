#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    int count = i;
    for(int j=1;j<=n;j++){
      
      if(i>=j){
        cout<<count<<" ";
        count++;
      }
    }
    cout<<endl;
  }
}
// enter the number: 4

// 1
// 2 3
// 3 4 5
// 4 5 6 7