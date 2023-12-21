##
## EPITECH PROJECT, 2023
## Pool day 03
## File description:
## Makefile for the pool day 03
##

CC=gcc
CFLAGS= -Wall -Wextra
#CFLAGS= -Wall -Wextra -O2 -march=native -flto

all: tests_run clean

main: *.c lib/my/*.c
	$(CC) $(CFLAGS) *.c lib/my/*.c -o main
	@echo
	@bash -c "time ./main"
	@echo
	@make clean_light >/dev/null

tests_run: *.c tests/*.c
	@make clean >/dev/null
	$(CC) $(CFLAGS) *.c lib/my/*.c tests/*.c -o tests/unit_tests --coverage -lcriterion
	@echo
	@./tests/unit_tests --verbose
	@echo
	@gcovr --exclude tests/ --exclude lib/my/*.c | tail -n+4
	@mango --exclude-files Makefile
	@make clean_light >/dev/null

clean_light:
	rm -f main tests/unit_tests

clean:
	@rm -f main tests/*.gcno tests/*.gcda
	@rm -f main tests/unit_tests tests/*.gcno tests/*.gcda
