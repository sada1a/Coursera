#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool IsPalindrom(string n){
    for(int i = 0; i < n.length()/2; ++i)
        {
            if(n[i] != n[n.length()-i-1])
            {
                return false;
            }
        }
    return true;
}

int main()
{
  string n;
  cin >> n;
  if (IsPalindrom (n))
  {
      cout << "true" <<endl;
  } else
  {
  cout << "false" <<endl;}
  return 0;
}
