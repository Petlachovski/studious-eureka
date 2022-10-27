#include <iostream>

int main() {
    using namespace std;
    int H, result;
    cin >> H;
    H = H*100;

    while(H>1.0) {
        H *= 0.6;
        result++;
    }

    cout << result << endl;
}
