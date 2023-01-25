#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, p;
    cin >> n >> m >> p;
    int s;
    if(p == 1){
        for(int i = n ; i <= m; i++){
            s = sqrt(i) ;
            if(i == s * s ){
                cout << i << " ";
            }
        }
    }

    if(p == -1){
        for(int i = m ; i >= n; i--){
            s = sqrt(i);
            if(i == s * s){
                cout << i << " ";
            }
        }
    }

    return 0;
}