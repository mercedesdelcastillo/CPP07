/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:17 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/07 13:00:05 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main( void )
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, sizeof(array) / sizeof(array[0]), f);
    iter(array, sizeof(array) / sizeof(array[0]), f);
    char const array1[] = { 'a', 'b', 'c'};
    iter(array1, sizeof(array1) / sizeof(array1[0]), f);
    std::string array2[] = { "42", "adios", "hola"};
    iter(array2, sizeof(array2) / sizeof(array2[0]), f);
    return 0;
}