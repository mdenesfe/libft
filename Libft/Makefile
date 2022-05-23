NAME = libft.a

CC = @gcc

CFLAG =  -Wall -Werror -Wextra -c

RM = @rm -f

AR = @ar rc

FILES= 					\
	./ft_atoi.c			\
	./ft_itoa.c			\
	./ft_bzero.c		\
	./ft_calloc.c		\
	./ft_isalnum.c		\
	./ft_isalpha.c		\
	./ft_isascii.c		\
	./ft_isdigit.c		\
	./ft_isprint.c		\
	./ft_memchr.c		\
	./ft_memcmp.c		\
	./ft_memcpy.c		\
	./ft_memmove.c		\
	./ft_memset.c		\
	./ft_putchar_fd.c	\
	./ft_putendl_fd.c	\
	./ft_putnbr_fd.c	\
	./ft_putstr_fd.c	\
	./ft_strchr.c		\
	./ft_strdup.c		\
	./ft_strjoin.c		\
	./ft_strlcat.c		\
	./ft_strlcpy.c		\
	./ft_strlen.c		\
	./ft_strnstr.c		\
	./ft_strrchr.c		\
	./ft_strtrim.c		\
	./ft_strncmp.c 		\
	./ft_strmapi.c		\
	./ft_striteri.c		\
	./ft_split.c		\
	./ft_substr.c		\
	./ft_tolower.c		\
	./ft_toupper.c			

FBONUS = 				\
	./ft_lstadd_back.c	\
	./ft_lstadd_front.c	\
	./ft_lstclear.c		\
	./ft_lstdelone.c	\
	./ft_lstiter.c		\
	./ft_lstlast.c		\
	./ft_lstmap.c		\
	./ft_lstnew.c		\
	./ft_lstsize.c		

OBJECTS = $(subst .c,.o,$(FILES))
BONUOBJ = $(subst .c,.o,$(FBONUS))

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAG) $(FILES)
	$(AR) $(NAME) $(OBJECTS)
	@echo "[LIBFT CREATED!]"

clean : 
	$(RM) $(OBJECTS) $(BONUOBJ)
	@echo "[OBJECTS DELETED!]"

fclean : clean
	$(RM) $(NAME)
	@echo "[LIBFT.A DELETED!]"

bonus : $(BONUOBJ)

$(BONUOBJ) : $(FBONUS)
	$(CC) $(CFLAG) $(FBONUS)
	$(AR) $(NAME) $(BONUOBJ)
	@echo "[BONUS CREATED!]"

re : fclean all

rebonus : fclean bonus
