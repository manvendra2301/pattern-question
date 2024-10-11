#include <iostream> 
using namespace std;

int main(){
  int count =1;
  int n;
  cout<<"enter the number: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i>=j){
        cout << count << " ";
        count++;
      }
    }
    cout<<endl;
  }
}

// enter the number: 4

// 1
// 2 3
// 4 5 6
// 7 8 9 10