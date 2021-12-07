// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"
#include <stdlib.h>

bool IntegerLinkedList::checkList() {
	// COMPLETE THIS FOR PROBLEM 2
  SNode *tmp = head;
  while(tmp != nullptr) {
    if(tmp -> next == nullptr) {
      break;/*checks if tmp points top the last memeber of the list, breaks out of the loop if true*/
    } else if(tmp -> elem == tmp -> next -> elem) {
        return true; /*checks if consecutive elements in the list are equal*/
    } else {
        tmp = tmp -> next;
      }
    }
    return false;
  }

bool IntegerLinkedList::checkRecurse (SNode *ptr) {
  // COMPLETE THIS FOR PROBLEM 3
  if(ptr == nullptr) {
    return true;
  } else if (ptr->next == nullptr) {
    return false;
  } else if(ptr->elem == ptr->next->elem) {
    return true;
  }
  return checkRecurse(ptr->next);
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
bool IntegerLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
