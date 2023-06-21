/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:13:58 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 16:28:24 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConvert"

#include <iostream>
#include <string>
#include <stdexcept>

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

int main(int argc, char **av)
{
    std::string test="4";
    std::cout << is_char(test);
}