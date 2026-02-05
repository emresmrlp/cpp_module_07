/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:47:38 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/05 09:39:03 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void printInt(const int &value)
{
	std::cout << "Const Int Value: " << value << std::endl;
}

void printString(std::string &value)
{
	std::cout << "String Value: " << value << std::endl;
}

int main(void)
{
	const int intArray[3] = {2, 5, 10};
	std::string strArray[3];
	strArray[0] = "42 Turkiye";
	strArray[1] = "beyond the";
	strArray[2] = "code ;)";
	::iter(intArray, 3, printInt);
	::iter(strArray, 3, printString);
}