#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

bool compare(pair<int, int> a, pair<int, int> b)
{
  if (a.first != b.first)
  {
    return a.first < b.first;
  }
  else
  {
    return a.second < b.second;
  }
}

int main()
{
  int N, x, y;
  cin >> N;
  typedef pair<int, int> pair;
  vector<pair> pos;

  int diffx1, diffx2, diffy1, diffy2;

  for (int i = 0; i < N; i++)
  {
    cin >> x >> y;
    pos.push_back(pair(x, y));
  }

  for (int i = 0; i < (N - 2); i++)
  {
    for (int j = i + 1; j < (N - 1); j++)
    {
      for (int k = j + 1; k < (N); k++)
      {
        diffx1 = (pos[i].first - pos[j].first);
        diffx2 = (pos[i].first - pos[k].first);
        diffy1 = (pos[i].second - pos[j].second);
        diffy2 = (pos[i].second - pos[k].second);

        if ((diffx2 * diffy1) == (diffx1 * diffy2))
        {
          cout << endl;
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}