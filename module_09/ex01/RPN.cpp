
#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(std::string argv){
	_input = argv;
}
RPN::~RPN() {}

RPN::RPN(RPN const &cpy) {
	*this = cpy;
}

RPN &RPN::operator=(RPN const &rhs) {
	if (this != &rhs) {
		_input = rhs._input;
	}
	return (*this);
}

void	RPN::polishNotation() {
	int result = 0;
	std::stack<int> stack_int;
	for (unsigned int i = 0; i < _input.size(); i++){
		if (isdigit(_input[i])){
			stack_int.push(std::stoi(std::string(1, _input[i])));
		}
		else if (_input[i] == '+' || _input[i] == '-' || _input[i] == '/' || _input[i] == '*'){
			int a;
			int b;
			b = static_cast<int>(stack_int.top());
			stack_int.pop();
			a = static_cast<int>(stack_int.top());
			stack_int.pop();
			if (_input[i] == '+'){
				result = a + b;
				stack_int.push(result);
			}
			else if (_input[i] == '-'){
				result = a - b;
				stack_int.push(result);
			}
			else if (_input[i] == '*'){
				result = a * b;
				stack_int.push(result);
			}
			else{
				result = a / b;
				stack_int.push(result);
			}

		}
		else if (_input[i] == ' ' || _input[i] == '\n')
			continue;
		else{
			std::cout << "Error" << std::endl;
			exit (EXIT_FAILURE);
		}
	}
	std::cout << "result = " << result << std::endl;
}
