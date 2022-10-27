#include <iostream>

int main() {
    using namespace std;
    int N, sum;
    cin >> N;

    for(int i; i<N; i++) {
        int temp_num;
        cin >> temp_num;
        sum =sum + temp_num;
    }

    cout << sum*1.0/N << endl;
}
