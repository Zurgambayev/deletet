#include <iostream>
using namespace std;


int main(){
    int n,m;
    cin >> n >> m; 
    int a[n][m];
    int x1,x2;
    int y1,y2;
    for (int i = 0; i < n; i++){
        for (int j = 0;j < m;j++){
            a[i][j] = 0;
        }
    }
    int k;
    cin >> k;
    int b[k][4];
    for (int i = 0; i < k; i++){
        for (int j = 0;j < 4;j++){
            cin >> a[i][j];
        }
    }
     for (int l = 0; l < n; l++){
        for (int t = 0;t < m;t++){
            for (int i = 0; i < k; i++){
        for (int j = 0;j < 4;j++){
           a[i][j] = x1; a[i][j+1] = y1;
           a[i][j+2] = x2; a[i][j+3] = y2;
           if (x1 < t && t < x2 && y1 < l && y2 > l){
            a[l][t] = 1;
           } 
        }
            } 
            cout << a[l][t] << " ";
        }
        cout << endl;
    }
}
