#include <iostream>
using namespace std;

int main() {
	int A[10], B[10];
	for(int i=0; i<10; i++) {
		scanf("%d", &A[i]);
	}
	for(int i=0; i<10; i++) {
		scanf("%d", &B[i]);
	}
	
	int a = 0, b = 0, last_win = 2;
	for(int i=0; i<10; i++) {
		if(A[i] > B[i]) {
			last_win = 0;
			a += 3;
		} else if(A[i] < B[i]) {
			last_win = 1;
			b += 3;
		} else {
			a += 1;
			b += 1;
		}
	}
	
	if(a > b) {
		printf("%d %d\nA\n", a, b);
	} else if(a < b) {
		printf("%d %d\nB\n", a, b);
	} else {
		if(last_win == 0) {
			printf("%d %d\nA\n", a, b);
		} else if(last_win == 1) {
			printf("%d %d\nB\n", a, b);
		} else printf("%d %d\nD\n", a, b);
	}
	
	return 0;
}
