#include <iostream>

using namespace std;

int main() {

    int x = 10;

    for(int i = 1; i*i < x; i++){
        cout << i << endl;
    }

    cout << x << endl;
    return 0;
}