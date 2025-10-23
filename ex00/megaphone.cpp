
#include <iostream>

int main(int argc, char **argv)
{
	if (argc >= 3)
	{
		std::cout<< "...\n";
	}
	else if (argc == 2)
	{
		while (argv[1][0])
		{
			std::cout << (char)std::toupper(argv[1][0]);
			argv[1]++;
		}
		std::cout << std::endl;
		return 0;
	}
	else if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

}