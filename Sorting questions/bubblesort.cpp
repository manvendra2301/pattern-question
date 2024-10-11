#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
  for(int i= n-1;i>=0;i--){
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
int main(){
  int arr[6] = {13, 14, 24, 52, 20, 9};
  int n = 6;
  BubbleSort(arr, n);

  for (int i : arr)
  {
    cout << i << endl;
  }
}  