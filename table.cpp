#include "table.h"
using namespace std;

// constructors
Table::Table() {
	this->data = new List[1];
	this->size = 1;
}
Table::Table(int size) {
	this->data = new List[size];
	this->size = size;
}
// destructor
Table::~Table() {

}
// overloaded operators
ostream & operator << (ostream & out, const Table & src) {
	src.displayAll();
	return out;
}
Table & Table::operator = (const Table & src) {

}
// add a website to table
bool Table::addSite(Website * w) {
	this->data[0].addSite(w);
}
// display a linked list based on topic, store in matches  & numFound
bool Table::retrieve(char * topic, Website * matches, int & numFound) const {

}
// edit the review for a given topic and website name
bool Table::editReview(char * topic, char * name, char * newReview) {

}
// edit the rating for a given topic and website name
bool Table::editRating(char * topic, char * name, int newReview) {

}
// remove all websites under a given rating
bool Table::removeSitesUnder(int rating) {

}
// display songs that match a given name
void Table::displayByName(char * name) {

}
// display all songs
void Table::displayAll() const {
	cout << "this size: " << this->size << endl;
	for (int i = 0; i < this->size; i++) {
		if (this->data[i].isEmpty()) {
			cout << endl;
			cout << "LIST " << i + 1 << " IS EMPTY" << endl;
			cout << endl;
		}
		else {
			cout << "LIST " << i + 1 << ":" << endl;
			cout << endl;
			cout << this->data[i];
			cout << endl;
		}
	}
}
// display performance by showing the length of each chain
void Table::analyzePerformance() {

}
