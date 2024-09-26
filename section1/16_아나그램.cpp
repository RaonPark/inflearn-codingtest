#include <iostream>
#include <cstring>
#include <bitset>
#include <vector>
using namespace std;

// 해싱기법을 사용하여 해결
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a, b;
	cin >> a >> b;
	
	if(a.length() != b.length()) {
		cout<<"NO\n";
	} 
	
	int alpha_a[53], alpha_b[53];
	memset(alpha_a, 0, sizeof(alpha_a));
	memset(alpha_b, 0, sizeof(alpha_b));
	
	for(int i=0; i<a.length(); i++) {
		if(a[i] >= 'a' && a[i] <= 'z') {
			alpha_a[a[i] - 'a']++;
		}
		else if(a[i] >= 'A' && a[i] <= 'Z') {
			alpha_a[a[i] - 'A' + 25]++;
		}
		
		if(b[i] >= 'a' && b[i] <= 'z') {
			alpha_b[b[i] - 'a']++;
		}
		else if(b[i] >= 'A' && b[i] <= 'Z') {
			alpha_b[b[i] - 'A' + 25]++;
		}
	}
	
	for(int i=0; i<52; i++) {
		if(alpha_a[i] != alpha_b[i]) {
			cout<<"NO\n";
			return 0;
		}
	}
	
	cout<<"YES\n";
	return 0;
}
