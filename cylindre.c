/*
** cylindre.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:01:49 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:43:23 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int     translation_cy(t_rtv1 *rtv1, t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1->xo + TRANCYX;
  rtv1bis->yo = rtv1->yo + TRANCYY;
  rtv1bis->zo = rtv1->zo + TRANCYZ;

  rtv1bis->dx = rtv1->dx + TRANCYX;
  rtv1bis->dy = rtv1->dy + TRANCYY;
  rtv1bis->dz = rtv1->dz + TRANCYZ;
}

int     cylindre_k_calc(double delta, double a, double b, t_inter *inter)
{
  if (delta == 0)
    inter->k0cy = -b / (2 * a);
  else if (delta > 0)
    {
      inter->k1cy = (-b - sqrt(delta)) / (2 * a);
      inter->k2cy = (-b + sqrt(delta)) / (2 * a);

      if (inter->k1cy < inter->k2cy)
        inter->kcy = inter->k1cy;
      else if (inter->k1cy > inter->k2cy)
        inter->kcy = inter->k2cy;
    }
}

int     cylindre(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  double        a;
  double        b;
  double        c;
  double        delta;
  t_rtv1        *rtv1bis;

  rtv1bis = malloc(sizeof (t_rtv1));
  translation_cy(rtv1, rtv1bis);
  rotate_z(rtv1bis);
  rtv1->rayon = RAYONCY;
  c = (rtv1->zo * rtv1->zo) + (rtv1->xo * rtv1->xo) - (rtv1->rayon * rtv1->rayon);
  b = (2 * rtv1->zo * rtv1->dz) + (2 * rtv1->xo * rtv1->dx);
  a = ((rtv1->dz * rtv1->dz) + (rtv1->dx * rtv1->dx));
  delta = (b * b) - (4 * a * c);
  if (delta < 0)
    return (inter->inter_cy = 0);
  else if (delta >= 0)
    {
      inter->inter_cy = 3;
      cylindre_k_calc(delta, a, b, inter);
      cylindre_color(pxl, rtv1, inter);
    }
  free(rtv1bis);
}

