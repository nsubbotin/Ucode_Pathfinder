NAME = pathfinder

FLAG = -std=c11 -Wall -Wextra -Werror -Wpendatic

SRCD = src
INCD = inc
OBJD = obj

LMXA := libmx/libmx.a
LMXI := libmx/inc

inc = pathfinder.h
INCS = $(addprefix $(INCD)/, $(INC))

SRC = main.c check.c parse.c algorithm.c output.c

SRCS = $(addprefix $(SRCD)/, $(SRC))
OBJS = $(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install

install: $(LMXA) $(NAME)

$(NAME): $(OBJS)
				@clang $(FLAG) $(OBJS) $(LMXA) -o $@

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
				@clang $(FLAG) -c $< -o $@ -I$(INCD) -I$(LMXI)

$(OBJS): | $(OBJD)

$(OBJD):
				@mkdir -p $@

$(LMXA):
				@make -sC libmx

clean:
				@make -sC libmx $@
				@rm -rf $(OBJD)

uninstall: clean
					@make -sC libmx $@
					@rm -rf $(NAME)

reinstall: uninstall install
