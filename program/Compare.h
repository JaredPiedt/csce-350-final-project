#ifndef COMPARE_H
#define COMPARE_H

#include "../Utilities/Utils.h"
#include "../Utilities/Scanner.h"

#include "ParseData.h"

class Compare {
	public:
		Compare();
		virtual ~Compare();
		
		// General functions here.
		void setQuery(string queryFile);
		void setTemplate(string templateFile);
		void compare();
		
	private:
		// Private variables and functions.
		vector<double> templateData;
		vector<double> queryData;
	
};

#endif // COMPARE_H
