package main

import (
	"container/list"
	. "nc_tools"
)

/*
 * type TreeNode struct {
 *   Val int
 *   Left *TreeNode
 *   Right *TreeNode
 * }
 */

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param pRoot TreeNode类
 * @return int整型二维数组
 */
func Print(pRoot *TreeNode) [][]int {
	// write code here
	if pRoot == nil {
		return [][]int{} //默认值？
	}
	var res [][]int
	queue := list.New()
	queue.PushBack(pRoot)
	flag := true

	for queue.Len() > 0 {
		var row []int
		n := queue.Len()
		flag = !flag

		for i := 0; i < n; i++ {
			element := queue.Front()
			node := element.Value.(*TreeNode)
			queue.Remove(element)
			row = append(row, node.Val)

			if node.Left != nil {
				queue.PushBack(node.Left)
			}
			if node.Right != nil {
				queue.PushBack(node.Right)
			}

		}
		if flag {
			reverse(row)
		}
		res = append(res, row)
	}
	return res
}
func reverse(row []int) {
	left, right := 0, len(row)-1
	for left < right {
		row[left], row[right] = row[right], row[left]
		left++
		right--
	}
}
