#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  int count = 0;
  int prev = -1;
  int ans = 0;

  for (int i = 2; i <= *max_element(A.begin(), A.end()); i++)
  {
    count = 0;
    for (int j = 0; j < N; j++)
    {
      if (A[j] % i == 0)
      {
        count++;
      }
    }
    if (prev < count)
    {
      prev = count;
      ans = i;
    }
  }

  cout << ans << endl;
}