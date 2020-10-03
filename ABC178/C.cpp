#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int S;
  cin >> S;
  long long per = 1;
  for (int i = 0; i < 2; i++)
  {
    per *= ((S - i) % 1000000007);
  }

  cout << per % 1000000007 << endl;
}