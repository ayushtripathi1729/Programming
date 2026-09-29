/*This above header files and struct definition is just written for the sake of declaration*/
#include<bits/stdc++.h>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode* next;
} ListNode;

class Solution {
public:
    ListNode* mergelist(ListNode* list1, ListNode* list2){
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
    ListNode* mergesort(int start,int end, vector<ListNode*>& lists){
        if(start==end) return lists[start];
        else{
            int mid=(start+end)/2;
            ListNode* l=mergesort(start,mid,lists);
            ListNode* r=mergesort(mid+1,end,lists);
            return mergelist(l,r);
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        int start=0,end=lists.size()-1;
    
        return mergesort(start,end,lists);
    }
};