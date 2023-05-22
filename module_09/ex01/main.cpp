
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
	for (int i = input.size() - 1 ; i > -1; i--){
		std::cout << "input[i] = " << input[i] << std::endl;
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
	std::cout << "int size = " << stack_int.size() << " / char size = " << stack_char.size() << std::endl;
	if (stack_int.size() - 1 < stack_char.size())
		std::cout << "Error: Not enough operators " << std::endl;
	else if (stack_int.size() - 1 > stack_char.size())
		std::cout << "Error: Too many operators " << std::endl;


//	Fonction operator stack

	int tmp_int;
	bool test = false;
	int tmp_result = 0;
	while (stack_int.size() > 1 || !stack_char.empty()){
		tmp_int = stack_int.top();
		stack_int.pop();
		std::cout << "int top = " << stack_int.top() << std::endl;

		if (stack_char.top() == '+'){
			std::cout << "int + = " << stack_int.top() << " / char + = " << stack_char.top() << "result = " << tmp_result << std::endl;

			if (test == false){
				tmp_result = (tmp_result + tmp_int) + stack_int.top();
				test = true;
			}
			else{
				tmp_result = tmp_result + stack_int.top();
			}
			std::cout << "result + = " << tmp_result << std::endl;
		}
		else if (stack_char.top() == '-'){
			if (test == false){
				tmp_result = (tmp_result + tmp_int) - stack_int.top();
				test = true;
			}
			else{
				tmp_result = tmp_result - stack_int.top();
			}
			std::cout << "result - = " << tmp_result << std::endl;
		}
		else if (stack_char.top() == '*'){
			if (test == false){
				tmp_result = (tmp_result + tmp_int) * stack_int.top();
				test = true;
			}
			else{
				tmp_result = tmp_result * stack_int.top();
			}
			std::cout << "result * = " << tmp_result << std::endl;
		}
		else if (stack_char.top() == '/'){
			if (test == false){
				tmp_result = (tmp_result + tmp_int) / stack_int.top();
				test = true;
			}
			else{
				tmp_result = tmp_result / stack_int.top();
			}
			std::cout << "result / = " << tmp_result << std::endl;
		}
		std::cout << "int = " << stack_int.top() << " / char = " << stack_char.top() << std::endl;
//		stack_int.pop();
		stack_char.pop();
	}
	std::cout << "result = " << tmp_result << std::endl;


	return (0);
}