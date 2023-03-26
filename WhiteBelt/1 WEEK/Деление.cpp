#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    if (b == 0){
        cout << "Impossible" <<endl;
    } else {
    c=a/b;
    cout << c <<endl;
    }
    return 0;
}
