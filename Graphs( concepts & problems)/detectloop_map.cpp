#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public: 
    int val;
    ListNode* next;
    
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};

bool hasCycle(ListNode* head){
    if(head==NULL) return false;
    map<ListNode*, int> mp;
    for(auto &it : mp) it.second=0;
    ListNode* temp = head;
    while(temp){
        mp[temp]++;
        if(mp[temp]>1) return true;
        temp=temp->next;
    }
    return false;
}

int main() {
	// your code goes here
// 	brute force approach
    ListNode* head= new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;
    
    cout<< (hasCycle(head) ? "yes " : "NO"); // here outer bracket it necessary else will print 1
}
