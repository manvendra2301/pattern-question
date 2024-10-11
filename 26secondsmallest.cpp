#include<iostream>
using namespace std;
#include <vector>
#include <limits.h>


vector <int> SmallNo(int arr[] , int size){
    
      int small = INT_MAX;
      int second = INT_MAX;
      vector<int> ans;

      for(int i=0;i<size;i++){
        if(arr[i]<small){
          second = small;
          small =arr[i];
        }
        else if(arr[i]<second && arr[i]!=small){
          second = arr[i];
        }
      }
    ans.push_back(small);
    ans.push_back(second);

    return ans;
}


int main()
{
  int arr[7] = {18, 25, 16, 10, 9, 2, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  vector<int> result = SmallNo(arr, size);

  for (auto i : result)
  {
    cout << i << endl;
  }
}