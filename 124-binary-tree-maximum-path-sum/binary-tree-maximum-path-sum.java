/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxPath(TreeNode node,int maxVal[]) {
        if(node==null) return 0;
        int left=Math.max(0,maxPath(node.left,maxVal));
        int right=Math.max(0,maxPath(node.right,maxVal));
        maxVal[0]=Math.max(maxVal[0],left+right+node.val);
        return Math.max(left,right)+node.val;
    }
    public int maxPathSum(TreeNode root) {
        int maxVal[]=new int[1];
        maxVal[0]=Integer.MIN_VALUE;
        maxPath(root,maxVal);
        return maxVal[0];
    }
}