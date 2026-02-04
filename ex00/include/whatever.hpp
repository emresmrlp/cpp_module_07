/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:10:51 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/04 17:43:32 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
const T		&min(T &x, T &y)
{
	if (x > y)
		return (y);
	else
		return (x);
}

template <typename T>
const T		&max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif