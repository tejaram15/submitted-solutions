/**
 * December Cook-Off 2012 at Codechef
 *
 * Problem:     MUFFINS3 - Packaging Cupcakes
 * Author:      Anton Lunyov (Tester)
 * Complexity:  O(1) per test
 * Timing:      0.00 out of 1
 *
 * Description:
 * The optimal package size is just N/2+1.
 */
#include <iostream>
using namespace std;

int main() {
	// input number of tests
	int T;
	cin >> T;
	// loop over tests
	for (int t = 0; t < T; ++t) {
		// input N
		int N;
		cin >> N;
		// calc and output result
		int A = N / 2 + 1;
		cout << A << endl;
	}
	return 0;
}
