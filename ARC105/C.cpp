#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int N, M, tmpl, tmpv, dist, resultl, resultv;
  resultl = -1;
  cin >> N >> M;
  vector<int> w(N);
  vector<int> l(M);
  vector<int> v(M);
  for (int i = 0; i < N; ++i)
    cin >> w[i];

  sort(w.begin(), w.end());

  vector<int> s(N + 1, 0);
  for (int i = 0; i < N; ++i)
    s[i + 1] = s[i] + w[i];
  for (int i = 0; i < M; i++)
  {
    cin >> tmpl >> tmpv;
    l.push_back(tmpl);
    v.push_back(tmpv);
    for (int j = 0; j < N + 1; j++)
    {
      if (tmpv > s[j] && tmpl > resultl)
      {
        resultl = tmpl;
        resultv = tmpv;
      }
    }
  }
  cout << resultl << endl;
}