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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ptr=head;
        ListNode* ktail=nullptr;
        ListNode* newhead=nullptr;
        while(ptr!=nullptr){
            int count=0;
            ptr=head;
            while(count<k  && ptr!=nullptr){
                ptr=ptr->next;
                count++;
            }
            if(count==k){
                ListNode* revhead=reverse(head,k);
                if(newhead==nullptr){
                    newhead=revhead;
                }
                if(ktail!=nullptr){
                    ktail->next=revhead;
                }
                ktail=head;
                head=ptr;
            }
        }
        if(ktail!=nullptr){
            ktail->next=head;
        }
        return newhead==nullptr?head:newhead;
        
    }
    ListNode* reverse(ListNode* head, int k){
        ListNode* newhead=nullptr;
        ListNode* ptr=head;
        while(k>0){
            ListNode* nextnode=ptr->next;
            ptr->next=newhead;
            newhead=ptr;
            ptr=nextnode;
            k--;
        }
        return newhead;
    }
};
