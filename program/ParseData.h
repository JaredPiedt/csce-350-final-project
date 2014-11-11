#ifndef PARSE_DATA_H
#define PARSE_DATA_H

#include "../Utilities/Utils.h"
#include "../Utilities/Scanner.h"
#include "../Utilities/ScanLine.h"


class ParseData {
	public:
		ParseData();
		virtual ~ParseData();
		
		// General functions here.
		vector<double> readData(Scanner& inFile);
		vector<vector<double> > readTemplate(Scanner& inFile);
		
	private:
		// Private variables and functions.
};

#endif // PARSE_DATA_H