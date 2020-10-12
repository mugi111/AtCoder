#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  ll A, B, C, D;
  cin >> A >> B >> C >> D;
  ll sum = A + B + C + D;
  ll tmp;
  vector<ll> abcd{A, B, C, D};
  for (int i = 1; i < 16; i++)
  {
    tmp = 0;
    for (int j = 0; j < 4; j++)
    {
      if ((i >> j) & 1)
      {
        tmp += abcd[j];
      }
    }
    if (tmp == (sum - tmp))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}