/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:13 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/11 10:18:02 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> void swap(T &x, T &y)
{
    T temp(x);
    x = y;
    y = temp;
}

template <typename T> T const &min(const T &x, const T &y)
{
    return (x < y) ? x : y;
}

template <typename T> T const &max(const T &x, const T &y)
{
    return (x > y) ? x : y;
}

#endif