class Solution{
    public List<List<Integer>> levelOrder(TreeNode root){
        List<List<Integer>> result=new ArrayList<>();

        if(root==null){
            return result;
        }

        Queue<TreeNode> queue=new LinkedList<>();
        queue.offer(root);

    }
}