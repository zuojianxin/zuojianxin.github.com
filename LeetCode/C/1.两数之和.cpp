/**
给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。

你可以假设除了数字 0 之外，这两个数字都不会以零开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode l3(0);   
        ListNode *preNode = &l3;  
        int addNumber = 0;  
        ListNode *b1 = l1, *b2 = l2;  
        while(b1!=NULL || b2!=NULL || addNumber>0)//当l1和l2不为空或者addNumber>0任意一个条件成立  
        {  
            ListNode *node = new ListNode(0);//临时的结构体指针  
            int val1 = b1 ? b1->val : 0;//如果b1不为空，val1=b1->val,否则为空  
            int val2 = b2 ? b2->val : 0;//如果b2不为空，val2=b2->val,否则为空  
            b1 = b1 ? b1->next : NULL;//如果b1不为空，b1指向下一个链表节点,否则为空  
            b2 = b2 ? b2->next: NULL;//如果b1不为空，b1指向下一个链表节点,否则为空  
            node->val = (val1 + val2 + addNumber) % 10;  
            addNumber = (val1 + val2 + addNumber) / 10;  
            preNode->next = node;  
            preNode = node;  
        }  
        return l3.next;  
    }
};
