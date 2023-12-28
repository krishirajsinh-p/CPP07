/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:00:20 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 01:05:47 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T> class Array
{
	private:
		size_t length;
		T* array;

	public:
		Array() : length(0), array(new T()) {	
		};

		Array(size_t n) : length(n), array(new T[n]) {
		};

		Array(const Array &src) {
			*this = src;
		};

		Array& operator=(const Array &rhs) {
			if (this != &rhs) {
				delete [] array;
				length = rhs.size();
				array = new T[rhs.size()];
				for (size_t i = 0; i < rhs.size(); i++)
					array[i] = rhs[i];
			}
			return *this;
		}

		~Array() {
			delete [] array;
		}

		T& operator[](size_t i) const {
			if (i >= length)
				throw IndexOutOfBoundException();
			return array[i];
		}

		size_t size() const {
			return length;
		}

		class IndexOutOfBoundException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index is out of bounds";
				}
		};
};

template <typename T> std::ostream& operator<<(std::ostream& out, const Array<T>& arr) {
	if (arr.size() > 0) {
		for (size_t i = 0; i < arr.size(); i++)
			out << "[" << arr[i] << "] ";
	} else {
		cout << "[]";
	}
	return out;
}

#endif
