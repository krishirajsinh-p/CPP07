/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:00 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/27 17:53:57 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	// Test with an array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	cout << "Printing intArray elements: ";
	iter(intArray, intArraySize, printElement<int>);
	cout << endl;

	// Test with an array of doubles
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

	cout << "Printing doubleArray elements: ";
	iter(doubleArray, doubleArraySize, printElement<double>);
	cout << endl;

	return 0;
}
