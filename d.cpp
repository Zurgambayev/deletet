#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[1001];
    int mx = -10000;
    int moda = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 1001; i++){
       b[i] = 0;
    }
    for (int i = 0; i < n; i++){
        b[a[i]]++;
    }
    for (int i = 0; i < 1001; i++){
        if(b[i] > mx){
            mx = b[i];
        }
    }
     for (int i = 1001; i >= 0; i--){
        if(b[i] == mx){
            cout << i << " ";
        }
    }
}