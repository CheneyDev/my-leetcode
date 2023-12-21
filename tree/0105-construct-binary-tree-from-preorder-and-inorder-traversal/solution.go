package _105_construct_binary_tree_from_preorder_and_inorder_traversal

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func buildTree(preorder []int, inorder []int) *TreeNode {
	n := len(inorder)

	if n == 0 {
		return nil
	}

	pv := preorder[0]
	pi := 0
	for pi < n && inorder[pi] != pv {
		pi++
	}
	ans := new(TreeNode)
	ans.Val = pv
	ans.Left = buildTree(preorder[1:], inorder[:pi])
	ans.Right = buildTree(preorder[1+pi:], inorder[pi+1:])

	return ans

}
