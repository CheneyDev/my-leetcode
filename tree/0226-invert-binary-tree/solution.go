package _226_invert_binary_tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func invertTree(root *TreeNode) *TreeNode {
	invert(root)
	return root
}

func invert(root *TreeNode) {
	if root == nil {
		return
	}

	left := root.Left
	right := root.Right

	root.Left = right
	root.Right = left

	invert(root.Left)
	invert(root.Right)
}
