/*
** color.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:01:09 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 16:59:37 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int     plan_color(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  pxl->bleu = 0;
  pxl->vert = 165;
  pxl->rouge = 165;
  pxl->inconnu = 150;
  rtv1->k1 = inter->kpl;
}

int	cone_color2(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  inter->inter_co = 0;
  if (inter->kpl > inter->kco || inter->inter_pl == 0)
    c_co(pxl, rtv1, inter);
  else if (inter->kpl < inter->kco && inter->inter_pl != 0)
    {
      rtv1->k1 = inter->kpl;
      return (2);
    }

  if (inter->ksp > inter->kco || inter->inter_sp == 0)
    c_co(pxl, rtv1, inter);
  else if (inter->ksp < inter->kco)
    c_sp(pxl, rtv1, inter);

  if (inter->kcy > inter->kco || inter->inter_cy == 0)
    c_co(pxl, rtv1, inter);
  else if (inter->kcy < inter->kco)
    c_cy(pxl, rtv1, inter);

}

int     cylindre_color(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  if (inter->kpl > inter->kcy || inter->inter_pl == 0)
    {
      c_cy(pxl, rtv1, inter);
      inter->inter_cy = 3;
    }
  else if (inter->kpl < inter->kcy && inter->inter_pl != 0)
    {
      rtv1->k1 = inter->kpl;
      return (2);
    }
  if (inter->ksp > inter->kcy || inter->inter_sp == 0)
    {
      c_cy(pxl, rtv1, inter);
      inter->inter_cy = 3;
    }
  else if (inter->ksp < inter->kcy)
    {
      c_sp(pxl, rtv1, inter);
      inter->inter_sp = 1;
      return (2);
    }
}

int     color_sp(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  if ((inter->kpl > inter->ksp || inter->inter_pl == 0))
    {
      c_sp(pxl, rtv1, inter);
      inter->inter_sp = 1;
    }
  else if (inter->kpl < inter->ksp)
    {
      rtv1->k1 = inter->kpl;
      return (2);
    }
}
