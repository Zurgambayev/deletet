#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++){
        if (k >= a[i] && k <= b[i]){
            cnt++;
        }
    }
    cout << cnt;
}