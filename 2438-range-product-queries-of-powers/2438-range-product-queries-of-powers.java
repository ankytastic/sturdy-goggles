class Solution {
    public int[] productQueries(int n, int[][] queries) {
        final int MOD = 1_000_000_007;

        List<Integer> p = new ArrayList<>();
        for (int i = 0; i < 32; i++) {
            if (((n >> i) & 1) == 1) {
                p.add(1 << i);  
            }
        }

        int[] result = new int[queries.length];

        for (int i = 0; i < queries.length; i++) {
            int left = queries[i][0];
            int right = queries[i][1];

            long prod = 1;
            for (int j = left; j <= right; j++) {
                prod = (prod * p.get(j)) % MOD;
            }

            result[i] = (int) prod;
        }

        return result;
    }
}