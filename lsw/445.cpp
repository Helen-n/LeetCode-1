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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        stack<int> vecL1;
        stack<int> vecL2;

        while(l1)
        {
            vecL1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            vecL2.push(l2->val);
            l2=l2->next;
        }
        ListNode *head = nullptr;
        int carry = 0;
        while(!vecL1.empty()||!vecL2.empty())
        {
            int sum = carry;
            if(!vecL1.empty())
            {
               sum += vecL1.top();
               vecL1.pop();
            }
            
            if(!vecL2.empty())
            {
               sum += vecL2.top();
               vecL2.pop();
            }
            carry = sum/10;
            sum  %= 10;
            ListNode* node = new ListNode(sum);
            node->next = head;
            head = node;
        }
        if(carry)
        {
             ListNode* node = new ListNode(1);
             node->next = head;
             head = node;
        }
        return head;
    }
};
