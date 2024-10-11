#include <iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int *arr, int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }

}

int main(){
  int arr[6] ={13,14,24,52,20,9};
  int n =6;
  SelectionSort(arr, n);
  
  for(int i :arr){
    cout<<i<<endl;
  }
}