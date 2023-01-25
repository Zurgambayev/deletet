#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,c;
    cin >> s >> c;
    int l = s.find(c);
    if(l == -1){
        cout << "no";
    }
    else {
        cout << " yes" << endl;
    }
    cout << l;
}