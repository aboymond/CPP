
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <exception>
#include <list>
#include <cstdlib>
#include <stack>


class RPN {
private:
protected:
public:
	RPN();

	RPN(const RPN &cpy);

	RPN &operator=(RPN const &rhs);

	~RPN();
};


#endif
