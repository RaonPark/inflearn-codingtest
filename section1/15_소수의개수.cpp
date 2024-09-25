#include <iostream>
#include <cstring>
#include <bitset>
#include <vector>
using namespace std;

vector<long long> v;

int main() {
	int N;
	scanf("%d", &N);

  // 에라토스테네스의 체
	int result = 0;
	bitset<200010> b; b.set(); b[0]=b[1]=0;
	for(long long i=2; i<=N; i++) {
		if(b[i]) {
			for(long long j=i*i; j<=N; j+=i) {
				b[j] = 0;
			}
			result++;
		}
	}
	
	printf("%d\n", result);
	return 0;
}
