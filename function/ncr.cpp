#include<iostream>

using namespace std;

int factorial(int n) {
  int fact = 1;
  for(int i=2; i<=n; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  int n,r,res;
  cin>>n>>r;
  res = factorial(n)/(factorial(n-r) * factorial(r));
  cout<<res<<endl;
  return 0;
}