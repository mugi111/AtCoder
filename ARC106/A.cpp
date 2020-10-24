#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

ll myPow(int base, int e)
{
  ll res = 1;
  for (int i = 0; i < e; i++)
  {
    res *= base;
  }
  return res;
}

int main()
{
  ll N;
  cin >> N;
  for (ll i = 0;; i++)
  {
    ll diff = N - myPow(5, i);
    if (diff <= 0)
    {
      cout << -1 << endl;
      return 0;
    }
    for (ll j = 0;; j++)
    {
      ll tmpPow = myPow(3, j);
      if (diff == tmpPow)
      {
        cout << j << " " << i << endl;
        return 0;
      }
      else if (diff < tmpPow)
      {
        break;
      }
    }
  }
}