#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[101];
	scanf("%s", &s);
	
	int arr[10];
	memset(arr, 0, sizeof(arr));
	for(int i=0; s[i]!='\0'; i++) {
		int num = s[i] - '0';
		arr[num]++;
	}
	
	int max_val = -1, max_num = -1;
	for(int i=0; i<10; i++) {
		if(max_num < arr[i]) {
			max_num = arr[i];
			max_val = i;
		} else if(max_num == arr[i]) {
			max_val = max(i, max_val);
		}
	}
	
	printf("%d\n", max_val);
}
