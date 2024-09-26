#include <iostream>
using namespace std;

// 투포인터를 사용하여 해결
int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	
	int temp[100010];
	for(int i=0; i<N; i++) {
		scanf("%d", &temp[i]);
	}
	
	int lo = 0, hi = 1;
	int sum = temp[lo], max_val = -987654321;
	while(hi < N) {
		sum += temp[hi];
		
		if((hi - lo + 1) == K) {
			max_val = max(max_val, sum);
			sum -= temp[lo];
			lo++;
		}
		hi++;
	}
	
	max_val = max(max_val, sum);
	printf("%d\n", max_val);
	
	return 0;
}
