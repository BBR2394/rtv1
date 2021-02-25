/*
** fct_usefull.c for  in /home/bertra_l//ma_minilib_perso/mylib
** 
** Made by baptiste bertrand-rapello
** Login   <bertra_l@epitech.net>
** 
** Started on  Tue Nov 27 13:29:52 2012 baptiste bertrand-rapello
** Last update Sun Mar 17 16:23:53 2013 baptiste bertrand-rapello
*/


void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   c;

  c = 0;

  while(str[c] != '\0')
    {
      my_putchar(str[c]);
      c++;
    }
}

int     my_strlen(char  *str)
{
  int   c;

  c = 0;
  while (str[c] != '\0')
    c++;

  return (c);
}
