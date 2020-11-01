#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int N;
  ll A, B;
  ll ans = 0;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> A >> B;
    ll tmp = (B * (B + 1)) / 2;
    tmp -= ((A - 1) * (A - 1 + 1)) / 2;
    ans += tmp;
  }

  cout << ans << endl;
}