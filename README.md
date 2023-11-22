This is my LeetCode Solutions repository.

## HOT 100 笔记 📒


### 链表

| 序号 | 题目名                      | 题号                                                         | 解法简述                                                     |
| ---- | --------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 1    | 反转链表                    | [leetcode_206](https://leetcode.com/problems/reverse-linked-list/) | while(cur!=null){<br/>temp=cur.next; cur.next=pre; <br/>pre=cur; cur=temp; } |
| 2    | 链表内指定区间反转          | [leetcode_92](https://leetcode.com/problems/reverse-linked-list-ii/) | ！TO DO：换掉牛客网给的解法逆天解法                          |
| 3    | 链表中的节点每k个一组翻转   | [leetcode_25](https://leetcode.com/problems/reverse-nodes-in-k-group/) | ！TO DO：换掉牛客网给的解法逆天解法                          |
| 4    | 合并两个排序的链表          | [leetcode_21](https://leetcode.com/problems/merge-two-sorted-lists/) |                                                              |
| 5    | 合并k个已排序的链表         | [leetcode_23](https://leetcode.com/problems/merge-k-sorted-lists/) |                                                              |
| 6    | 判断链表中是否有环          | [leetcode_141](https://leetcode.com/problems/linked-list-cycle/) | 快慢指针，fast 移两步，slow 移一步，相遇则有环               |
| 7    | 链表中环的入口结点          | [leetcode_142](https://leetcode.com/problems/linked-list-cycle-ii/) | 线判断是否有环，相遇点为新 slow，fast 回到头节点，再次相遇即为入口节点。 |
| 8    | 链表中倒数最后k个结点       | [LCR_140](https://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/) | 快慢指针，fast 先移动 k 位，然后 fast 和 slow 每次移一位，fast == null 时返回 slow |
| 9    | 删除链表的倒数第n个节点     | [leetcode_19](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | 和上面一样，只多一个虚拟头节点以及 pre 节点记录 slow 的上一个节点 |
| 10   | 两个链表的第一个公共结点    | [leetcode_160](https://leetcode.com/problems/intersection-of-two-linked-lists/) |                                                              |
| 11   | 单链表的排序                | [leetcode_148](https://leetcode.com/problems/sort-list/)     |                                                              |
| 12   | 判断一个链表是否为回文结构  | [leetcode_234](https://leetcode.com/problems/palindrome-linked-list/) |                                                              |
| 13   | 链表的奇偶重排              | [leetcode_328](https://leetcode.com/problems/odd-even-linked-list/) |                                                              |
| 14   | 删除有序链表中重复的元素-I  | [leetcode_83](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) |                                                              |
| 15   | 删除有序链表中重复的元素-II | [leetcode_82](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/) |                                                              |

### 二分查找/排序

| 序号 | 题目名             | 题号                                                         | 解法简述 |
| ---- | ------------------ | ------------------------------------------------------------ | -------- |
| 1    | 二分查找-I         | [leetcode_704](https://leetcode.com/problems/binary-search/) |          |
| 2    | 二维数组中的查找   | [leetcode_74](https://leetcode.com/problems/search-a-2d-matrix/) |          |
| 3    | 寻找峰值           | [leetcode_162](https://leetcode.com/problems/find-peak-element/) |          |
| 4    | 数组中的逆序对     | [leetcode_315](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) |          |
| 5    | 旋转数组的最小数字 | [leetcode_153](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) |          |
| 6    | 比较版本号         | [leetcode_165](https://leetcode.com/problems/compare-version-numbers/) |          |

### 二叉树

| 序号 | 题目名                               | 题号                                                         | 解法简述                                                     |
| ---- | ------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 1    | 二叉树的前序遍历                     | [leetcode_144](https://leetcode.com/problems/binary-tree-preorder-traversal/) | def preorder(root):<br/>  if root is None: return<br/>  print(root.data)   preorder(root.left)   preorder(root.right) |
| 2    | 二叉树的中序遍历                     | [leetcode_94](https://leetcode.com/problems/binary-tree-inorder-traversal/) | def inorder(root):<br/>  if root is None: return<br/>  inorder(root.left)     print(root.data)   inorder(root.right) |
| 3    | 二叉树的后序遍历                     | [leetcode_145](https://leetcode.com/problems/binary-tree-postorder-traversal/) | def postorder(root):<br/>  if root is None: return<br/>  postorder(root.left)   postorder(root.right)   print(root.data) |
| 4    | 求二叉树的层序遍历                   | [leetcode_102](https://leetcode.com/problems/binary-tree-level-order-traversal/) | for (int i = 0; i < queue.size(); i++) {<br />TreeNode cur = q.poll();  rows.add(cur.val);<br />if (cur.left != null)  q.add(cur.left);<br />if (cur.right != null)  q.add(cur.right);<br />}  result.add(rows); |
| 5    | 按之字形顺序打印二叉树               | [leetcode_103](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | 同层次遍历，偶数行是反转数组即可                             |
| 6    | 二叉树的最大深度                     | [leetcode_104](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | left := maxDepth(root.Left)<br /> right := maxDepth(root.Right)<br /> return 1 + max(left, right) |
| 7    | 二叉树中和为某一值的路径(一)         | [leetcode_112](https://leetcode.com/problems/path-sum/)      | curSum := 0<br /> if root == nil { return false }<br /> return traversal(root, curSum, targetSum) |
| 8    | 二叉搜索树与双向链表                 | [leetcode_426](https://wentao-shao.gitbook.io/leetcode/binary-tree/426.convert-binary-search-tree-to-sorted-doubly-linked-list) | inorder(root.Left)<br />if prev == nil { head = root }<br />else { prev.Right = root   root.Left = prev  }    <br />prev = root <br />inorder(root.Right) |
| 9    | 对称的二叉树                         | [leetcode_101](https://leetcode.com/problems/symmetric-tree/) | if left == nil && right == nil { return true }<br />if left == nil \|\| right == nil { return false }<br />return left.Val == right.Val && isMirror(left.Left, right.Right) && isMirror(left.Right, right.Left) |
| 10   | 合并二叉树                           | [leetcode_617](https://leetcode.com/problems/merge-two-binary-trees/) | root := &TreeNode{Val: root1.Val + root2.Val}<br />root.Left = mergeTrees(root1.Left, root2.Left)<br />root.Right = mergeTrees(root1.Right, root2.Right)<br />return root s |
| 11   | 二叉树的镜像                         | [leetcode_226](https://leetcode.com/problems/invert-binary-tree/) | left := root.Left<br />right := root.Right<br />root.Left = right<br />root.Right = left<br />invert(root.Left)<br />invert(root.Right) |
| 12   | 判断是不是二叉搜索树                 | [leetcode_98](https://leetcode.com/problems/validate-binary-search-tree/) | return validate(node.Left, lower, node.Val) && validate(node.Right, node.Val, upper) |
| 13   | 判断是不是完全二叉树                 | [leetcode_958](https://leetcode.com/problems/check-completeness-of-a-binary-tree/) | BEGIN LOOP (queue not empty)<br />curNode := queue[0]  queue = queue[1:] <br />if curNode == nil { isPreviousNull = true }<br />else { if isPreviousNull { return false } <br />APPEND curNode Left and Right<br />END LOOP<br />return true |
| 14   | 判断是不是平衡二叉树                 | [leetcode_110](https://leetcode.com/problems/balanced-binary-tree/) | dif := maxDepth(root.Left) - maxDepth(root.Right)<br />if dif <= 1 && dif >= -1 {<br />return isBalanced(root.Left) && isBalanced(root.Right) }<br />else { return false } |
| 15   | 二叉搜索树的最近公共祖先             | [leetcode_235](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | if p.Val > root.Val && q.Val > root.Val { root = root.Right }<br />else if p.Val < root.Val && q.Val < root.Val { root = root.Left }<br />else { return root } |
| 16   | 在二叉树中找到两个节点的最近公共祖先 | [leetcode_236](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | if root==nil \|\| root==p \|\| root==q { return root }<br />left := lowestCommonAncestor(root.Left, p, q )<br />right := lowestCommonAncestor(root.Right, p, q )<br />if (left != nil && right != nil) { return root }<br />if left != nil { return left}<br />return right |
| 17   | 序列化二叉树                         | [leetcode_297](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) |                                                              |
| 18   | 重建二叉树                           | [leetcode_105](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) |                                                              |
| 19   | 输出二叉树的右视图                   | [leetcode_199](https://leetcode.com/problems/binary-tree-right-side-view/) |                                                              |

### 堆/栈/队列

| 序号 | 题目名           | 题号                                                         | 解法简述 |
| ---- | ---------------- | ------------------------------------------------------------ | -------- |
| 1    | 用两个栈实现队列 | [leetcode_232](https://leetcode.com/problems/implement-queue-using-stacks/) |          |
| 2    | 包含min函数的栈  | [leetcode_155](https://leetcode.com/problems/min-stack/)     |          |
| 3    | 有效括号序列     | [leetcode_20](https://leetcode.com/problems/valid-parentheses/) |          |
| 4    | 滑动窗口的最大值 | [leetcode_239](https://leetcode.com/problems/sliding-window-maximum/) |          |
| 5    | 最小的K个数      | [leetcode_面试题40](https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof/) |          |
| 6    | 寻找第K大        | [leetcode_215](https://leetcode.com/problems/kth-largest-element-in-an-array/) |          |
| 7    | 表达式求值       | [leetcode_224](https://leetcode.com/problems/basic-calculator/) |          |

### 哈希

| 序号 | 题目名                       | 题号                                                         | 解法简述 |
| ---- | ---------------------------- | ------------------------------------------------------------ | -------- |
| 1    | 两数之和                     | [leetcode_1](https://leetcode.com/problems/two-sum/)         |          |
| 2    | 数组中出现次数超过一半的数字 | [leetcode_169](https://leetcode.com/problems/majority-element/) |          |
| 3    | 数组中只出现一次的两个数字   | [leetcode_260](https://leetcode.com/problems/single-number-iii/) |          |
| 4    | 缺失的第一个正整数           | [leetcode_41](https://leetcode.com/problems/first-missing-positive/) |          |
| 5    | 三数之和                     | [leetcode_15](https://leetcode.com/problems/3sum/)           |          |


### 递归/回溯

| 序号 | 题目名                 | 题号                                                         | 解法简述 |
| ---- | ---------------------- | ------------------------------------------------------------ | -------- |
| 1    | 没有重复项数字的全排列 | [leetcode_46](https://leetcode.com/problems/permutations/)   |          |
| 2    | 有重复项数字的全排列   | [leetcode_47](https://leetcode.com/problems/permutations-ii/) |          |
| 3    | 岛屿数量               | [leetcode_200](https://leetcode.com/problems/number-of-islands/) |          |
| 4    | 字符串的排列           | [leetcode_567](https://leetcode.com/problems/permutation-in-string/) |          |
| 5    | N皇后问题              | [leetcode_51](https://leetcode.com/problems/n-queens/)       |          |
| 6    | 括号生成               | [leetcode_22](https://leetcode.com/problems/generate-parentheses/) |          |
| 7    | 矩阵最长递增路径       | [leetcode_329](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/) |          |

### 字符串

| 序号 | 题目名       | 题号                                                         | 解法简述 |
| ---- | ------------ | ------------------------------------------------------------ | -------- |
| 1    | 字符串变形   | [leetcode_面试题05](https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/) |          |
| 2    | 最长公共前缀 | [leetcode_14](https://leetcode.com/problems/longest-common-prefix/) |          |
| 3    | 验证IP地址   | [leetcode_468](https://leetcode.com/problems/validate-ip-address/) |          |
| 4    | 大数加法     | [leetcode_415](https://leetcode.com/problems/add-strings/)   |          |

### 双指针

| 序号 | 题目名               | 题号                                                         | 解法简述 |
| ---- | -------------------- | ------------------------------------------------------------ | -------- |
| 1    | 合并两个有序的数组   | [leetcode_88](https://leetcode.com/problems/merge-sorted-array/) |          |
| 2    | 判断是否为回文字符串 | [leetcode_125](https://leetcode.com/problems/valid-palindrome/) |          |
| 3    | 合并区间             | [leetcode_56](https://leetcode.com/problems/merge-intervals/) |          |
| 4    | 最小覆盖子串         | [leetcode_76](https://leetcode.com/problems/minimum-window-substring/) |          |
| 5    | 反转字符串           | [leetcode_344](https://leetcode.com/problems/reverse-string/) |          |
| 6    | 最长无重复子数组     | [leetcode_3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) |          |
| 7    | 盛水最多的容器       | [leetcode_11](https://leetcode.com/problems/container-with-most-water/) |          |
| 8    | 接雨水问题           | [leetcode_42](https://leetcode.com/problems/trapping-rain-water/) |          |

### 贪心算法

| 序号 | 题目名           | 题号                                                         | 解法简述 |
| ---- | ---------------- | ------------------------------------------------------------ | -------- |
| 1    | 分糖果问题       | [leetcode_135](https://leetcode.com/problems/candy/)         |          |
| 2    | 主持人调度（二） | [leetcode_1663](https://leetcode.com/problems/assign-tasks/) |          |

### 动态规划

| 序号 | 题目名                 | 题号                                                         | 解法简述                                                     |
| ---- | ---------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 1    | 斐波那契数列           | [leetcode_509](https://leetcode.com/problems/fibonacci-number/) | DP: a=0; b=1; for(int i=2;i<=n;i++){ res=a+b; a=b; b=res}<br />Recursion: Fib(n)=Fib(n-1)+Fib(n-2) |
| 2    | 跳台阶                 | [leetcode_70](https://leetcode.com/problems/climbing-stairs/) | 同斐波那契                                                   |
| 3    | 最小花费爬楼梯         | [leetcode_746](https://leetcode.com/problems/min-cost-climbing-stairs/) | dp[i]=Min( dp[i-1]+cost[i-1], dp[i-2]+cost[i-2] )            |
| 4    | 最长公共子序列(二)     | [leetcode_77](https://leetcode.com/problems/longest-common-subsequence/) |                                                              |
| 5    | 最长公共子串           | [leetcode_78](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) |                                                              |
| 6    | 不同路径的数目(一)     | [leetcode_79](https://leetcode.com/problems/unique-paths/)   |                                                              |
| 7    | 矩阵的最小路径和       | [leetcode_80](https://leetcode.com/problems/minimum-path-sum/) |                                                              |
| 8    | 把数字翻译成字符串     | [leetcode_81](https://leetcode.com/problems/decode-ways/)    |                                                              |
| 9    | 兑换零钱(一)           | [leetcode_82](https://leetcode.com/problems/coin-change/)    |                                                              |
| 10   | 最长上升子序列(一)     | [leetcode_83](https://leetcode.com/problems/longest-increasing-subsequence/) |                                                              |
| 11   | 连续子数组的最大和     | [leetcode_84](https://leetcode.com/problems/maximum-subarray/) |                                                              |
| 12   | 最长回文子串           | [leetcode_85](https://leetcode.com/problems/longest-palindromic-substring/) |                                                              |
| 13   | 数字字符串转化成IP地址 | [leetcode_86](https://leetcode.com/problems/restore-ip-addresses/) |                                                              |
| 14   | 编辑距离(一)           | [leetcode_87](https://leetcode.com/problems/edit-distance/)  |                                                              |
| 15   | 正则表达式匹配         | [leetcode_10](https://leetcode.com/problems/regular-expression-matching/) |                                                              |
| 16   | 最长的括号子串         | [leetcode_32](https://leetcode.com/problems/longest-valid-parentheses/) |                                                              |
| 17   | 打家劫舍(一)           | [leetcode_198](https://leetcode.com/problems/house-robber/)  |                                                              |
| 18   | 打家劫舍(二)           | [leetcode_213](https://leetcode.com/problems/house-robber-ii/) |                                                              |
| 19   | 买卖股票的最好时机(一) | [leetcode_121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) |                                                              |
| 20   | 买卖股票的最好时机(二) | [leetcode_122](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) |                                                              |
| 21   | 买卖股票的最好时机(三) | [leetcode_123](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) |                                                              |

### 模拟

| 序号 | 题目名          | 题号                                                        | 解法简述 |
| ---- | --------------- | ----------------------------------------------------------- | -------- |
| 1    | 旋转数组        | [leetcode_189](https://leetcode.com/problems/rotate-array/) |          |
| 2    | 螺旋矩阵        | [leetcode_54](https://leetcode.com/problems/spiral-matrix/) |          |
| 3    | 顺时针旋转矩阵  | [leetcode_48](https://leetcode.com/problems/rotate-image/)  |          |
| 4    | 设计LRU缓存结构 | [leetcode_146](https://leetcode.com/problems/lru-cache/)    |          |
| 5    | 设计LFU缓存结构 | [leetcode_460](https://leetcode.com/problems/lfu-cache/)    |          |