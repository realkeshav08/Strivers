#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
  class ListNode {
      public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
void PrintList(ListNode *head) // Function to print the LinkedList
{
    ListNode *curr = head;
    for (; curr != nullptr; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
} 
 
    ListNode* oddEvenList(ListNode* head) {
      ListNode * dummyOdd = new ListNode(-1);
        ListNode * dummyEven = new ListNode(-1);
        ListNode* e = dummyEven; 
        ListNode *o = dummyOdd;
        ListNode* temp = head;
        while( temp){
            if(temp->val%2==0){ e->next = temp; //if (temp->val & 1) // If odd Node,append to odd LinkedList
                           temp= temp->next;
                           e=e->next;
                           e->next=NULL;
        }else{
                o->next = temp;
                           temp= temp->next;
                           o=o->next;
                           o->next=NULL;
        }}
            e->next = dummyOdd->next;
            return dummyEven->next;
    }
int main() {
	// your code goes here
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	
	PrintList(head);
	
	head = oddEvenList(head);
	
	PrintList(head);
	
	
}

// 1-->2-->3-->4-->null
// 2-->4-->1-->3-->null
