/*
** rtv1_calc.c for  in /home/bertra_l//B2_iGraph/rtv1_agrandi
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Mar 13 17:11:36 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 16:59:00 2013 baptiste bertrand-rapello
*/

#include	"struct_rtv1.h"
#include	"mlx.h"
#include	"fct_usefull.h"
#include	"rtv1_h.h"

#include	<stdio.h>
#include	<stdlib.h>
#include	<math.h>

int     set_rtv1(t_rtv1 *rtv1)
{
  rtv1->xo = 0;
  rtv1->yo = 0;
  rtv1->zo = 6;
  rtv1->nx = VECTNPLX;
  rtv1->ny = VECTNPLY;
  rtv1->nz = VECTNPLZ;
  rtv1->dx = -2;
  rtv1->dy = 2;
  rtv1->dz = -4;
  rtv1->x1 = -2;
  rtv1->y1 = 2;
  rtv1->z1 = 2;
  rtv1->d = 1;
  rtv1->xl = XL;
  rtv1->yl = YL;
  rtv1->zl = ZL;

  return (0);
}


int     pxl_change(t_rtv1 *rtv1)
{
  rtv1->x1 = rtv1->x1 + 0.005;
  rtv1->dx = rtv1->x1 - rtv1->xo;

  if (rtv1->x1 >= 2.001)
    {
      rtv1->opt++;
      if (rtv1->opt >= 255)
        rtv1->opt == 254;
      rtv1->x1 = -2;
      rtv1->y1 = rtv1->y1 - 0.005;
      rtv1->dy = rtv1->y1 - rtv1->yo;
    }

  return (0);
}

int	fond(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter)
{
  if (inter->inter_pl == 0)
    if (inter->inter_sp == 0)
      if (inter->inter_cy == 0)
	if (inter->inter_co == 0)
	  {
	    pxl->bleu = 150 ;
	    pxl->vert = 150 ;
	    pxl->rouge = 150;
	    pxl->inconnu = 255;
	  }
}

int     calc(t_window *win, t_picture *pict, t_pixel *pxl, t_rtv1 *rtv1)
{
  int   color;
  int   retour;
  t_inter       inter;

  color = 255;
  retour = 0;

  pxl->bleu = 0 ;
  pxl->vert = 0 ;
  pxl->rouge = 0;
  pxl->inconnu = 255;
  inter.inter_pl = 0;
  inter.inter_sp = 0;
  inter.inter_cy = 0;
  inter.inter_co = 0;
  plan(pxl, rtv1, &inter);
  sphere(pxl, rtv1, &inter);
  cylindre(pxl, rtv1, &inter);
  cone(pxl, rtv1, &inter);
  light(rtv1, pxl, &inter);
  pxl_change(rtv1);
}
