class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum, sq, lazy;
    };

    vector<Node> seg;

    void update(int idx, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return;

        if (ql <= l && r <= qr) {
            seg[idx].sq = (seg[idx].sq
                + 2 * seg[idx].sum + (r - l + 1)) % MOD;

            seg[idx].sum = (seg[idx].sum + r - l + 1) % MOD;
            seg[idx].lazy++;
            return;
        }

        int mid = (l + r) / 2;
        push(idx, l, r);

        update(idx * 2, l, mid, ql, qr);
        update(idx * 2 + 1, mid + 1, r, ql, qr);

        seg[idx].sum = (seg[idx * 2].sum
                      + seg[idx * 2 + 1].sum) % MOD;

        seg[idx].sq = (seg[idx * 2].sq
                     + seg[idx * 2 + 1].sq) % MOD;
    }

    void push(int idx, int l, int r) {
        if (seg[idx].lazy == 0 || l == r) return;

        int mid = (l + r) / 2;
        apply(idx * 2, l, mid, seg[idx].lazy);
        apply(idx * 2 + 1, mid + 1, r, seg[idx].lazy);

        seg[idx].lazy = 0;
    }

    void apply(int idx, int l, int r, long long v) {
        long long len = r - l + 1;
        long long oldSum = seg[idx].sum;

        seg[idx].sq = (seg[idx].sq
            + 2 * v % MOD * oldSum
            + v % MOD * v % MOD * len) % MOD;

        seg[idx].sum = (oldSum + v * len) % MOD;
        seg[idx].lazy = (seg[idx].lazy + v) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        seg.resize(4 * n, {0, 0, 0});

        unordered_map<int, int> last;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int prev = last.count(nums[i]) ? last[nums[i]] : -1;

            update(1, 0, n - 1, prev + 1, i);

            // Sum of squared distinct counts for subarrays ending at i
            // is the sum of squares over all valid left endpoints.
            // Retrieve the root's square sum only after accounting
            // for the current prefix contributions.
            ans = (ans + query(1, 0, n - 1, 0, i)) % MOD;

            last[nums[i]] = i;
        }

        return ans;
    }

    long long query(int idx, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return 0;
        if (ql <= l && r <= qr) return seg[idx].sq;

        push(idx, l, r);
        int mid = (l + r) / 2;

        return (query(idx * 2, l, mid, ql, qr)
              + query(idx * 2 + 1, mid + 1, r, ql, qr)) % MOD;
    }
};