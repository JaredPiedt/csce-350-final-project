#include "Main.h"

static const string TAG = "Main: ";

int main(int argc, char *argv[]) {
	// Code goes here.
	ParseData parseData;
	
	cout << "Hello, from Main!" << endl;
	
	string hello = parseData.sayHello();
	
	cout << hello << endl;
	
	return 0;
}
