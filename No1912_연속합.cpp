#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> nums;

void input() {
	cin >> ::N;
	nums.assign(N, 0);

	for (int i = 0; i < N; i++)
		cin >> nums[i];
}

int solve() {
	vector<int> dp(N, 0);

	dp[0] = nums[0];
	int ans = dp[0];

	for (int i = 1; i < N; i++) {
			dp[i] = max(nums[i], nums[i] + dp[i - 1]);
			ans = max(ans, dp[i]);
	}

	return ans;
}

int main() {
	input();
	
	int ans = solve();
	cout << ans;
}