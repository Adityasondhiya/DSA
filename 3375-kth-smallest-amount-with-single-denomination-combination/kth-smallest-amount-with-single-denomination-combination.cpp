class Solution {
public:
    typedef long long ll;

    ll countelemnt(ll mid, const vector<int>& coins) {
        int n = coins.size();
        ll correctedCount = 0;

        for (int exp = 1; exp < (1 << n); exp++) {
            ll lcm = 0;
            ll order = 0;

            for (int i = 0; i < n; i++) {
                if (exp & (1 << i)) {
                    order++;

                    if (lcm == 0) {
                        lcm = coins[i];
                    }
                    else {
                        lcm = lcm * coins[i] / gcd(lcm, (ll)coins[i]);
                    }
                }
            }

            if (order % 2 == 0)
                correctedCount -= mid / lcm;
            else
                correctedCount += mid / lcm;
        }

        return correctedCount;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        ll l = 1;
        ll r = (ll)*max_element(coins.begin(), coins.end()) * k;
        ll ans = -1;

        while (l <= r) {
            ll mid = l + (r - l) / 2;

            if (countelemnt(mid, coins) >= k) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};