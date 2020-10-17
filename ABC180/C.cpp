#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

vector<ll> divisor(ll n)
{
  vector<ll> ret;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ret.push_back(i);
      if (i * i != n)
        ret.push_back(n / i);
    }
  }
  sort(ret.begin(), ret.end());
  return ret;
}

int main()
{
  ll N;
  cin >> N;
  vector<ll> result = divisor(N);
  for (ll i = 0; i < result.size(); i++)
  {
    cout << result[i] << endl;
  }
}