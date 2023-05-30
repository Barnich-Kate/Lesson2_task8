  #include <iostream>
#include <math.h>
using namespace std;
int main() {

	int N;
	cout << "Type number N: ";
	cin >> N;
	int result1, result2 = 0;
	for (int i=10, k=-10; i>=-10 && i<=10 && k<=10 && k>=-10; i++, k++) {
		if (N > 0) {
			result1 = N / i;
			result2 = N / k;
			
		} else {
			continue;
		}
	} 
	cout << "Result is equal: " << result1  << endl;
	cout << "Result is equal: " << result2  << endl;

}
    
