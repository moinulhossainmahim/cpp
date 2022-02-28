#include<iostream>
#include<math.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int sum = 0;
  int nOrigin = n;
  while(n>0) {
    int lastDigit = n%10;
    sum += pow(lastDigit, 3);
    n = n/10;
  }
  if(sum == nOrigin) {
    cout<<"Amstrong"<<endl;
  } else {
    cout<<"Not amstrong"<<endl;
  }
  return 0;
}