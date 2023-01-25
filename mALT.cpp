#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    long long l = 0;
     for (int i = -60; i <= 60; i++){
        if(a * pow(2, i) == b){
            cout << "YES " << i; 
            return 0;
        }
     }
     for (int i = -60; i <= 60; i++){
        if(a * pow(2, i) != b){
            cout << "NO";
            return 0;
        }
     }
}