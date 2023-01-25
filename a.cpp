#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int left = 0,right = 0;
    int cntl = 0, cntr = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            left = left + a[i];
            cntl++;
        }
        if (a[i] % 2 == 1){
            right = right + a[i]; 
            cntr++;
        }
    }
    cout << "Left hand magic power: " << left * cntl << endl;
    cout << "Right hand magic power: " << right * cntr;
}