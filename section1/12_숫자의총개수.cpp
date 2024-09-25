#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int get_digits(int x) {
	int result = 0;
	while(x > 0) {
		result++;
		x/=10;
	}
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	
	if(N < 10) {
		printf("%d\n", N);
		return 0;
	}
	
//	15 -> 10보다 크고 100보다 작으므로 15-10*2 + 9
//	즉, (N-(10|100|1000...) + 1)*(자릿수) + (자릿수의 10의 거듭제곱보다 하나 낮은 모든 수) * (해당 수의 자릿수)
	
	int result = 0;
	int digits = get_digits(N);
	int ten = (int)pow(10, digits - 1);
	for(int i=1; i<ten; i*=10) {
		result += i * 9 * get_digits(i);
	}
	
	result += (N - ten + 1) * digits;
	
	printf("%d\n", result);
	
	return 0;
}
