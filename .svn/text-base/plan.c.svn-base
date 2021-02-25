/*
** plan.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:01:31 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 14:50:30 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>


int     plan(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  double        a;
  double        b;
  double        res;

  a = rtv1->nx * rtv1->xo + rtv1->ny * rtv1->yo + rtv1->nz * rtv1->zo + rtv1->d;
  b = rtv1->nx * rtv1->dx + rtv1->ny * rtv1->dy + rtv1->nz * rtv1->dz;

  res = (a * -1) / b;
  inter->kpl = res;

  if (res >= 0)
    {
      inter->inter_pl = 2;
      plan_color(pxl, rtv1, inter);
      return (1);
    }
  else if (res < 0)
    inter->inter_pl = 0;
}
