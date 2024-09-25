#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int digit_sum(int x) {
	int sum = 0;
	for(int next=x; next>0; next/=10) {
		sum += (next % 10);
	}
	
	return sum;
}

int main(int argc, char** argv) {
	int N;
	scanf("%d", &N);
	
	int max_val = -1, max_sum = -1;
	for(int i=0; i<N; i++) {
		int m; scanf("%d", &m);
		
		int sum = digit_sum(m);
		if(sum > max_sum) {
			max_val = m;
			max_sum = sum;
		} else if(sum == max_sum) {
			max_val = max(m, max_val);
		}
	}
	
	printf("%d\n", max_val);
	
	
	return 0;
}
