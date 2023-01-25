#include <iostream>
using namespace std;

int f (int h,int k){ 
    if (h == 0){
        return k;
    }
    else {
    k = h % 10;
    cout << k;
    }
    return f(h = h / 10, k);
}

int main(){
    int n; cin >> n;
    int k;
    int p;
    int l = n;
    int h = 0;
    while(l != 0){
        p = l % 10;
        h = h * 10 + p;
        l = l / 10;
    }
     cout << f(h,k) << " ";
}