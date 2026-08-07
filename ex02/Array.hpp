/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:36:41 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/07 16:56:26 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array 
{
    public:
        Array(void) ;
        Array(unsigned int n) ;
        Array(const Array &other) ;
        ~Array();
        Array &operator=(const Array &other);
        T* getElement(void) const;
        size_t size(void) const;

        T operator[](unsigned int n);
        T elements[];
        unsigned int n;
} ;

#endif


/*
Tip: Try to compile int * a = new int(); then display *a.
• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameters and must not modify the current instance.
*/