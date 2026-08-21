
class Solution {
public:
    long long lcm(long long a, long long b, long long limit){
        long long g = gcd(a, b);
        if (a / g > limit / b) return limit + 1; 
        return (a / g) * b;
    }

    vector<long long> add; 
    vector<long long> sub; 

    void subsets(vector<int>& base, int i, long long val, bool odd, long long limit){
        if(i == base.size()){
            if(val != 1) {
                if(odd) add.emplace_back(val);
                else sub.emplace_back(val);
            }
            return;
        }
        long long temp = val;
        val = lcm(val, base[i], limit);
        if (val <= limit) {
            subsets(base, i + 1, val, !odd, limit);
        }
        val = temp; 
        subsets(base, i + 1, val, odd, limit);
    }

    long long count(long long x){
        long long sum = 0;
        for(long long i : add) sum += x / i;
        for(long long i : sub) sum -= x / i;
        return sum;
    }

    long long findKthSmallest(vector<int>& coins, int k) {

        int n = coins.size();
        vector<int> base;
        int mn = 26;

        for(int i = 0; i < n; i++){
            mn = min(mn, coins[i]);
            if(coins[i] == 1) return k; 
            for(int j = 0; j < n; j++){
                if(i == j || coins[j] == -1) continue;
                if(coins[i] % coins[j] == 0){
                    coins[i] = -1;
                    break;
                }
            }
            if(coins[i] != -1) base.emplace_back(coins[i]);
        }

        if(base.size() == 1) return (long long) mn * k;
        
        long long r = (long long) mn * k;

        subsets(base, 0, 1, 0, r);
        
        long long l = 1, m = 0, out = r;

        while(l <= r){
            m = l + (r - l) / 2;
            if(count(m) >= k){
                out = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return out;
    }
};