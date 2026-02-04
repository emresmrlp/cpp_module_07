/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:47:38 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/04 18:08:16 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void printInt(int &value)
{
	std::cout << "Int Value: " << value << std::endl;
}

void printString(std::string &value)
{
	std::cout << "String Value: " << value << std::endl;
}

int main(void)
{
	int intArray[3];
	std::string strArray[3];

	intArray[0] = 2;
	intArray[1] = 5;
	intArray[2] = 10;
	strArray[0] = "42 Turkiye";
	strArray[1] = "beyond the";
	strArray[2] = "code ;)";
	::iter(intArray, 3, printInt);
	::iter(strArray, 3, printString);
}