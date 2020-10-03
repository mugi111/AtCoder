#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  int count = 0;
  int tmp = 0;
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= sqrt(N - i); j++)
    {
      cout << i << " " << j << " " << (N - i) / j << endl;
      if ((N - i) % j == 0)
      {
        if (N / 2 != i)
        {
          if ((N - i) / j == j)
          {
            count++;
          }
          count++;
        }
        else
        {
          if ((N - i) / j == j)
          {
            tmp++;
          }
          tmp++;
        }
      }
    }
  }
  cout << count + tmp << endl;
}