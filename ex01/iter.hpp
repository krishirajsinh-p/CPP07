/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:42:56 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 00:35:29 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

using std::cout;
using std::endl;

template<typename T> void iter(T* array, size_t length, void (*func)(T&)) {
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

template<typename T> void printElement(T& element) {
	cout << "[" << element << "] ";
}

#endif
