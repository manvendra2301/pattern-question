#include <iostream> 
using namespace std;

int main(){
  int n;
  cout<<"enter no: ";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i>=j){
        char ch = 'A' + i + j;
        cout<<ch<<" ";
      }
    }
    cout<<endl;
  }
}

// enter no: 4

// A 
// B C 
// C D E 
// D E F G 