#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		long long ans = 0;
		ans += n; // First step to right most light
		ans += n; // Second step to left most light
		ans += (1LL * n * (n-1))/2; // From now it is n-1 + n-2 + ... 1
		printf("%lld\n", ans);
	}
	return 0;
}
