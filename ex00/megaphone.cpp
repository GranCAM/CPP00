/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:17:55 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/31 14:28:20 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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