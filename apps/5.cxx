#include <iostream>

int main() {
    using namespace std;
    int N, result;
    cin >> N;

    for(int i; i<N; i++) {
        result = result + 60 + 10*i;
    }

    cout << result/1440 << ":" << result%1440/60 << ":" << result%1440%60 << endl;
}
