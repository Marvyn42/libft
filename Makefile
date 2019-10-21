PATH		= srcs/

SRCS		= ${PATH}ft_putchar.c ${PATH}ft_swap.c ${PATH}ft_putstr.c ${PATH}ft_strlen.c ${PATH}ft_strcmp.c
			${PATH}ft_atoi.c \
			${PATH}ft_bzero.c \
			${PATH}ft_calloc.c \
			${PATH}ft_isalnum.c \
			${PATH}ft_isalpha.c \
			${PATH}ft_isascii.c \
			${PATH}ft_isdigit.c \
			${PATH}ft_isprint.c \
			${PATH}ft_itoa.c \
			${PATH}ft_memccpy.c \
			${PATH}ft_memchr.c \
			${PATH}ft_memcmp.c \
			${PATH}ft_memcpy.c \
			${PATH}ft_memmove.c \
			${PATH}ft_memset.c \
			${PATH}ft_putchar_fd.c \
			${PATH}ft_putendl_fd.c \
			${PATH}ft_putnbr_fd.c \
			${PATH}ft_putstr_fd.c \
			${PATH}ft_split.c \
			${PATH}ft_strchr.c \
			${PATH}ft_strdup.c \
			${PATH}ft_strjoin.c \
			${PATH}ft_strlcpy.c \
			${PATH}ft_strlcat.c \
			${PATH}ft_strlen.c \
			${PATH}ft_strmapi.c \
			${PATH}ft_strncmp.c \
			${PATH}ft_strnstr.c \
			${PATH}ft_strrchr.c \
			${PATH}ft_strtrim.c \
			${PATH}ft_substr.c \
			${PATH}ft_tolower.c \
			${PATH}ft_toupper.c

HEADERS		= libft.h

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc libft.a ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
