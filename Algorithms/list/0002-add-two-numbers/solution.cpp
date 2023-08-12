/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // 创建结果连表的虚拟头节点
        ListNode *dummy = new ListNode(0);
        // 创建当前节点
        ListNode *current = dummy;

        int x, y, sum;
        int carry = 0;
        // 遍历两个链表
        while (l1 || l2)
        {
            x = (l1) ? l1->val : 0;
            y = (l2) ? l2->val : 0;
            sum = x + y + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        if (carry != 0)
        {
            current->next = new ListNode(carry);
        }

        return dummy->next;
    }
};