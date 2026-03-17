// getting divisors as a vector. (tc = o(root n)
using ll = long long;

vector<ll> get_divisors(ll n) {
  vector<ll> divs;
  for (int i = 1; 1LL * i * i <= n; i++) {
    if (n % i == 0) {
      divs.push_back(i);
      if (i != n / i) {
        divs.push_back(n / i);
      }
    }
  }
  sort(divs.begin(), divs.end());
  return divs;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, k; cin >> n >> k;
  vector<ll> divs = get_divisors(n);
  if (k > divs.size()) {
    cout << -1 << '\n';
  } else {
    cout << divs[k - 1] << '\n';
  }
  return 0;
}
// counting divisors : just the size of the returned vector from get_divisors (tc = o(root n)
// we can also do it with tc = o(log x) and with pre processing of o(mlogm) of sieve
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int x; cin >> x; // expecting x to not be 1.
    vector<int> v;
    while(x!= 1){
      v.push_back(sieve1[x]);
      x /= sieve1[x];
    }
    // if you need the count just do the size of the v else if you want the prime factorisation then do the v one.
  }
}
