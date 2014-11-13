#ifndef COMPARE_H
#define COMPARE_H

#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

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
		vector<vector<double> > templateData;
		vector<double> queryData;
	
};

#endif // COMPARE_H
