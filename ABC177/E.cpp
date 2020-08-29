#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#define ll long long
#define repeat(i, x) for(register ll i = 0; i < x; i++)

using namespace std;


int gcd_arr(vector<int> &a){
  int n = a.size();
  for(int i=n-2; i>=0; i--){
    a[i] = __gcd(a[i], a[i+1]);
  }
  return a.front();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N; cin >> N;
  bool pc = false;
  bool sc = false;
  ll tmp;
  vector<int> A(N);

  repeat(i, N) {
    cin >> A[i];
  }

  if(gcd_arr(A) == 1) {
    sc = true;
    pc = true;
  }

  for (int i = 0; i < N - 1 && pc && sc; i++) {
    for (int j = i + 1; j < N && pc && sc; j++) {
      if(__gcd(A[i], A[j]) != 1) {
        pc = false;
      }
    }
  }

  if(pc) {
    cout << "pairwise coprime" << endl;
  }else if(sc) {
    cout << "setwise coprime" << endl;
  }else {
    cout << "not coprime" << endl;
  }
}