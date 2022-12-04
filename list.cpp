#include "list.h"
#include "website.h"
using namespace std;

// constructors
List::List() {
	this->size = 0;
	this->head = nullptr;
}
List::List(const List & src) {

}
// destructor
List::~List() {
	Node * current = head;
	Node * dummy = nullptr;
	while (current) {
		dummy = current;
		current = current->next;
		delete dummy;
	}
}
// recursive destructor
void List::recursiveDestroy(Node *& current) {
	if (current) {
		recursiveDestroy(current->next);
		delete current;
	}
}
// overloaded operators
List & List::operator = (const List & src) {

}
ostream & operator << (ostream & out, const List & src) {
	src.display();
	return out;
}
// compare sizes of linked lists
bool operator < (const List & a, const List & b) {
	return a.size < b.size;
}
bool operator > (const List & a, const List & b) {
	return a.size > b.size;
}
// display entire list
void List::display() const {
	Node * current = this->head;
	while (current) {
		cout << *(current->data);
		current = current->next;
	}
}
// display recursively
void List::display(Node * current) const {
	if (current) {
		cout << *(current->data);
		display(current->next);
	}
}
// add website to list in order of rating
bool List::addSite(Website * w) {
	Node * n = new Node(w);
	Node * current = this->head;
	// if list is empty or inserting at head
	if (!current || current->data->getRating() >= n->data->getRating()) {
		n->next = this->head;
		this->head = n;
		return true;
	}
	// else add by rating 
	else {
		// navigate to right spot using look-ahead
		while (current->next && *(current->next->data) < *(n->data)) {
					current = current->next;
		}
		// current should not reach nullptr
		// insert node after current and before current next
		n->next = current->next;
		current->next = n;
	}
	this->size++;
}
// add website to list recursively in order of rating
bool List::addWebsite(Website * w, Node * head) {
	// sdj
	if (this->head) {
		
	}
}
// edit rating for a given website
bool List::editRating(char * websiteName, int rating) {

}
// edit rating for a given website recursively
bool List::editRating(char * websiteName, int rating, Node * head) {

}
// edit review
bool List::editReview(char * websiteName, char * review) {

}
// edit review recursively
bool List::editReview(char * websiteName, char * review, Node * head) {

}
// remove websites under a given review threshold
bool List::removeSitesUnder(int rating) {

}
// remove websites under a given review threshold recursively
bool List::removeSitesUnder(int rating, Node * hear) {

}
// get length of list
int List::getSize() const {

}
// whether list contains anything or not
bool List::isEmpty() {
	if (this->head) {
		return false;
	}
	else {
		return true;
	}
}
