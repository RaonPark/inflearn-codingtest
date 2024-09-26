#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	
	int cnt = 1, max_val = -1, prev = 987654321;
	for(int i=0; i<N; i++) {
		int m; scanf("%d", &m);
		
		if(prev <= m) {
			cnt++;
			prev = m;
		} else {
			max_val = max(max_val, cnt);
			prev = m;
			cnt = 1;
		}
	}
	
	printf("%d\n", max(max_val, cnt));
	
	return 0;
}
