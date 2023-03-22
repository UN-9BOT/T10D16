CC=gcc
CFLAG=-g -Wall -Werror -Wextra
BUI=../build

strlen_tests: clean
	$(CC) $(CFLAG) -D STRLEN s21_string.c s21_string_test.c -o $(BUI)/Quest_1

strcmp_tests: clean
	$(CC) $(CFLAG) -D STRCMP s21_string.c s21_string_test.c -o $(BUI)/Quest_2

strcpy_tests: clean
	$(CC) $(CFLAG) -D STRCPY s21_string.c s21_string_test.c -o $(BUI)/Quest_3

strcat_tests: clean
	$(CC) $(CFLAG) -D STRCAT s21_string.c s21_string_test.c -o $(BUI)/Quest_4

strchr_tests: clean
	$(CC) $(CFLAG) -D STRCHR s21_string.c s21_string_test.c -o $(BUI)/Quest_5

clean: 
	rm -rf $(BUI)/*
