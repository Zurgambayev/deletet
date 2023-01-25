#include <iostream>
using namespace std;

int main(){
    long long  n,k,l,c;
    cin >> n;
    l = n;
    int sum = 0;
    while(n != 0){
        k = n % 10;
        n = n / 10; 
    }
    while(l != 0){
        c = l % 10;
        l = l / 10;
        sum = sum + c;
    }
    if ((sum - k) % 10 == k){
        cout <<"YES";
    }
    else {
        cout << "NO";
    }
}