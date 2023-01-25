#include <iostream>
using namespace std;

int main (){
    int n,k; cin >> n >> k;
    int p; cin >> p;
    int i = n;
    int m,l;
    if (p == 1){
        m = i * i;
    while (m < k){
        m = i * i;
        i = i + 1;
        cout << m << " ";
    }
    }
    i = n;
    if(p == -1){
        m = i * i;
     while (m < k){
     m = i * i;
     i = i + 1;
    }
    while(m > n){
        m = (i - 1) * (i - 1);
        i--;
        cout << m << " ";
    }
}
}