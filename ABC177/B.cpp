#include <iostream>
#include <string>

#define ll long long
#define repeat(i, x) for(register ll i = 0; i < x; i++)

using namespace std;

int main()
{
  string S, T;
  int count;
  int max = 0;

  cin >> S >> T;

  for (register int i = 0; i <= S.size() - T.size(); i++) {
    count = 0;
    for (register int j = 0; j < T.size(); j++) {
      if (S[i+j] == T[j]) {
        count++;
      }
    }
    if(max < count) {
      max = count;
    }
  }

  cout << T.size() - max << endl;
}