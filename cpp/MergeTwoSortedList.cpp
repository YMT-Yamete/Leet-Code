class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1)
        {
        	return list2;
        }
        if (!list2)
        {
        	return list1;
        }

        ListNode* head;

        if (list1->val < list2->val)
        {
        	head = list1;
        	list1 = list1->next;
        }
        else
        {
        	head = list2;
        	list2 = list2->next;
        }

        ListNode* tempHead = head;

        while(list1 && list2)
        {
        	if (list1->val < list2->val)
        	{
				tempHead->next = list1;
				list1 = list1->next;        		
        	}
        	else
        	{
        		tempHead->next = list2;
				list2 = list2->next;     
        	}
        	tempHead = tempHead->next;
        }

        if (!list1)
        {
        	tempHead->next = list2;
        }
        else
        {
			tempHead->next = list1;
        }
        return head;
    }
};