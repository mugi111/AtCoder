#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)
 
int main()
{
  int N, tmp, prev;
  prev = 0;
  cin >> N;
  vector<int> p(200000);
  for(int i = 0; i < N; i++)
  {
    cin >> tmp;
    if(tmp == prev || i == 0){
      p[tmp] = 1;
      for(int j = prev;; j++){
        if(p[j] == 0) {
          prev = j;
          cout << prev << endl;
          break;
        }
      }
    }
    else
    {
      p[tmp] = 1;
      cout << prev << endl;
    }
  }
}