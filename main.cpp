#include "main.h"
#include <fstream>
using namespace std;

int main() {
	Table * t = new Table(8);

	loadData(t);

	cout << *t << endl;
}

bool loadData(Table * t) {

	ifstream inFile;
	char * name = nullptr;
	char * url = nullptr;
	char * topic = nullptr;
	char * desc = nullptr;
	char * review = nullptr;
	int rating;

	inFile.open("websites.txt");
	if (!inFile) {
		cout << "File did not open." << endl;
	}
	else {
		while (inFile.peek() != EOF) {

			name = getWordFromFile(inFile, ',');
			url = getWordFromFile(inFile, ',');
			topic = getWordFromFile(inFile, ',');
			desc = getWordFromFile(inFile, ',');
			review = getWordFromFile(inFile, ',');
			rating = getIntFromFile(inFile, '\n');

			Website * w = new Website(name, url, topic, desc, review, rating);
			t->addSite(w);

			delete [] name;
			delete [] url;
			delete [] topic;
			delete [] desc;
			delete [] review;
		}
		inFile.close();
	}
}

char menu() {

}

void executeOption(char option) {

}
