/*
** cone.c for bonjour in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:08:07 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:17:16 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int	rotat_cone(t_rtv1 *rtv1, t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1bis->xo;
  rtv1bis->yo = cos(PHICO) * rtv1bis->yo - sin(PHICO) * rtv1bis->zo;
  rtv1bis->zo = sin(PHICO) * rtv1bis->yo + cos(PHICO) * rtv1bis->zo;

  rtv1bis->dx = rtv1bis->dx;
  rtv1bis->dy = cos(PHICO) * rtv1bis->dy - sin(PHICO) * rtv1bis->dz;
  rtv1bis->dz = sin(PHICO) * rtv1bis->dy + cos(PHICO) * rtv1bis->dz;

}

int	transla_cone(t_rtv1 *rtv1, t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1->xo + TRANCOX;
  rtv1bis->yo = rtv1->yo + TRANCOY;
  rtv1bis->zo = rtv1->zo + TRANCOZ;

  rtv1bis->dx = rtv1->dx + TRANCOX;
  rtv1bis->dy = rtv1->dy + TRANCOY;
  rtv1bis->dz = rtv1->dz + TRANCOZ;
}

int     cone_k_calc(double delta, double a, double b, t_inter *inter)
{
  if (delta == 0)
    inter->k0co = -b / (2 * a);
  else if (delta > 0)
    {
      inter->k1co = (-b - sqrt(delta)) / (2 * a);
      inter->k2co = (-b + sqrt(delta)) / (2 * a);

      if (inter->k1co < inter->k2co)
        inter->kco = inter->k1co;
      else if (inter->k1co > inter->k2co)
        inter->kco = inter->k2co;
    }
}

int     cone(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  double        a;
  double        b;
  double        c;
  double        delta;
  double        X;
  t_rtv1        *rtv1bis;

  rtv1bis = malloc(sizeof (t_rtv1));
  transla_cone(rtv1, rtv1bis);
  rotat_cone(rtv1, rtv1bis);
  X = (tan(3.14/3) * tan(3.14/3));
  c = (rtv1bis->zo * rtv1bis->zo) + (rtv1bis->xo * rtv1bis->xo) - ((rtv1bis->yo * rtv1bis->yo) / X);
  b = (2 * rtv1bis->zo * rtv1bis->dz) + (2 * rtv1bis->xo * rtv1bis->dx) - ((2 * rtv1bis->yo * rtv1bis->dy) / X);
  a = ((rtv1bis->dz * rtv1bis->dz) + (rtv1bis->dx * rtv1bis->dx)) - ((rtv1bis->dy * rtv1bis->dy) / X);
  delta = (b * b) - (4 * a * c);
  if (delta < 0)
    return (inter->inter_co = 0);
  else if (delta >= 0 && tan(3.14/3) > 0)
    {
      inter->inter_co = 5;
      cone_k_calc(delta, a, b, inter);
      cone_color2(pxl, rtv1, inter);
    }
}
