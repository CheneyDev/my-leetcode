package main

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func hasPathSum(root *TreeNode, targetSum int) bool {
	curSum := 0
	if root == nil {
		return false
	}
	return traversal(root, curSum, targetSum)
}

func traversal(root *TreeNode, curSum int, targetSum int) bool {
	if root.Left == nil && root.Right == nil {
		if targetSum == (curSum + root.Val) {
			return true
		}
		return false
	}
	if root.Left != nil {
		if traversal(root.Left, curSum+root.Val, targetSum) {
			return true
		}
	}
	if root.Right != nil {
		if traversal(root.Right, curSum+root.Val, targetSum) {
			return true
		}
	}
	return false
}
