package _110_balanced_binary_tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isBalanced(root *TreeNode) bool {
	if root == nil {
		return true
	}
	dif := maxDepth(root.Left) - maxDepth(root.Right)
	if dif <= 1 && dif >= -1 {
		return isBalanced(root.Left) && isBalanced(root.Right)
	} else {
		return false
	}
}

func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}
	return max(maxDepth(root.Left), maxDepth(root.Right)) + 1
}
