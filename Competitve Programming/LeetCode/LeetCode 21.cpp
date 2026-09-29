/*This above header files and struct definition is just written for the sake of declaration*/

#include<bits/stdc++.h>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode* next;
}ListNode;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode n;
        ListNode* ptr=&n;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                ptr->next=list1;
                list1=list1->next;
            }
            else{
                ptr->next=list2;
                list2=list2->next;
            }
            ptr=ptr->next;
        }
        if(list1!=nullptr) ptr->next=list1;
        else ptr->next=list2;
        return n.next;
    }
};