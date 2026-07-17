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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //若n = 2，則刪除倒數第二個數
        //避免無法刪除第一個節點，所以設定一個假頭在前面，若假頭為0 變成 0 1 2 3 4 5 
        ListNode dummy(0, head);
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        for (int i = 1; i <= n; i++){
            fast = fast->next;
        }

        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* ToDelete = slow->next;
        slow->next = slow->next->next;
        delete ToDelete;

        return dummy.next;
    }
};