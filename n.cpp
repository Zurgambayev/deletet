#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    int rev = 0;
    int reverse = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = (n / 2) ; i < n; i++){
       while (a[i] != 0){
        rev = a[i] % 10;
        reverse = reverse * 10 + rev;
        a[i] = a[i]/ 10;
       }  
       for (int j = 0; j < n / 2;j++){
        if (reverse == a[j]){
            cnt++;
        }
       }
       reverse = 0;
    }
    if (cnt == n / 2 || cnt == (n / 2) * (n / 2)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}