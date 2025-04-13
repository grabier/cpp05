/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:32:06 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 20:32:08 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat a;

	
	a.decrementGrade();
	std::cout << a;
	a.incremetGrade();
	std::cout << a;
}