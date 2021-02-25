/*
** rtv1_lightsaber.c for  in /home/bertra_l//B2_iGraph/rtv1/reecrit
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Mon Feb 18 14:08:19 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 17:01:29 2013 baptiste bertrand-rapello
*/

#include	"mlx.h"
#include	"fct_usefull.h"
#include	"struct_rtv1.h"
#include	<math.h>
#include	"rtv1_h.h"
#include	<stdlib.h>

int	coordonnees_pts(t_rtv1 *rtv1, t_light *light)
{
  rtv1->xpts = (rtv1->xo + rtv1->k1 * rtv1->dx);
  rtv1->ypts = (rtv1->yo + rtv1->k1 * rtv1->dy);
  rtv1->zpts = (rtv1->zo + rtv1->k1 * rtv1->dz);

  rtv1->xvl = rtv1->xl - rtv1->xpts;
  rtv1->yvl = rtv1->yl - rtv1->ypts;
  rtv1->zvl = rtv1->zl - rtv1->zpts;

  rtv1->distance = sqrt((rtv1->xvl*rtv1->xvl) + (rtv1->yvl*rtv1->yvl) + (rtv1->zvl*rtv1->zvl));

  rtv1->xnpts = rtv1->xpts;
  rtv1->ynpts = rtv1->ypts;
  rtv1->znpts = rtv1->zpts;

  rtv1->prod_scal = rtv1->xvl * rtv1->xnpts + rtv1->yvl * rtv1->ynpts + rtv1->zvl * rtv1->znpts;
  rtv1->normevl = rtv1->xvl*rtv1->xvl + rtv1->yvl*rtv1->yvl + rtv1->zvl*rtv1->zvl;
  rtv1->normenpts = rtv1->xnpts*rtv1->xnpts + rtv1->ynpts*rtv1->ynpts + rtv1->znpts*rtv1->znpts;

  rtv1->cosa = rtv1->prod_scal / (rtv1->normevl*rtv1->normenpts);
  rtv1->cosa = rtv1->cosa * LUMINO;

  if (rtv1->cosa < 0.01)
    rtv1->cosa = 0.01;
}

int	ombre(t_rtv1 *rtv1, t_rtv1 *rtv2, t_inter *inter, t_pixel *pxl)
{
  int	sortie;

  rtv2->xo = rtv1->xpts;
  rtv2->yo = rtv1->ypts;
  rtv2->zo = rtv1->zpts;
  rtv2->dx = rtv1->xl - rtv2->xo;
  rtv2->dy = rtv1->yl - rtv2->yo;
  rtv2->dz = rtv1->zl - rtv2->zo;

  sortie = sphere(pxl, rtv2, inter);

  if (sortie == 1)
    return (1);
  else if (pxl->vert == 165)
    return (1);
  else
    return (0);

}

int	color_modif(t_pixel *pxl, t_rtv1 *rtv1)
{
  if ((pxl->vert * rtv1->cosa) > 255)
    return (0);
  if ((pxl->rouge * rtv1->cosa) > 255)
    return (0);
  if ((pxl->bleu * rtv1->cosa) > 255)
    return (0);

  pxl->vert = pxl->vert * rtv1->cosa ;
  pxl->rouge = pxl->rouge * rtv1->cosa ;
  pxl->bleu = pxl->bleu * rtv1->cosa ;

}

int	brillance(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter)
{

  if (inter->inter_co != 0)
    {
      pxl->vert = pxl->vert + BRILLCO * rtv1->cosa * 255;
      if (pxl->vert > 255)
	pxl->vert = 255;
      pxl->rouge = pxl->rouge + BRILLCO * rtv1->cosa * 255;
      if (pxl->rouge > 255)
	pxl->rouge = 255;
      pxl->bleu = pxl->bleu + BRILLCO * rtv1->cosa * 255;
      if (pxl->bleu > 255)
	pxl->bleu = 255;
    }
}

int	light(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter)
{
  t_rtv1	rtv2;
  t_light	light;

  coordonnees_pts(rtv1, &light);
  color_modif(pxl, rtv1);
  brillance(rtv1, pxl, inter);
  
}
