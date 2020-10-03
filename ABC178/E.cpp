#include <iostream>
#include <string>
#include <vector>

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

using namespace std;

int main()
{
  int N, x, y;
  cin >> N;
  vector<int> x;
  vector<int> y;
  for (int i = 0; i < N; i++)
  {
    cin >> x >> y;
    x[i] = x;
    y[i] = y;
  }
  cout << x[0] << endl;
}