#include <iostream>
using namespace std;
#include<limits.h>
#include <vector>

vector<int> MaxNo(int arr[],int size){
    int max=INT_MIN;
    int secondmax= INT_MIN;
    vector<int> ans;
    for(int i=0;i<size;i++){
      if(arr[i]>max){
        secondmax = max;
        max = arr[i];
      }
      else if(arr[i]>secondmax && arr[i]!= max){
          secondmax=arr[i];
      }
    }
    ans.push_back(max);
    ans.push_back(secondmax);
    return ans;
}

int main(){
  int arr[7]= {18,25,16,10,9,2,6};
  int size = sizeof(arr) / sizeof(arr[0]);

  vector<int> result = MaxNo(arr,size);
  
  for(auto i : result){
    cout<<i<<endl;
  }

}