#include <iostream>
#include <cmath>
using namespace std;

int main (){
    long long  a,b;
    cin >> a >> b;
    long long n;
    long long l = 0;
    if (b < a){
        long long  r = a / b;
        while (r != 2){
            r = r / 2;
            l++;
            if (r % 2 == 1){
                l = 0;
            }
        }
        cout << "YES "<< -(l + 1);
    }
    if (a < b){
    long long k = b / a;
    while( k != 2){
    k = k / 2;
    l++;
    if (k % 2 == 1 ){
        l = 0;
    }
    }
     if (l != 0){
       cout << "YES "<< l + 1;
    }
    else {
        cout << "NO";
    }
    }
    if (a == b){
        cout << "YES " << 0;
    }
}