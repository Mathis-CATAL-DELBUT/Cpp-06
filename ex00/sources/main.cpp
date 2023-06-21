/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:09:09 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 15:11:29 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong input" << std::endl;
        return 1;
    }
    convert(argv[1]);
}