#include <iostream>
#include <cstring>
#include <bitset>
#include <vector>
using namespace std;

//bitset<100010> b;
//vector<int> primes;

// 에라토스테네스의 체 
//bool isPrime(int x) {
//	for(int i=1; i<=100000; i++) {
//		if(!b[i]) {
//			for(int j=i; j<=100000; j+=i) {
//				b[j] = 1;
//			}
//			primes.emplace_back(i);
//		}
//	}
//}

// 1은 소수가 아니다.
bool isPrime(int x) {
	if(x == 1) return false;
	for(int i=2; i<x; i++) {
		if(x % i == 0)
			return false;
	}
	return true;
} 

int reverse(int x) {
	int cnt = 0, result = 0;
	while(x>0) {
		int digit = x % 10;
		result = result * 10 + digit;
		x /= 10;
	}
	
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	
	int arr[101];
	for(int i=0; i<N; i++) {
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<N; i++) {
		int rev_num = reverse(arr[i]);
		if(isPrime(rev_num)) printf("%d\n", rev_num);
	}
	printf("\n");
	return 0;
}
