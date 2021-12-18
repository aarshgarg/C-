#include<iostream>
using namespace std;
int main()

{




int k (int a, int b) {
  if (a < b) {
    if (b > 4) {
      return 0 ;
    }
    else {
      return 1;
    }
  }
  else {
    if (a > 4) {
      return 2;
    }
    else {
      return 3;
    }
  }
  return 0;
}
}

