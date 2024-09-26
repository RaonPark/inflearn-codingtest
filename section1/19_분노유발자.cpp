#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	
	int arr[101];
	for(int i=0; i<N; i++) {
		scanf("%d", &arr[i]);
	}
	
	int result = 0, flag = 0;
	for(int i=0; i<N-1; i++) {
		flag = 0;
		for(int j=i + 1; j<N; j++) {
			if(arr[i] <= arr[j]) {
				flag = 1;
				break;
			}
		}
		if(!flag) {
			result++;
		}
	}
	
	printf("%d\n", result);
	
	return 0;
}
