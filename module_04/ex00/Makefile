
#***** Name *****#

NAME			=		Animal

#***** Sources / Objs *****#

SRC				=		main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

OBJS			=		$(SRC:.cpp=.o)

#***** Couleurs *****#

GREEN			=		\033[1;32m
BLUE			=		\033[0;94m
RED				=		\033[1;31m
ENDCOLOR		=		\033[0m
BG_G			=		\033[42m

#***** Textes *****#

START			=		echo "$(GREEN)Start compilation\n$(ENDCOLOR)"
END_COMP		=		echo "$(GREEN)End compilation\n$(ENDCOLOR)"
S_OBJS			=		echo "$(RED)Suppression des objets\n$(ENDCOLOR)"
S_NAME			=		echo "$(RED)Suppression du programme\n$(ENDCOLOR)"
CHARG_LINE		=		echo "$(BG_G)    $(ENDCOLOR)\c"
BS_N			=		echo "\n"

#***** Logo *****#

LOGO_CPP			=		echo "$(GREEN)\t        CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   PPPPPPPPPPPPPPPPP   \n\
											\t     CCC::::::::::::CP::::::::::::::::P  P::::::::::::::::P  \n\
											\t   CC:::::::::::::::CP::::::PPPPPP:::::P P::::::PPPPPP:::::P \n\
											\t  C:::::CCCCCCCC::::CPP:::::P     P:::::PPP:::::P     P:::::P\n\
											\t C:::::C       CCCCCC  P::::P     P:::::P  P::::P     P:::::P\n\
											\tC:::::C                P::::P     P:::::P  P::::P     P:::::P\n\
											\tC:::::C                P::::PPPPPP:::::P   P::::PPPPPP:::::P \n\
											\tC:::::C                P:::::::::::::PP    P:::::::::::::PP  \n\
											\tC:::::C                P::::PPPPPPPPP      P::::PPPPPPPPP    \n\
											\tC:::::C                P::::P              P::::P            \n\
											\tC:::::C                P::::P              P::::P            \n\
											\t C:::::C       CCCCCC  P::::P              P::::P            \n\
											\t  C:::::CCCCCCCC::::CPP::::::PP          PP::::::PP          \n\
											\t   CC:::::::::::::::CP::::::::P          P::::::::P          \n\
											\t     CCC::::::::::::CP::::::::P          P::::::::P          \n\
											\t        CCCCCCCCCCCCCPPPPPPPPPP          PPPPPPPPPP          \n  $(ENDCOLOR)\n"


#***** Flags *****#

CXX				=		c++
CFLAGS			=		-Wall -Wextra -Werror -std=c++98 -g
L				=		$(CFLAGS) -g -fsanitize=address -fno-omit-frame-pointer
RM				=		rm -f

#ifeq ($(shell uname), Linux)
#
#endif

#***** Compilation *****#

all : start logo $(NAME)

start:
			@$(START)

logo :
			@$(LOGO_CPP)


%.o:		%.cpp
			@$(CXX) $(CFLAGS) -g -c $< -o $@
			@$(CHARG_LINE)

$(NAME) :	${OBJS}
			@$(BS_N)
			${CXX} ${CFLAGS} ${OBJS} -o ${NAME}
			@$(END_COMP)

l :			${OBJS}
			${CXX} ${L} ${OBJS} -o ${NAME}
			@$(END_COMP)


#***** Clean *****#

clean:
			@$(S_OBJS)
			${RM} ${OBJS}

fclean:		clean
			@$(S_NAME)
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean 