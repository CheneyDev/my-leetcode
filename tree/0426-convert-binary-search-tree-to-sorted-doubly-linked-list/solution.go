package _426_convert_binary_search_tree_to_sorted_doubly_linked_list

type Node struct {
	Val   int
	Left  *Node
	Right *Node
}

var prev, head *Node

func solution(root *Node) *Node {
	if root == nil {
		return nil
	}
	prev = nil
	head = nil
	convert(root)
	head.Left = prev
	prev.Right = head
	return head
}

func convert(root *Node) {
	if root == nil {
		return
	}
	convert(root.Left)
	if prev == nil {
		head = root
	} else {
		prev.Right = root
		root.Left = prev
	}
	prev = root
	convert(root.Right)
}
