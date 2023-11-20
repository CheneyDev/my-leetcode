package _235_lowest_common_ancestor_of_a_binary_search_tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func lowestCommonAncestor(root, p, q *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}
	for root != nil {
		if p.Val > root.Val && q.Val > root.Val {
			root = root.Right
		} else if p.Val < root.Val && q.Val < root.Val {
			root = root.Left
		} else {
			return root
		}
	}
	return nil
}
