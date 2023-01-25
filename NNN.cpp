#include <iostream>
using namespace std;;

int main(){
    int n;
    cin >> n;
    int a[n];
    int k = 0;
    int sum = 0; int sum2 = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n /2; i < n; i++){
        while (a[i] != 0){
            k = a[i] % 10;
            sum = sum + k;
            a[i] = a[i] / 10;
        }
    }
    int l = 0;
    for(int i = 0; i < n / 2; i++){
        while (a[i] != 0){
            l = a[i] % 10;
            sum2 = sum2 + l;
            a[i] = a[i] / 10;
        }
    }
    if (sum == sum2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}