
#include "RPN.hpp"

static int ft_stoi( std::string const & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}

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
	if (_input.empty()) {
		throw std::runtime_error("Error : input is empty.");
	}

	int result = 0;
	std::stack<int> stack_int;
	for (unsigned int i = 0; i < _input.size(); i++){
		if (isdigit(_input[i])){
			stack_int.push(ft_stoi(std::string(1, _input[i])));
		}
		else if (_input[i] == '+' || _input[i] == '-' || _input[i] == '/' || _input[i] == '*'){
			int a;
			int b;
			if (stack_int.size() < 2){
				throw std::runtime_error("Error: Minimum 2 integers in the stack.");
			}
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
				if (a == 0 || b == 0) {
					throw std::runtime_error("Error: Division by zero.");
				}
					result = a / b;
					stack_int.push(result);

			}

		}
		else if (_input[i] == ' ' || _input[i] == '\n'){
			continue;
		}
		else{
			throw std::runtime_error("Error : char invalid.");
		}
	}
	if (stack_int.size() > 1){
		throw std::runtime_error("Error: there are still several integers in the stack.");
	}
	std::cout << "result = " << result << std::endl;
}
