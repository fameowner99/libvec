/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:30:14 by vmiachko          #+#    #+#             */
/*   Updated: 2019/11/06 18:35:23 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

float	vec_dist(t_vec v1, t_vec v2)
{
	return (sqrt(vec_dot_product(v1, v1) + vec_dot_product(v2, v2)
	- 2 * vec_dot_product(v1, v2)));
}
