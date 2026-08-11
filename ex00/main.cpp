/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:17 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/11 10:18:19 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    double e = 3.5;
    double f = 3.5;
    const double &g = ::min(e, f);
    std::cout << "Adress of f: "<< &f << std::endl;
    std::cout << "min( e, f ) = " << g << ", " << &g << std::endl;
    const double &h = ::min(e, f);
    std::cout << "max( e, f ) = " << h << ", " << &h << std::endl;
    char i = 'a';
    char j = 'b';
    std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
    std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;
    std::cout << "min<int>( i, j ) = " << ::min<int>( i, j ) << std::endl;
    std::cout << "max<int>( i, j ) = " << ::max<int>( i, j ) << std::endl;
    return 0;
}