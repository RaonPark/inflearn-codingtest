#include <iostream>
using namespace std;

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	
	int max_val = 0, flag = 0, alarm = 0;
	for(int i=0; i<N; i++) {
		int m; scanf("%d", &m);
		if(m > M) {
			if(!flag) {
				flag = 1;
			}
			alarm++;	
		}
		else {
			if(flag) {
				max_val = max(max_val, alarm);
				flag = 0;
			}
			alarm = 0;
		}
	}
	
	max_val = max(max_val, alarm);
	if(max_val == 0) printf("-1\n");
	else printf("%d\n", max_val);
	
	return 0;
}
