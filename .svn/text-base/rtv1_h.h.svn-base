/*
** rtv1_h.h for  in /home/bertra_l//B2_iGraph/rtv1/reecrit
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Fri Feb 15 13:52:17 2013 baptiste bertrand-rapello
** Last update Sun Mar 17 15:59:58 2013 baptiste bertrand-rapello
*/

#ifndef RTV1_H_H_
# define RTV1_H_H

#define HAUTWIN 800
#define LNGWIN 800

#define HAUTPICT 800
#define LNGPICT 800

#define TRANSPX 0.25
#define TRANSPY -0.5
#define TRANSPZ 0

#define TRANCOX -0.9
#define TRANCOY -0.5
#define TRANCOZ 0
#define PHICO (-1 * ((3.14/6)/1.5))

#define RAYONSP 0.7
#define RAYONCY 0.5

#define TRANCYX 0
#define TRANCYY 8
#define TRANCYZ 1

#define PHIY 3.14/4
#define PHIX 3.14
#define PHIZ 3.14/6

#define LUMINO 20
#define BRILLCO 0.4

#define	XL 10
#define YL 20
#define ZL 20

#define VECTNPLX 0
#define VECTNPLY 18
#define VECTNPLZ 1

int     main();

int     gere_expose(t_expose2 *expose2);
char    *my_get_pourcent(int nb);
int     picture_set(struct fenetre *ma_fenetre, struct image *mon_image);
int     pixel_put_ac_color(t_window *ma_fenetre, t_picture *mon_image, t_pixel *pxl1);
int     full_picture(t_window *win, t_picture *pict);

int     set_rtv1(t_rtv1 *rtv1);
int     pxl_change(t_rtv1 *rtv1);
int     fond(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter);
int     calc(t_window *win, t_picture *pict, t_pixel *pxl, t_rtv1 *rtv1);

int     plan(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     translation(t_rtv1 *rtv1, t_rtv1 *rtv1bis);
int     sphere_k_calc(double delta, double a, double b, t_inter *inter);
int     calc_delta_sp(double *a, double *b, double *c, t_rtv1 *rtv1bis);
int     sphere(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     translation_cy(t_rtv1 *rtv1, t_rtv1 *rtv1bis);
int     cylindre_k_calc(double delta, double a, double b, t_inter *inter);
int     cylindre(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     transla_cone(t_rtv1 *rtv1, t_rtv1 *rtv1bis);
int     cone_k_calc(double delta, double a, double b, t_inter *inter);
int     cone(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     coordonnees_pts(t_rtv1 *rtv1, t_light *light);
int     color_modif(t_pixel *pxl, t_rtv1 *rtv1);
int     brillance(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter);
int     light(t_rtv1 *rtv1, t_pixel *pxl, t_inter *inter);

int     plan_color(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     cone_color2(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     cylindre_color(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     color_sp(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     c_sp(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     c_pl(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     c_cy(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);
int     c_co(t_pixel *pxl, t_rtv1 *rtv1, t_inter *inter);

int     rotate_x(t_rtv1 *rtv1bis);
int     rotate_y(t_rtv1 *rtv1bis);
int     rotate_z(t_rtv1 *rtv1bis);

#endif
