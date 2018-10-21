#include <iostream>
using namespace std;

int main(){
    int x = 0;
    while (x < 5 && x == 2) {
        x += 1;
        cout << x;
    }
    cout << x << endl;
    return 0;
}
