/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:47:34 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/04 18:08:10 by ysumeral         ###   ########.fr       */
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

#endif