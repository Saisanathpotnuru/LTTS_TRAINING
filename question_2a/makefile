PROJ_NAME = output.exe

SRC = src/source.c
INC = -Iinc\
-Iunity
TEST_SRC = test/test.c\
unity/unity.c

all: 
	gcc -Iinc main.c src/source.c -o $(PROJ_NAME)


run: all
	./$(PROJ_NAME)

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o testproj.exe
	./testproj.exe

staticcheck:
	cppcheck --enable=all .

memcheck:
	valgrind ./$(PROJ_NAME)

sanitize_check:
	gcc $(INC) -fsanitize=address -fno-omit-frame-pointer main.c $(SRC) -o $(PROJ_NAME)
	./$(PROJ_NAME)

coverage:$(SRC)
	gcc $(INC) -fprofile-arcs -ftest-coverage main.c $< -o $(PROJ_NAME)
	./$(PROJ_NAME)

codesize:$(PROJ_NAME)
	size $^

clean:
	del /q $(PROJ_NAME) *.gcov *.gcda *.gcno *.exe
