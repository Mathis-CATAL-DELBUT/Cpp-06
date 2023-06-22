/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:36:57 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 14:40:21 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){}

Serializer::Serializer(Serializer const & src)
{
    *this = src;
}

Serializer::~Serializer(void){}

Serializer &    Serializer::operator=(Serializer const & rhs)
{
    (void)rhs;
    return (*this);
}

uintptr_t       Serializer::serialize(Data* ptr)
{
    uintptr_t   raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data*           Serializer::deserialize(uintptr_t raw)
{
    Data*   ptr;

    ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}