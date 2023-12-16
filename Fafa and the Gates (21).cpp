#include <iostream>
#include <string>
using namespace std;

int main(){
    long long moves, x = 0, y = 0, coins = 0;
    cin >> moves;
    string route;
    cin >> s;
    for (long long i = 0; i < moves; i++){
        if (route[i] == 'U') x += 1;
        if (route[i] == 'R') y += 1;
        if (x == y && route[i] == route[i+1]) coins += 1;
    }
    cout << coins << endl;
}