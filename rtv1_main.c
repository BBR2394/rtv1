/*
** rtv1_main.c for  in /home/bertra_l//B2_iGraph/rtv1/reecrit
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Feb 15 13:48:31 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 16:56:42 2013 baptiste bertrand-rapello
*/

#include	"struct_rtv1.h"
#include	"mlx.h"
#include	"fct_usefull.h"
#include	"rtv1_h.h"

#include	<stdlib.h>
#include	<stdio.h>

int	main()
{
  t_window	win;
  t_picture	pict;
  t_expose2	expose;
  t_picture	pict2;
  int   keycode;

  win.mlx = mlx_init();
  if (win.mlx == 0)
    exit(36);

  win.win = mlx_new_window(win.mlx, (win.haut_w = HAUTWIN), (win.lng_w = LNGWIN), "BBR");
  pict.img = mlx_new_image(win.mlx, (pict.haut = HAUTPICT), (pict.lng = LNGPICT));
  win.data = mlx_get_data_addr(pict.img, &(pict.bpp), &(pict.sizeline), &(pict.endian));
  pict2.img = mlx_new_image(win.mlx, (pict2.haut = 10), (pict2.lng = 10));
  
  full_picture(&win, &pict);
  mlx_put_image_to_window(win.mlx, win.win, pict.img, (pict.px = 0), (pict.py = 0));

  expose.win = &win;
  expose.pict = &pict;
  gere_expose(&expose);
  mlx_expose_hook(win.win, gere_expose, &expose);
  mlx_loop(win.mlx);
}
