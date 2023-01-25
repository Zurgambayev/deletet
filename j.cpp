#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int mx = -100000;
    int mn = 100000;
    int k;
    int f = n;
    while (n != 0){
        k = n % 10;
        if (k > mx){
            mx = k;
        }
        n = n / 10;
    }
    while (f != 0){
        k = f % 10;
        if (k < mn){
            mn = k;
        }
        f = f / 10;
    }
    cout << mx << " " << mn;
}