#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	
	int A[101], B[101];
	for(int i=0; i<N; i++) {
		scanf("%d", &A[i]);
	}
	for(int i=0; i<N; i++) {
		scanf("%d", &B[i]);
	}
	
	for(int i=0; i<N; i++) {
		int a = A[i], b = B[i];
		if(a == b) {
			printf("D\n");
		} else {
			if(a == 1) {
				if(b == 2) printf("B\n");
				else printf("A\n");
			} else if(a == 2) {
				if(b == 1) printf("A\n");
				else printf("B\n");
			} else {
				if(b == 1) printf("B\n");
				else printf("A\n");
			}
		}
	}
	
	return 0;
}
