# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plagache <plagache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/20 11:38:02 by plagache          #+#    #+#              #
#    Updated: 2020/04/21 16:25:38 by plagache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

STRING	=	ft_strlen \
			ft_occurence_of \
			ft_strdup \
			ft_strcpy \
			ft_strncpy \
			ft_strcat \
			ft_strncat \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strstr \
			ft_strnstr \
			ft_strcmp \
			ft_strncmp \
			ft_strnew \
			ft_strdel \
			ft_strclr \
			ft_striter \
			ft_striteri \
			ft_strmap \
			ft_strmapi \
			ft_strequ \
			ft_strnequ \
			ft_strsub \
			ft_strjoin \
			ft_strjoinfree\
			ft_strtrim \
			ft_strsplit \
			ft_itoa \
			ft_putchar \
			ft_putstr \
			ft_putendl \
			ft_putnbr \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_toupper \
			ft_tolower \

NUMBER	=	ft_atoi \
			ft_atol \

MEM		=	ft_bzero \
			ft_free_arr \
			ft_memset \
			ft_memcpy \
			ft_memccpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_memalloc \
			ft_memdel \

IS		=	ft_islower \
			ft_isupper \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \

LST		=	ft_lstnew \
			ft_lstdelone \
			ft_lstdel \
			ft_lstadd \
			ft_lstiter \
			ft_lstmap \
			ft_2lstnew \
			ft_2lstaddstrt \
			ft_2lstaddend \
			ft_2lstdelone \

GET		=	get_next_line \

PRINTF	=	ft_printf\
			pwidth\
			pflags\
			pwidth\
			plenmodifier\
			pprecision\
			func_selector\
			global_tools\
			int\
			int_tools\
			unsigned\
			unsigned_tools\
			octal\
			octal_tools\
			percent\
			char\
			hexa\
			hexa_tools\
			hexa_upper\
			string\
			float\
			float_tools\
			double\
			double_tools\
			ldouble\
			ldouble_tools\
			address_tools\
			address\
			special\
			special_tools\

SRC = $(STRING) $(NUMBER) $(MEM) $(IS) $(LST) $(GET) $(PRINTF)


VPATH = srcs:srcs/string:srcs/number:srcs/mem:srcs/is:srcs/lst:srcs/get_next_line:srcs/printf

PATH_OBJ = ./out/

OBJ = $(SRC:%=$(PATH_OBJ)%.o)

HEADER = includes

CFLAGS = -Wall -Wextra -Werror

CC = clang

BLUE = "\\033[36m"
RED = "\\033[31m"
WHITE = "\\033[0m"
GREEN = "\\033[32m"
PURPLE = "\\033[35m"

LNECLR = "\\33[2K\\r"

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	printf "$(LNECLR)$(GREEN)make libft done$(WHITE)\n"

FORCE:

$(PATH_OBJ)%.o : %.c $(HEADER)
	mkdir -p out
	printf "$(LNECLR)$(NAME): $<"
	$(CC) -I $(HEADER) -o $@ -c $<

clean :
	$(RM) -rf $(PATH_OBJ)
	printf "$(PURPLE)clean libft done$(WHITE)\n"

fclean :clean
	$(RM) $(NAME)
	printf "$(RED)fclean libft done$(WHITE)\n"

re : fclean all
	printf "$(BLUE)re libft done$(WHITE)\n"

.PHONY : all clean fclean re FORCE
.SILENT : fclean clean re all $(NAME) $(OBJ)
