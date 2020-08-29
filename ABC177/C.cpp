#include <iostream>
#include <string>
#include <vector>


#define ll long long
#define repeat(i, x) for(register ll i = 0; i < x; i++)

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N; cin >> N;
  ll sum = 0;
  ll tmp;
  vector<ll> A(N);

  repeat(i, N) {
    cin >> A[i];
  }

  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      tmp = A[i] * A[j] % 1000000007;
      sum += tmp;
    }
  }

  cout << sum % 1000000007 << endl;
}