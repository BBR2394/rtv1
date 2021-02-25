/*
** struct_rtv1.h for  in /home/bertra_l//B2_iGraph/rtv1
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Wed Jan 23 18:24:47 2013 baptiste bertrand-rapello
** Last update Wed Mar 13 14:35:36 2013 baptiste bertrand-rapello
*/

#ifndef STRUCT_RTV1_H_
# define STRUCT_RTV1_H_

typedef struct fenetre
{
  void  *mlx;
  char  *data;
  void  *win;
  int   haut_w;
  int   lng_w;

}       t_window;

typedef struct image
{
  int   px;
  int   py;
  void  *img;
  int   bpp;
  int   sizeline;
  int   endian;
  int   haut;
  int   lng;

  int   vert;
  int   rouge;
  int   bleu;
  int   inconnu;

  int   opt_haut;
  int   opt_bas;

}       t_picture;

typedef struct pixel
{
  int   x;
  int   y;
  int   z;
  int   color[4];

  double   vert;
  double   rouge;
  double   bleu;
  double   inconnu;

}       t_pixel;

typedef struct plan
{
  double	coorx;
  double	coory;
  double	coorz;

  double	x;
  double	y;
  double	z;

}	t_plan;

typedef struct s_rtv1
{
  double	xo;
  double	yo;
  double	zo;

  double	nx;
  double	ny;
  double	nz;

  double	dx;
  double	dy;
  double	dz;

  double	x1;
  double	y1;
  double	z1;

  double	rayon;
  double	d;

  double	k0;
  double        k1;
  double        k2;

  double	xl;
  double	yl;
  double	zl;

  double	xvl;
  double	yvl;
  double	zvl;

  double	xpts;
  double	ypts;
  double	zpts;

  double        xnpts;
  double        ynpts;
  double        znpts;

  double	normevl;
  double	normenpts;
  double	cosa;

  double	prod_scal;

  double	k;
  double	distance;

  int	opt;

}	t_rtv1;

typedef struct  s_light
{

  double        xvl;
  double        yvl;
  double        zvl;

  double        xpts;
  double        ypts;
  double        zpts;

  double        distance;

}	t_light;

typedef struct	s_intersection
{
  int   inter_pl;
  int	inter_sp;
  int	inter_cy;
  int	inter_co;

  double        k0cy;
  double        k1cy;
  double        k2cy;
  double	kcy;

  double        k0sp;
  double        k1sp;
  double        k2sp;
  double	ksp;

  double        k0pl;
  double	kpl;

  double	k0co;
  double        k1co;
  double        k2co;
  double        kco;

}	t_inter;

typedef struct s_expose
{
  t_window      *win;
  t_picture     *pict;
  t_pixel       *pxl;
  t_pixel       *pxl2;
}       t_expose2;

#endif
