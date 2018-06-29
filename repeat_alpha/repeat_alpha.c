/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simplon <simplon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:03:01 by simplon           #+#    #+#             */
/*   Updated: 2018/06/29 20:12:15 by simplon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}


int main (int ac, char **av)
{
    int i = 0;
    int j = 0;
    char repeat[] = "abbcccddddefgijklmnopqrstuvwxyz";
    char repeatMAJ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (av[1][i])
    {   
        while (av[1][i] != repeat[j])
            j++;

        while (av[1][i] == repeat[j])
        {   
            ft_putchar(repeat[j]);
            j++;
        }
        i++;
        j = 0;

    }
}
