#include <iostream>

using namespace std;

int main() {
    int A, B;
    
    // Input the two numbers
    cin >> A >> B;

    // 1. A * ones digit of B
    int step1 = A * (B % 10);
    // 2. A * tens digit of B
    int step2 = A * ((B / 10) % 10);
    // 3. A * hundreds digit of B
    int step3 = A * (B / 100);
    // 4. Final result
    int result = A * B;

    // Output results
    cout << step1 << endl;
    cout << step2 << endl;
    cout << step3 << endl;
    cout << result << endl;

    return 0;
}