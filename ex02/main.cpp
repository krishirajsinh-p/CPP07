/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:58:43 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 01:12:27 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main(void) {

	cout << "---------------------------------------------------------------------" << endl;
	{
		Array<int> array;
		cout << "array size: " << array.size() << ", elements: " << array << endl;
	}
	cout << "---------------------------------------------------------------------" << endl;
	{
		Array<int> array(SIZE);

		for (size_t i = 0; i < SIZE; i++)
			array[i] = SIZE - (std::rand() % 10);
		cout << "array size: " << array.size() << ", elements: " << array << endl;

		for (size_t i = 0; i < SIZE / 2; i++)
			array[i] = i + 1;
		cout << "array size: " << array.size() << ", elements: " << array << endl;
	}
	cout << "---------------------------------------------------------------------" << endl;
	{
		Array<string> array(SIZE);
		string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string temp = "";

		for (size_t i = 0; i < SIZE; i++)
			array[i] = temp + str[std::rand() % 26] + str[std::rand() % 26] + str[std::rand() % 26];
		cout << "array size: " << array.size() << ", elements: " << array << endl;
	}
	cout << "---------------------------------------------------------------------" << endl;
	{
		Array<int> array(SIZE);
		try
		{
			cout << array[SIZE] << endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << endl;
		}
	}
	cout << "---------------------------------------------------------------------" << endl;

	return (0);
}
