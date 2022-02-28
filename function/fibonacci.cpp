#include<iostream>

using namespace std;

void fibonacci(int n) {
  int firstDigit = 0;
  int secondDigit = 1;
  int nextDigit;
  for(int i=1; i<=n; i++) {
    cout<<firstDigit<<" ";
    nextDigit = firstDigit + secondDigit;
    firstDigit = secondDigit;
    secondDigit = nextDigit;
  }
  cout<<endl;
  return;
}

int main() {
  int n;
  cin>>n;
  fibonacci(n);
  return 0;
}