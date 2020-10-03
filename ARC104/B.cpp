#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

bool checkComp(string str1)
{
  bool result = false;
  int diff;
  for (int i = 1; i < str1.length(); i++)
  {
    result = false;
    for (int j = 0; j < str1.length(); j++)
    {
      diff = j + i;
      if (str1.length() - 1 < diff)
      {
        diff = str1.length() - 1 - j;
      }
      result = ((str1[j] == 'A' && str1[diff] == 'T') || (str1[j] == 'G' && str1[diff] == 'C') || (str1[j] == 'T' && str1[diff] == 'A') || (str1[j] == 'C' && str1[diff] == 'G'));
    }
    if (result)
    {
      return result;
    }
  }
  return result;
}

int check(string tmp)
{
  int count = 0;
  string cloped, base;
  for (int i = 0; i < tmp.length(); i++)
  {
    for (int j = 2; j < tmp.length() - i + 1; j++)
    {
      base = tmp.substr(i, j);

      count += checkComp(base) ? 1 : 0;
    }
  }
  return count;
}

int main()
{
  int N;
  string S;
  cin >> N >> S;
  cout << check(S) << endl;
}