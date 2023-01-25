#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j] == a[j][i]){
                cnt++;
            }
        }
    }
    if (cnt == n * n){
        cout << "Perfect.";
    }
    else{
       cout << "Not perfect.";
    }
}