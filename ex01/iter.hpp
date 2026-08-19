/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:27:16 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/19 13:26:18 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
# include <iostream>
# include <stdint.h>

/*template <typename T> void f(T &val)
{
    val += val;
    std::cout << val << std::endl;
}

template <typename T> void f(T const &val)
{
    std::cout << val << std::endl;
}*/

template <typename T,typename F>
void iter(T *adr, size_t const size, F function)
{
    for(size_t i = 0; i < size; i++)
        function(adr[i]);
}

#endif
