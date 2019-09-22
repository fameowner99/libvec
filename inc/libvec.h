#ifndef LIBVEC_H

# define LIBVEC_H

#include "math.h"

typedef struct  s_vec
{
    float       x;
    float       y;
    float       z;
}               t_vec;

t_vec vec_add(t_vec v1, t_vec v2);
t_vec vec_opposite(t_vec v);
t_vec vec_sub(t_vec v1, t_vec v2);
t_vec vec_mul(t_vec v, float value);
float vec_magnitude(t_vec v);
t_vec vec_unit(t_vec v);
float vec_dot_product(t_vec v1, t_vec v2);
t_vec vec_cross_product(t_vec v1, t_vec v2);
float vec_angle(t_vec v1, t_vec v2);
void  vec_set(t_vec *vec, float x, float y, float z);
void  vec_set_v(t_vec *vec, t_vec a_vec);
#endif