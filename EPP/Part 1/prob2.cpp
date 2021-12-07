//
// EDIT THIS FILE ONLY FOR YOUR OWN TESTING
// WRITE YOUR CODE IN IntegerLinkedList.cpp
//

#include <iostream>
#include <string>
#include "IntegerLinkedList.h"

using std::string;
using std::cout;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);

int main() {
	cout << "Check if two consecutive elements are equal\n";
	{
		IntegerLinkedList mylist;
		mylist.addFront(57);
		mylist.addFront(23);
		mylist.addFront(23);
		mylist.addFront(20);
		mylist.addFront(13);
		cout << "List: 13 -> 20 -> 23 -> 23 -> 57\n";
		checkAnswer("", mylist.checkList(), true);
  }
  {
		IntegerLinkedList mylist;
		mylist.addFront(5);
		mylist.addFront(10);
		mylist.addFront(23);
		mylist.addFront(17);
		mylist.addFront(23);
		cout << "List: 23 -> 17 -> 23 -> 10 -> 5\n";
		checkAnswer("", mylist.checkList(), false);
  }
  {
		IntegerLinkedList mylist;
		mylist.addFront(17);
		mylist.addFront(17);
		mylist.addFront(25);
		mylist.addFront(10);
		mylist.addFront(5);
		cout << "List: 5 -> 10 -> 25 -> 17 -> 17\n";
		checkAnswer("", mylist.checkList(), true);
  }
	{
		IntegerLinkedList mylist;
		mylist.addFront(17);
		cout << "List: 17\n";
		checkAnswer("", mylist.checkList(), false);
  }
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}
