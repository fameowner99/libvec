/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_mul.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:14:43 by vmiachko          #+#    #+#             */
/*   Updated: 2019/07/14 17:14:46 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec       vec_mul(t_vec v, float value)
{
    t_vec   res;

    res.x = v.x * value;
    res.y = v.y * value;
    res.z = v.z * value;
    return (res);
}