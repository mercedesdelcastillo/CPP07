/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:17 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/21 12:31:02 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void print( T const &x )
{
    std::cout << x << std::endl;
    return;
}

template <typename T>
void doubleval(T& val)
{
    val +=val;
    std::cout << val << std::endl;
}

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    const int tab2[] = { 00, 10, 20, 30, 40 };

    const int len = 5;

    std::cout << "Print function (const)" << std::endl;
    iter( tab, len, print<const int> );
    std::cout << "Print function ()" << std::endl;
    iter( tab, len, print<int> );
    std::cout << "Double Val function (non const)" << std::endl;
    iter( tab, len, doubleval<int> );
    std::cout << "Print function (const)" << std::endl;
    iter( tab2, len, print<const int> );
    std::cout << "Print function ()" << std::endl;
    iter( tab2, len, print<int> );
   

  return 0;
}