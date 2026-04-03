Lecture41/99. Check If Circular Linked List.cpp
Lecture41/99. Check If Circular Linked List.cpp
/*
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {}
};
*/
bool isCircular(ListNode *head) {

	if(!head){
		return 0;
	}
    
	ListNode* Temp = head->next;

	while(Temp&&Temp!=head){
		Temp = Temp->next;
	}


	if(!Temp){
		return 1;
	}

	return 1;
}