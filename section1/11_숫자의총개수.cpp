#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int get_natural(int x) {
	int result = 0;
	for(int next=x; next>0; next/=10) {
		result++;
	}
	
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	
	int result = 0;
	for(int i=1; i<=N; i++) {
		result += get_natural(i);
	}
	
	printf("%d\n", result);
	return 0;
}


// 똑같은 알고리즘을 to_string()을 사용하여 구현 
//int main(int argc, char** argv) {
//	int N;
//	scanf("%d", &N);
//	
//	int result = 0;
//	for(int i=1; i<=N; i++) {
//		string s = to_string(i);
//		for(int j=0; j<s.length(); j++) {
//			result++;
//		}
//		printf("%d: %d\n", i, result);
//	}
//	printf("%d\n", result);
//	
//	return 0;
//}
