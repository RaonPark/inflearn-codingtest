#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		int total_sum = a * (a + 1) / 2;
		if(total_sum == b) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
