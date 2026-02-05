/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:47:34 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/05 09:39:07 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *address, const int arrayLength, void (*f)(T&))
{
	if (arrayLength == 0 || address == NULL)
		return ;
	for (int i = 0; i < arrayLength; i++)
	{
		f(address[i]);
	}
}

template <typename T>
void iter(const T *address, const int arrayLength, void (*f)(const T&))
{
	if (arrayLength == 0 || address == NULL)
		return ;
	for (int i = 0; i < arrayLength; i++)
	{
		f(address[i]);
	}
}

#endif