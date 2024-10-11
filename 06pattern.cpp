#include <iostream> 
using namespace std;
int main(){
  int n ;
  cout<<"enter the number: ";
  cin>>n;

  
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i>=j){
          cout<<i<<" ";
        }
      }
      cout<<endl;
    }
  
}

// enter the number: 4

// 1
// 2 2
// 3 3 3
// 4 4 4 4 