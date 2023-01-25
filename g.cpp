#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k; 
    int l;
    cin >> l;
    if (l == 1){
        for (int i = n; i <= k;i++){
            if (i / sqrt(i) == sqrt(i)){
                cout << i << " ";
            }
        }
    }
    if (l == -1){
        for (int i = k; i >= n;i--){
            if (pow(i,2) == sqrt(i) * sqrt(i) * sqrt(i) *sqrt(i)){
                cout << i << " ";
            }
        }
    }
}