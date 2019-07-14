/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_unit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:24:53 by vmiachko          #+#    #+#             */
/*   Updated: 2019/07/14 17:24:56 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vec       vec_unit(t_vec v)
{
    t_vec   res;
    float   magnitude;

    magnitude = vec_magnitude(v);
    res.x = v.x / magnitude;
    res.y = v.y / magnitude;
    res.z = v.z / magnitude;
    return (res);
}