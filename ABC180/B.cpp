#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int N;
  ll m, e, c;
  m = 0;
  e = 0;
  c = 0;
  cin >> N;
  vector<int> x(N);
  for (int i = 0; i < N; i++)
  {
    int tmp, abstmp;
    cin >> tmp;
    abstmp = abs(tmp);
    m += abstmp;
    e += abstmp * (ll)abstmp;
    c = (c < abstmp) ? abstmp : c;
  }

  cout << m << endl;
  cout << fixed << setprecision(15) << sqrt(e) << endl;
  cout << (ll)c << endl;
}