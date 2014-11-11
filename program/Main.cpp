/******************************************************************
 * Trevor Hutto & Jared Piedt
 * Dr. Yan Tong
 * CSCE 350 - Facial Recognition Project
 * 09 November 2014
 *
 * Copyright 2014. All rights reserved.
 *
 * Main class for the project, iterates through the files and starts
 * the comparison sequence.
**/

#include "Main.h"

static const string TAG = "Main: ";
static const int NUMBER_OF_FILES = 47;

int main(int argc, char *argv[]) {
	// Time start
	cout << Utils::timecall("START");
	
	for(int i = 1; i <= NUMBER_OF_FILES; ++i) {
	
		// so that we can have leading zeros.
		stringstream ss;
		ss << setw(3) << setfill('0') << i;
		string number = ss.str();
		
  	    string templateFile = "../" + number + "_template.dat";
		string AU01queryFile = "../" + number + "_AU01_query.dat";
		string AU12queryFile = "../" + number + "_AU12_query.dat";
		string AU17queryFile = "../" + number + "_AU17_query.dat";
		
		Compare compare;
		
		compare.setTemplate(templateFile);
		
		compare.setQuery(AU01queryFile);
		compare.compare();
		compare.setQuery(AU12queryFile);
		compare.compare();
		compare.setQuery(AU17queryFile);
		compare.compare();
	}
	
	// Time Finish
	cout << Utils::timecall("FINISH");
	
	return 0;
}
