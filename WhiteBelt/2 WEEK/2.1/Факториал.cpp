#include <iostream>

using namespace std;
int Factorial(int n){
    int res;
    res = 1;
    if (n<0){
        return res;
    } else
    for (int i = 1; i <= n; i++) {
      res = res * i;
    }
    return res;
}


int main()
{
  int n;
  cin >> n;

  cout << Factorial(n);
}
