/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:43:50 by ysumeral          #+#    #+#             */
/*   Updated: 2026/02/05 12:50:28 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cmath>

template <typename T>

class Array
{
	private:
		T               *_data;
		unsigned int    _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &ref);
		Array &operator=(const Array &ref);
		T &operator[](unsigned int n);
		const T &operator[](unsigned int n) const;
		~Array();
		class IndexIsOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw(); 
		};
		unsigned int size() const;
};

# include "Array.tpp"
#endif