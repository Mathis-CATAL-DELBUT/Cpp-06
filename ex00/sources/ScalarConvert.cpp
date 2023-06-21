/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:01:37 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 15:02:49 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}

