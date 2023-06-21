/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:13:58 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 23:15:36 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConvert"

#include <iostream>
#include <string>
#include <stdexcept>
#include <float.h>
#include <limits.h>

bool is_int(const std::string& str)
{
    int i = 0;
    int nbr;
    
    if (str[0] == '-')
        i++;
    while(str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    try
    {nbr = std::stoi(str);}
    catch (const std::out_of_range& e)
    {return false;}
    if (nbr < -2147483648 || nbr > 2147483647)
        return false;
    return true;
}

bool is_char(const std::string& str)
{
    if (str.size() != 1 || isdigit(str[0]))
        return false;
    return true;
}

bool is_float(const std::string& str)
{
    unsigned long i = 0;
    int point = 0;
    int nbr;
    
    if (str[0] == '-')
        i++;
    if (str[i] == '.' || str[str.size() - 2] == '.')
        return false;
    while(str[i] && i < str.size() - 1)
    {
        if (str[i] == '.')
            point++;
        else if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    if (point != 1 || str[i] != 'f')
        return false;
    try
    {nbr = std::stof(str);}
    catch (const std::out_of_range& e)
    {return false;}
    if (nbr < FLT_MIN || nbr > FLT_MAX)
        return false;
    return true;
}

bool is_double(const std::string& str)
{
    int i = 0;
    int point = 0;
    int nbr;
    
    if (str[0] == '-')
        i++;
    if (str[i] == '.' || str[str.size() - 1] == '.')
        return false;
    while(str[i])
    {
        if (str[i] == '.')
            point++;
        else if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    if (point != 1)
        return false;
    try {nbr = std::stod(str);}
    catch (const std::out_of_range& e) {return false;}
    if (0 > 2.22507e-308|| nbr > DBL_MAX)
        return false;
    return true;
}