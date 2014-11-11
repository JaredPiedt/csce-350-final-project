/******************************************************************
 * Trevor Hutto & Jared Piedt
 * Dr. Yan Tong
 * CSCE 350 - Facial Recognition Project
 * 09 November 2014
 *
 * Copyright 2014. All rights reserved.
 *
 * Compare class, first you must set the template and query files
 * only then will you be able to compare the two.
**/

#include "Compare.h"

static const string TAG = "Compare: ";

Compare::Compare() {
	// Constructor
}

Compare::~Compare() {
	// Destructor
}

void Compare::setQuery(string queryFile) {
	Scanner queryScanner;
	ParseData queryParser;
	
	queryScanner.openFile(queryFile);
	this->queryData = queryParser.readData(queryScanner);
	
	queryScanner.close();
}

void Compare::setTemplate(string templateFile) {
	Scanner scanner;
	ParseData parseData;
	
	scanner.openFile(templateFile);
	this->templateData = parseData.readData(scanner);
	
	scanner.close();
}

void Compare::compare() {
	if(this->queryData.size() == 0 || this->templateData.size() == 0) {
		cout << "You must set the template and query file name"
		<< " before you can compare the two."
		<< endl;
	}
	
	// Do comparison...
}