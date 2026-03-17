// IF sieve[k] = 0 then k is prime else sieve[k] is highest prime factor of k.
for(int x = 2 ; x <= n; ++n){
  if (sieve[x]) continue;
  for(int u = x; u<= n; u+=s){
    sieve[x] = u;
  }
}
// IF sieve[k] = 0 then k is prime else sieve[k] is lowest prime factor of k.
for(int x = 2 ; x <= n; ++n){
  if (sieve[x]) continue;
  for(int u = x; u<= n; u+=s){
    if (sieve[u]) continue;
    sieve[x] = u;
  }
}
