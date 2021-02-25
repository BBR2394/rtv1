/*
** rotation.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Sat Mar 16 21:42:25 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:39:28 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int     rotate_x(t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1bis->xo;
  rtv1bis->yo = cos(PHIX) * rtv1bis->yo - sin(PHIX) * rtv1bis->zo;
  rtv1bis->zo = sin(PHIX) * rtv1bis->yo + cos(PHIX) * rtv1bis->zo;

  rtv1bis->dx = rtv1bis->dx;
  rtv1bis->dy = cos(PHIX) * rtv1bis->dy - sin(PHIX) * rtv1bis->dz;
  rtv1bis->dz = sin(PHIX) * rtv1bis->dy + cos(PHIX) * rtv1bis->dx;
}

int	rotate_y(t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1bis->xo * cos(PHIY) + rtv1bis->zo * sin(PHIY);
  rtv1bis->yo = rtv1bis->yo;
  rtv1bis->zo = rtv1bis->xo * (-1 * sin(PHIY)) + rtv1bis->zo * cos(PHIY);

  rtv1bis->dx = rtv1bis->xo * cos(PHIY) + rtv1bis->zo * sin(PHIY);
  rtv1bis->dy = rtv1bis->yo;
  rtv1bis->dz = rtv1bis->xo * (-1 * sin(PHIY)) + rtv1bis->zo * cos(PHIY);

}

int     rotate_z(t_rtv1 *rtv1bis)
{
  rtv1bis->xo = rtv1bis->xo * cos(PHIZ) + rtv1bis->yo * (-1 * sin(PHIZ));
  rtv1bis->yo = rtv1bis->xo * sin(PHIZ) + rtv1bis->yo * cos(PHIZ);
  rtv1bis->zo = rtv1bis->zo;

  rtv1bis->dx = rtv1bis->dx * cos(PHIZ) + rtv1bis->dy * (-1 * sin(PHIZ));
  rtv1bis->dy = rtv1bis->dx * sin(PHIZ) + rtv1bis->dy * cos(PHIZ);
  rtv1bis->dz = rtv1bis->dz;

}
