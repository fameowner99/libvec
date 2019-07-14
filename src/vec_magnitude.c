/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_magnitude.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:21:06 by vmiachko          #+#    #+#             */
/*   Updated: 2019/07/14 17:21:07 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float       vec_magnitude(t_vec v)
{
    float   magnitude;

    magnitude = sqrt(vec_dot_product(v, v));
    return (magnitude);
}