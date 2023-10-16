This is my LeetCode Solutions repository.

## CheatSheet

### 链表

| 题型                    | 解法                                                         | 题目链接                                                     |
| ----------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 反转链表                |                                                              |                                                              |
| 链表内指定区间反转      |                                                              |                                                              |
| 链表节点每 k 个一组反转 |                                                              |                                                              |
| 合并两个已排序链表      |                                                              |                                                              |
| 合并 k 个已排序链表     |                                                              |                                                              |
| 判断链表是否有环        | 快慢指针，fast 移两步，slow 移一步，相遇则有环               | [牛客-BM6](https://www.nowcoder.com/share/jump/451570361697200277698) |
| 链表找环的入口节点      | 线判断是否有环，相遇点为新 slow，fast 回到头节点，再次相遇即为入口节点。 | [牛客-BM7](https://www.nowcoder.com/share/jump/451570361697200277698) |
| 获取链表最后k个节点     | 快慢指针，fast 先移动 k 位，然后 fast 和 slow 每次移一位，fast == null 时返回 slow | [牛客-BM8](https://www.nowcoder.com/share/jump/451570361697201653561) |
| 删除链表倒数第k个节点   | 和上面一样，只多一个虚拟头节点以及 pre 节点记录 slow 的上一个节点 | [牛客-BM9](https://www.nowcoder.com/share/jump/451570361697202449761) |

### 二叉树

| 题型           | 解法                                                         | 题目链接                                                     |
| -------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 二叉树前序遍历 | def preorder(root):<br/>  if root is None:<br/>    return<br/>  print(root.data)<br/>  preorder(root.left)<br/>  preorder(root.right) | [牛客-BM23](https://www.nowcoder.com/share/jump/451570361697444386866) |
| 二叉树中序遍历 | def inorder(root):<br/>  if root is None:<br/>    return<br/>    preorder(root.left)<br/>    print(root.data)<br/>  preorder(root.right) | [牛客-BM24](https://www.nowcoder.com/share/jump/451570361697444842062) |
|                |                                                              |                                                              |



### 动态规划

| 题型            | 解法                                                         | 题目链接                                                     |
| --------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| 斐波那契额数列  | DP: a=0; b=1; for(int i=2;i<=n;i++){ res=a+b; a=b; b=res}<br />Recursion: Fib(n)=Fib(n-1)+Fib(n-2) | [牛客-BM62](https://www.nowcoder.com/share/jump/451570361697356052120) |
| 求台阶 n 种走法 | 同斐波那契                                                   | [牛客-BM63](https://www.nowcoder.com/share/jump/451570361697425209007) |
| 最小花费爬楼梯  | dp[i]=Min( dp[i-1]+cost[i-1], dp[i-2]+cost[i-2] )            | [牛客-BM64](https://www.nowcoder.com/share/jump/451570361697438891247) |

