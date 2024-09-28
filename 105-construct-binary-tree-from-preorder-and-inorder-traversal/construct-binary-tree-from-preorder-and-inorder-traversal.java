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
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        Map<Integer, Integer> inMap = new HashMap<Integer, Integer>();
        for(int i=0;i<inorder.length;i++){
            inMap.put(inorder[i],i);
        }
        TreeNode root=buildTree(preorder,0,preorder.length-1,inorder,0,inorder.length-1,inMap);
        return root;
    }
    public TreeNode buildTree(int[] preorder,int preS, int preE, int[] inorder, int inS, int inE, Map<Integer,Integer> Inm) {
        if(preS>preE || inS>inE) return null;
        TreeNode root=new TreeNode(preorder[preS]);
        int inR=Inm.get(root.val);
        int numsL=inR-inS;
        root.left=buildTree(preorder,preS+1,preS+numsL,inorder,inS,inR-1,Inm);
        root.right=buildTree(preorder,preS+numsL+1,preE,inorder,inR+1,inE,Inm);
        return root;
    }
}