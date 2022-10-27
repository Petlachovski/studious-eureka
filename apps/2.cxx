#include <iostream>

int main() {
    using namespace std;
    int N, result;
    cin >> N;

    for(int i = 0; i <= N; i++) {
        if (i%2!=0 && i%3!=0 && i%5!=0){
            result++;
        }
    }
    cout << result << endl;
}
