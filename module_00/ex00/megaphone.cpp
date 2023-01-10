
#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; argv[j]; j++)
		{
			std::string str(argv[j]);
			int count = str.length();
			for (int i = 0; i < count; i++)
			{
				// if (std::isalpha(argv[j][i]))
					std::cout << (char)toupper(str[i]);
				// else
				// 	std::cout << argv[j][i];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return(0);
}