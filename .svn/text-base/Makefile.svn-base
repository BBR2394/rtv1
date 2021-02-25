##
## Makefile for  in /home/bertra_l//B2_iGraph/rtv1/reecrit
## 
## Made by baptiste bertrand-rapello
## Login   <bertra_l@epitech.net>
## 
## Started on  Fri Feb 15 13:28:49 2013 baptiste bertrand-rapello
## Last update Sun Mar 17 16:54:24 2013 baptiste bertrand-rapello
##

SRC =	rtv1_main.c \
	rtv1_1.c \
	rtv1_light2.c \
	fct_usefull.c \
	color.c \
	color2.c \
	cone.c \
	cylindre.c \
	plan.c \
	sphere.c \
	rtv1_calc.c \
	rotation.c

OBJS = $(SRC:.c=.o)

NAME = rtv1

RM = rm -f

FLAG = 

all: $(NAME)

$(NAME): $(OBJS) 
	gcc -o $(NAME) $(OBJS) -L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11 -lm

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
