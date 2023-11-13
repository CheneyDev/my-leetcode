package _958_check_comleteness_of_a_binary_tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isCompleteTree(root *TreeNode) bool {
	queue := []*TreeNode{root}
	isPreviousNull := false

	for len(queue) > 0 {
		curNode := queue[0]
		queue = queue[1:]
		if curNode == nil {
			isPreviousNull = true
		} else {
			if isPreviousNull {
				return false
			}
			queue = append(queue, curNode.Left)
			queue = append(queue, curNode.Right)
		}
	}
	return true
}
