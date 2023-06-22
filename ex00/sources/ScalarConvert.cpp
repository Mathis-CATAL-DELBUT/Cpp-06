/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 13:52:07 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{*this = copy;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}

void Precision(const std::string& str)
{
    int i = 0;
    
    while (str[i] && str[i] != 'f')
    {
        std::cout << str[i];
        i++;
    }
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
        if (nbr >= 32 && nbr <= 126)
            std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
        else if ((nbr >= 0 && nbr < 32) || nbr == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << nbr << std::endl;
        std::cout << "float: " << std::setprecision(9) << static_cast<float>(nbr) << ".0f" << std::endl;
        std::cout << "double: " << std::setprecision(9) << static_cast<double>(nbr) << ".0" << std::endl;
    }
    else if (is_float(str))
    {
        float nbr = std::stof(str);
        if (nbr >= 32 && nbr <= 126)
            std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
        else if ((nbr >= 0 && nbr < 32) || nbr == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (nbr >= static_cast<float>(-2147483648) && nbr <= static_cast<float>(2147483647))
            std::cout << "int: " << static_cast<int>(nbr) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(nbr) << std::endl;
    }
    else if (is_double(str))
    {
        double nbr = std::stod(str);
        if (nbr >= 32 && nbr <= 126)
            std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
        else if ((nbr >= 0 && nbr < 32) || nbr == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        if (nbr >= static_cast<double>(-2147483648) && nbr <= static_cast<double>(2147483647))
            std::cout << "int: " << static_cast<int>(nbr) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(nbr) << (static_cast<float>(nbr) == static_cast<int>(nbr) ? ".0f" : "f") << std::endl;
        std::cout << "double: " << static_cast<double>(nbr) << (static_cast<float>(nbr) == static_cast<int>(nbr) ? ".0" : "") << std::endl;
    }
    else
        std::cout << "char: impossible" << 
        std::endl << "int: impossible" << 
        std::endl << "float: impossible" << 
        std::endl << "double: impossible" << 
        std::endl;
}
