#include <iostream>
using namespace std;

int main (){
    int n,m,k;
    cin >> n >> m>> k;
    int l = n;
    int p = n;
    if (k == 1){
        while (n < m){
            n = l * l;
            l++;
            if (n > m){
                cout << n << " " << m;
            continue;
            }
            cout << n << " ";
        }
    }
    l = p;
    if (k == -1){
        for (int i = p; i <= m;i++){
        while(p < m){
               p = l * l;
            l++;
            if (p > m){
               
            continue;
             cout << p << " " << m;
            }
             cout << p << " ";
        }
    }
    }
}