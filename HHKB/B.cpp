#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define repeat(i, x) for (register ll i = 0; i < x; i++)

int main()
{
  int H, W;
  int count = 0;
  cin >> H >> W;
  vector<string> S(H);
  for(int i = 0; i < H; i++)
  {
    cin >> S[i];
  }
  for(int i = 0; i < H; i++)
  {
    for(int j = 0; j < W; j++)
    {
      if(S[i][j]=='.')
      {
        if(j != W-1){
          if(S[i][j+1] == '.') count++;
        }
        if(i != H-1){
          if(S[i+1][j] == '.') count++;
        }
      }
    }
  }
  cout << count << endl;
}