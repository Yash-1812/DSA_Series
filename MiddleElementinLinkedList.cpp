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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if(count % 2 != 0){
            int sub_count = 0;
            int ele = (count/2) + 1;
            ListNode* t = head;
            while(t != NULL){
                sub_count++;
                if(sub_count == ele){
                    return t;
                }
                t = t->next;
            }
        }
        else{
            int sub_count = 0;
            int ele = count/2;
            ListNode* t = head;
            while(t != NULL){
                sub_count++;
                if(sub_count == ele){
                    return t->next;
                }
                t = t->next;
            }
        }
        return NULL;
    }
};
