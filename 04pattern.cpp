#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number: " ;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << n-j+1 << " ";
    }
    cout << endl;
  }
}

// enter the number: 4

// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1