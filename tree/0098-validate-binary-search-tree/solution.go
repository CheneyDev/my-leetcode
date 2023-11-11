package _098_validate_binary_search_tree

import "math"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isValidBST(root *TreeNode) bool {
	return validate(root, math.MinInt, math.MaxInt)
}

func validate(node *TreeNode, lower, upper int) bool {
	if node == nil {
		return true
	}
	if (lower < node.Val) && (node.Val < upper) {
		return validate(node.Left, lower, node.Val) && validate(node.Right, node.Val, upper)
	} else {
		return false
	}
}
