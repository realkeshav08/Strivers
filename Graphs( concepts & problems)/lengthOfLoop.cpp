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

int lengthOfLoop(ListNode* head){
    ListNode* temp = head;
    map<ListNode* ,  int> mp;
    int timer=0;
    while(temp){
        if(mp.find(temp)!=mp.end()) break;
        mp[temp]=timer++;
        temp=temp->next;
    }
    if(temp==NULL) return 0;
    return timer - mp[temp];
}

int main() {
	// your code goes here
	ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = second; 
    if(lengthOfLoop(head)) cout<<lengthOfLoop(head);
    else cout<<"No loop";
}
