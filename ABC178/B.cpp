#include <iostream>
#include <string>

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

using namespace std;

int main()
{
  ll a, b, c, d;
  ll tmp;

  cin >> a >> b >> c >> d;

  if (((a < 0 && b < 0) && (c >= 0 && d >= 0)) || ((a >= 0 && b >= 0) && (c < 0 && d < 0)))
  {
    tmp = a * d < b * c ? b * c : a * d;
  }
  else
  {
    tmp = a * c < b * d ? b * d : a * c;
  }
  cout << tmp << endl;
}