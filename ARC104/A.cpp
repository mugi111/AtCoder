#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int A, B, Y;
  cin >> A >> B;

  for (int i = 0;; i++)
  {
    if (A - i == B + i)
    {
      Y = i;
      break;
    }
    else if (A + i == B - i)
    {
      Y = -i;
      break;
    }
  }

  cout << A - Y << " " << Y << endl;
}