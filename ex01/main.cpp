/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:17 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/19 13:28:31 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

/*int main( void )
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, sizeof(array) / sizeof(array[0]), f);
    char const array1[] = { 'a', 'b', 'c'};
    iter(array1, sizeof(array1) / sizeof(array1[0]), f);
    std::string array2[] = { "42", "adios", "hola"};
    iter(array2, sizeof(array2) / sizeof(array2[0]), f);
    return 0;
}*/

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

template <typename T>
void f(T& val)
{
    std::cout << val << std::endl;
}

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    const int tab2[] = { 0, 1, 2, 3, 4 };

    const int len = 5;

    iter( tab, len, print<const int> );
    iter( tab, len, print<int> );
    iter( tab2, len, f<const int> );
    iter( tab2, len, print<const int> );

  return 0;
}
