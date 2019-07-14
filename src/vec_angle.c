/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_angle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:53:39 by vmiachko          #+#    #+#             */
/*   Updated: 2019/07/14 17:53:48 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float       vec_angle(t_vec v1, t_vec v2)
{
    float   angle_cos = vec_dot_product(v1, v2) / vec_magnitude(v1) / vec_magnitude(v2);
    return (acos(angle_cos));
}