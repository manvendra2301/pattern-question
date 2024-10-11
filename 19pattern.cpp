#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter no: " ;
  cin >> n;
  int count =1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i + j > n)
      {
        cout << count<<" ";
        count++;
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

// enter no: 4

//       1
//     2 3
//   4 5 6
// 7 8 9 10