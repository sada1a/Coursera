#include <iostream>

using namespace std;

int main()
{
    string a;
    int num=0;
    cin >> a;
    for (int i=0; i<a.size(); i++){
        if (a[i]=='f'){
            num++;
        }
        if (num >= 2){
            cout << i << endl;
            break;
        }

    }
    if (num==1){
        cout << "-1" << endl;
    }
    if (num==0){
        cout << "-2" << endl;
    }
    return 0;
}
