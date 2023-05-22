
#include "RPN.hpp"

int main (int argc, char **argv){
	if (argc != 2){
		std::cerr << "Error: Bad input" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string input = argv[1];
	std::stack<int> stack_int;
	std::stack<char> stack_char;
	std::string tmp;
	for (unsigned int i = 0; i < input.size(); i++){
		if (isdigit(input[i])){
			stack_int.push(std::stoi(std::string(1, input[i])));
			std::cout << "INT = " << stack_int.top() << std::endl;
		}
		else{
			if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
				stack_char.push(input[i]);
				std::cout << "CHAR = " << stack_char.top() << std::endl;

			}
			else if (input[i] == ' ')
				continue;
			else{
				std::cerr << "Error: Bad input: '" << input[i] << "'" << std::endl;
			}
		}
	}

//	Fonction check size stack

	if (stack_char.size() < stack_int.size() - 1)
		std::cout << "Error: Not enough operators " << std::endl;
	else if (stack_char.size() > stack_int.size() - 1)
		std::cout << "Error: Too many operators " << std::endl;


//	Fonction operator stack

	int tmp_int;
	int tmp_result = 0;
	while (!stack_int.empty()){
		tmp_int = stack_int.top();
		stack_int.pop();
		if (stack_char.top() == '+'){
			tmp_result = (tmp_result + tmp_int) + stack_int.top();
			stack_int.pop();
			stack_char.pop();
		}
		else if (stack_char.top() == '-'){
			tmp_result = (tmp_result + tmp_int) + stack_int.top();
			stack_int.pop();
			stack_char.pop();
		}
	}


	return (0);
}