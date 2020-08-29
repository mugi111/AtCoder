#include <iostream>
#include <string>

#define ll long long
#define rep(i, x) for(register ll i = 0; i < x; i++)

using namespace std;

int main()
{
  double D, T, S;
  cin >> D >> T >> S;

  if(D / T <= S){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}