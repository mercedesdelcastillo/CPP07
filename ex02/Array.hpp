/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:36:41 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/11 10:06:43 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
# include <exception>

template <typename T> class Array 
{
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();
        
        Array &operator=(const Array &other);
        T &operator[](unsigned int index);
        T const &operator[](unsigned int index) const;
        
        unsigned int size(void) const;
        
        class OutofBoundsExc : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
        
    private:
        T *elements;
        unsigned int n;
} ;
#include "Array.tpp"
#endif
