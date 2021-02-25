/*
** color2.c for  in /home/bertra_l//rtv1-2017-bertra_l
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Sun Mar 17 15:24:25 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:25:06 2013 baptiste bertrand-rapello
*/

#include        "struct_rtv1.h"
#include        "mlx.h"
#include        "fct_usefull.h"
#include        "rtv1_h.h"

#include        <stdio.h>
#include        <stdlib.h>
#include        <math.h>

int     c_sp(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  pxl->bleu = 255;
  pxl->vert = 63;
  pxl->rouge = 255;
  pxl->inconnu = 150;
  rtv1->k1 = inter->ksp;
}

int     c_pl(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  pxl->bleu = 165;
  pxl->vert = 165;
  pxl->rouge = 165;
  pxl->inconnu = 150;
  rtv1->k1 = inter->kpl;
}

int     c_cy(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  pxl->bleu = 2;
  pxl->vert = 102;
  pxl->rouge = 255;
  pxl->inconnu = 150;
  rtv1->k1 = inter->kcy;
}

int     c_co(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter)
{
  pxl->bleu = 10;
  pxl->vert = 200;
  pxl->rouge = 10;
  pxl->inconnu = 150;
  rtv1->k1 = inter->kco;
  inter->inter_co = 5;
}
