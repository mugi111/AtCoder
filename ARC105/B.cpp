#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int gcd(int a, int b)
{
  if (a % b == 0)
  {
    return (b);
  }
  else
  {
    return (gcd(b, a % b));
  }
}

int main()
{
  int N;
  cin >> N;
  ll tmp, recent;
  recent = 0;
  vector<ll> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> tmp;
    if (recent != 0)
    {
      recent = gcd(recent, tmp);
    }
    else
    {
      recent = tmp;
    }
  }
  cout << recent << endl;
}