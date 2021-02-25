/*
** sphere.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:01:17 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:15:29 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int     translation(t_rtv1 *rtv1, t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1->xo + TRANSPX;
  rtv1bis->yo = rtv1->yo + TRANSPY;
  rtv1bis->zo = rtv1->zo + TRANSPZ;

  rtv1bis->dx = rtv1->dx + TRANSPX;
  rtv1bis->dy = rtv1->dy + TRANSPY;
  rtv1bis->dz = rtv1->dz + TRANSPZ;

}

int     sphere_k_calc(double delta, double a, double b, t_inter *inter)
{
  if (delta == 0)
    inter->k0sp = -b / (2 * a);
  else if (delta > 0)
    {
      inter->k1sp = (-b - sqrt(delta)) / (2 * a);
      inter->k2sp = (-b + sqrt(delta)) / (2 * a);

      if (inter->k1sp < inter->k2sp)
        inter->ksp = inter->k1sp;
      else if (inter->k1sp > inter->k2sp)
        inter->ksp = inter->k2sp;
    }
}

int	calc_delta_sp(double *a, double *b, double *c, t_rtv1 *rtv1bis)
{
  *c = (rtv1bis->xo * rtv1bis->xo) + (rtv1bis->yo * rtv1bis->yo) + (rtv1bis->zo * rtv1bis->zo) - (rtv1bis->rayon * rtv1bis->rayon);
  *b = (2 * rtv1bis->xo * rtv1bis->dx) + (2 * rtv1bis->yo * rtv1bis->dy) + (2 * rtv1bis->zo * rtv1bis->dz);
  *a = ((rtv1bis->dx * rtv1bis->dx) + (rtv1bis->dy * rtv1bis->dy) + (rtv1bis->dz * rtv1bis->dz));
}

int     sphere(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  double        a;
  double        b;
  double        c;
  double        delta;
  t_rtv1        *rtv1bis;

  rtv1bis = malloc(sizeof (t_rtv1));
  translation(rtv1, rtv1bis);
  rtv1bis->rayon = RAYONSP;
  rtv1->rayon = RAYONSP;
  calc_delta_sp(&a, &b, &c, rtv1bis);
  delta = (b * b) - (4 * a * c);
  if (delta < 0)
    return (inter->inter_sp = 0);
  else if (delta >= 0)
    {
      inter->inter_sp = 1;
      sphere_k_calc(delta, a, b, inter);
      color_sp(pxl, rtv1, inter);
      return (1);
    }
  free(rtv1bis);
  return (0);
}

