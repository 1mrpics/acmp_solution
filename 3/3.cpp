#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;  
    a = a / 10;
    b = a + 1;
    a = a * b;
    if (a==0){
        cout << 25;
    }
    else {
        cout << a << 25;
    }
    return 0;
}
