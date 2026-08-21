/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:27:16 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/21 12:23:14 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
# include <iostream>
# include <stdint.h>


template <typename T, typename F> void iter(T *adr, size_t size, F function)
{
    for(size_t i = 0; i < size; i++)
        function(adr[i]);
}

#endif