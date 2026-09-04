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
        ListNode* curr = head;
        int node_count = 0;
        while(curr != nullptr){
            curr = curr->next;
            node_count++;
        }

        int remove_index = node_count - n;
        if(remove_index == 0){
            return head->next;
        }

        curr = head;
        for(int i = 0; i < node_count - 1; i++){
            if((i + 1) == remove_index){
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
        }
        return head;
    }
};
