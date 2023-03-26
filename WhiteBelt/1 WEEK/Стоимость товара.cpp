#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    x = x * 0.01;
    y = y * 0.01;
    if (n < a && n < b){
            cout << n << endl;
            return 0;
        }
    if (n > a && n <= b){
        n = n - n * x;
    }
    if (n > b) {
        n = n - n * y;
        }
    cout << n << endl;
    return 0;
}
