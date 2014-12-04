/******************************************************************
 * Trevor Hutto & Jared Piedt
 * Dr. Yan Tong
 * CSCE 350 - Facial Recognition Project
 * 09 November 2014
 *
 * Copyright 2014. All rights reserved.
 *
 * ParseData class, here we are given the reference to a Scanner,
 * we read the file, and input its contents into a vector of doubles.
 *
 * TODO: Separate readData into readQuery and readTemplate. Since
 * a template is multiple instances of a query, it will be beneficial
 * to have a template stored as a <vector<vector<Double>>.
**/

#include "ParseData.h"

static const string TAG = "ParseData: ";

ParseData::ParseData() {
	// Constructor
}
ParseData::~ParseData() {
	// Destructor
}

vector<double> ParseData::readData(Scanner& inFile) {
	vector<double> theData;
	while(inFile.hasMoreData()) {
		theData.push_back(inFile.nextDouble());
	}
	
	return theData;
}

vector<vector<double> > ParseData::readTemplate(Scanner& inFile) {
	vector<vector<double> > theData;
	ScanLine scanLine;
	while(inFile.hasMoreData()) {
		scanLine.openString(inFile.nextLine());
		vector<double> temp;
		while(scanLine.hasMoreData())
		{
			string nextToken = scanLine.next();
			temp.push_back(atof(nextToken.c_str()));
		}
		theData.push_back(temp);
	}
	
	return theData;
}