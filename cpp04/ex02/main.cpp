/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:29:56 by joupark           #+#    #+#             */
/*   Updated: 2022/04/06 15:35:09 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	Animal	*array[4];

	std::cout << "crate dogs==========" << std::endl;
	for (int i = 0; i <2; i++)
		array[i] = new Dog();
	std::cout << "\ncrate cats==========" << std::endl;
	for (int i = 2; i < 4; i++)
		array[i] = new Cat();
	std::cout << "\ncleaning all==========" << std::endl;
	for (int i = 0; i < 4; i++)
		delete array[i];

	std::cout << "\ncopy test==========" << std::endl;
	Dog one;
	Dog two = one;
	std::cout << "\nclean==========" << std::endl;

	//std::cout << "\nAnimal instantiable check==========" << std::endl;
	//Animal	ins;
	return 0; 
}
