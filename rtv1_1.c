/*
** rtv1_1.c for  in /home/bertra_l//B2_iGraph/rtv1/reecrit
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Feb 15 13:34:59 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 16:58:03 2013 baptiste bertrand-rapello
*/

#include	"struct_rtv1.h"
#include	"mlx.h"
#include	"fct_usefull.h"
#include	"rtv1_h.h"

#include	<stdio.h>
#include	<stdlib.h>

int     gere_expose(t_expose2 *expose2)
{
  mlx_put_image_to_window(expose2->win->mlx, expose2->win->win, expose2->pict->img, expose2->pict->px, expose2->pict->py);
  return (0);
}

char	*my_get_pourcent(int nb)
{
  int   nb2;
  char  *nbf;
  int   stock;
  int   c;

  nb2 = 100;
  c = 0;
  nbf = malloc (3 * sizeof(char));
  if (nbf == 0)
    {
      my_putstr("probleme");
      return (0);
    }
  if (nb == 0)
    {
      nbf[0] == '0';
      return (nbf);
    }
  else if (nb == 100)
    {
      nbf[0] = '1';
      nbf[1] = '0';
      nbf[2] = '0';
      return (nbf);
    }
  while (nb / nb2 == 0 && nb != 0)
    nb2 = nb2 / 10;
  while (nb2 >= 1)
    {
      stock = nb / nb2;
      nb = nb % nb2;
      nbf[c] = stock + 48;
      nb2 = nb2 / 10;
      c++;
    }
  nbf[c] = '\0';
  return (nbf);
}

int     picture_set(struct fenetre *ma_fenetre, struct image *mon_image)
{
  int   nbint;
  int   c;
  int   x;
  int   y;

  nbint = (mon_image->haut * mon_image->lng) * (mon_image->bpp / 8);
  c = 0;

  while (c <= nbint)
    {
      ma_fenetre->data[c] = 0;
      c++;
      ma_fenetre->data[c] = 255;
      c++;
      ma_fenetre->data[c] = 0;
      c++;
      ma_fenetre->data[c] = 255;
      c++;
      x++;
    }

  return(0);
}

int     pixel_put_ac_color(t_window *ma_fenetre, t_picture *mon_image, t_pixel *pxl1)
{
  int   premierint;
  int   c;
  int   premierintbis;

  c = mon_image->bpp / 8;

  premierint = (mon_image->sizeline * (pxl1->y - 1)) + (pxl1->x * c);

  ma_fenetre->data[premierint] = pxl1->bleu;
  premierint++;
  ma_fenetre->data[premierint] = pxl1->vert;
  premierint++;
  ma_fenetre->data[premierint] = pxl1->rouge;
  premierint++;
  ma_fenetre->data[premierint] = pxl1->inconnu;

  return(0);
}

int	full_picture(t_window *win, t_picture *pict)
{
  t_pixel       pxl;
  int   pourcentage;
  int   nbpxl;
  char  *pourf;
  int   pourcsave;
  t_picture     pict2;
  t_rtv1	rtv1;

  set_rtv1(&rtv1);
  pxl.x = pxl.y = 1;
  nbpxl = 1;
  pourf = malloc (3 * sizeof(char));
  pict2.img = mlx_new_image(win->mlx, (pict2.haut = 15), (pict2.lng = 12));
  pourcsave = 0;
  mlx_string_put(win->mlx , win->win, 200, 200, 0xFF00FF,"rtv1 de bertra_l");
  while (pxl.y <= pict->lng)
    {
      while (pxl.x <= pict->haut)
        {
	  calc(win, pict, &pxl, &rtv1);
          pixel_put_ac_color(win, pict, &pxl);
          pxl.x = pxl.x + 1;
          pourcentage = (nbpxl * 100) / (pict->haut * pict->lng);
          nbpxl++;
          pourf = my_get_pourcent(pourcentage);
          if (pourcsave != pourcentage)
            {
              pourcsave = pourcentage;
              mlx_put_image_to_window(win->mlx, win->win, pict2.img, (pict2.px = 200), (pict2.py= 200));
            }
          if (pourcentage > 0)
	    mlx_string_put(win->mlx , win->win, 200, 210, 0x00FFFF, pourf);
        }
      pxl.x = 0;
      pxl.y = pxl.y + 1;
    }
  return (0);
}
