#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

ll factorial(ll in)
{
  ll sumT = in * (in + 1);
  sumT /= 2;
  sumT %= 998244353;
  return sumT;
}

int main()
{
  ll A, B, C;
  ll ans = 1;
  cin >> A >> B >> C;
  A %= 998244353;
  B %= 998244353;
  C %= 998244353;

  ll aFact = factorial(A);
  ll bFact = factorial(B);
  ll cFact = factorial(C);

  ans *= aFact;
  ans %= 998244353;
  ans *= bFact;
  ans %= 998244353;
  ans *= cFact;
  ans %= 998244353;
  cout << ans << endl;
}