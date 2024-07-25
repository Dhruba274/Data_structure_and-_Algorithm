#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int m, k;
    cin >> m >> k;
    
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    
    long long interestingSubarrays = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            long long subarraySum = prefixSum[j] - prefixSum[i];
            int c = j - i;
            if (c % (m * k) == subarraySum % (m * k)) {
                interestingSubarrays++;
            }
        }
    }
    
    cout << interestingSubarrays << endl;
    
    return 0;
}