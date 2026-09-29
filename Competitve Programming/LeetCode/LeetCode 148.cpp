/*This above header files and struct definition is just written for the sake of declaration*/
#include<bits/stdc++.h>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode* next;
}ListNode;
class Solution {
public:
    ListNode* MergeList(ListNode* list1, ListNode* list2){
        ListNode n;
        ListNode* p=&n;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                p->next=list1;
                list1=list1->next;
            }
            else{
                p->next=list2;
                list2=list2->next;
            }
            p=p->next;
        }
        if(list1!=nullptr) p->next=list1;
        else p->next=list2;
        return n.next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        else{
            ListNode* mid=head;
            ListNode* end=head;
            ListNode* midend=nullptr;
            while(end!=nullptr && end->next!=nullptr){
                midend=mid;
                mid=mid->next;
                end=end->next->next;
            }
            midend->next=nullptr;
            ListNode* l=sortList(head);
            ListNode* r=sortList(mid);
            return MergeList(l,r);
        }
    }
};