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
    ListNode* kthNode(ListNode* head,int k){
        ListNode* temp=head;
        k--;
        while(k>0&&temp!=NULL){
            temp=temp->next;
            k--;
            
        }
        return temp;
    }
    ListNode* reverse(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* newNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=newNode;
        }
        return prev;
     }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode*prevhead=NULL;
        while(temp!=NULL){
            ListNode* kth=kthNode(temp,k);
            if(kth==NULL){
                if(prevhead)prevhead->next=temp;
                break;
            }
            else{
                ListNode* nextNode=kth->next;
                kth->next=NULL;
                ListNode* newhead=reverse(temp);
                if(head==temp){
                    head=newhead;
                }
                else{
                    prevhead->next=newhead;
                }
                prevhead=temp;
                temp=nextNode;
            }
        }
        return head;
        
    }
};