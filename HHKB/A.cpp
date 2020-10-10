#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  char S, T;
  cin >> S >>T;

  cout << (char)(S=='N'? tolower(T):toupper(T)) << endl;
}