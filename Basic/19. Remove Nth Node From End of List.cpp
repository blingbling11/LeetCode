/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode * removeNthFromEnd(ListNode* head, int n) {
		if (!head || !head->next)
			return NULL;

		ListNode *p = head;
		ListNode* q = head;

		for (int i = 0; i<n; i++) {
			q = q->next;
		}
		if (q == NULL)
			return head->next;

		while (true) {
			if (q->next == NULL || q == NULL) {
				ListNode* tmp = p->next;
				p->next = tmp->next;
				return head;
			}
			p = p->next;
			q = q->next;
		}
	}
};