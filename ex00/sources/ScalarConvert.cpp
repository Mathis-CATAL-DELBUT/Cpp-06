/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:01:37 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 23:18:13 by mcatal-d         ###   ########.fr       */
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

void ScalarConverter::convert(const std::string& str)
{
    if (is_char(str))
    {
        std::cout << "char: '" << str[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
    }
    else if (is_int(str))
    {
        int nbr = std::stoi(str);
        std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
        std::cout << "int: " << nbr << std::endl;
        std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
    }
    else if (is_float(str))
    {
        float nbr = std::stof(str);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(nbr) << std::endl;
        std::cout << "float: " << nbr << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(nbr) << std::endl;
    }
    else if (is_double(str))
    {
        double nbr = std::stod(str);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(nbr) << std::endl;
        std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
        std::cout << "double: " << nbr << std::endl;
    }
    else
        std::cout << "char: impossible" << 
        std::endl << "int: impossible" << 
        std::endl << "float: impossible" << 
        std::endl << "double: impossible" << 
        std::endl;
}
