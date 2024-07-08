class Solution {
    public void solve(ArrayList<Integer> v, int k, int ind) {
        if (v.size() == 1) return;
        int in = (ind + k) % v.size();
        v.remove(in);
        solve(v, k, in);
    }
    public int findTheWinner(int n, int k) {
        k--;
        ArrayList<Integer> v = new ArrayList<>(n);
        for (int i = 1; i <= n; i++) {
            v.add(i);
        }
        solve(v, k, 0);
        return v.get(0);
    }
}