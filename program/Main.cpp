#include "Main.h"

static const string TAG = "Main: ";

int main(int argc, char *argv[]) {
	// Time start
	cout << Utils::timecall("START");
	
	ParseData parseData;
	
	cout << "Hello, from Main!" << endl;
	
	string hello = parseData.sayHello();
	
	cout << hello << endl;
	
	// Time Finish
	cout << Utils::timecall("FINISH");
	
	return 0;
}
