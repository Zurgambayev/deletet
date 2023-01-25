#include <iostream>
using namespace std;

int main(){
    long long n;
    int q;
    cin >> n;
    long long a[n];
    long long  mx1 = -100000,mx2 = -100000;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
       if (mx1 < a[i]){
           mx1 = a[i];
       }
    }
    for (int i = 0; i < n; i++){
       if (mx2 < a[i] && a[i] < mx1){
         mx2 = a[i];
       }
    }
    long long s = mx2 * mx1;
    cout << s;
}