PROJ_NAME = complexcal
TEST_PROJ_NAME = Test_$(PROJ_NAME)
COV_PROJ_NAME = Cov_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/complex_calc.c

TEST_SRC = test/testcmplx.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:main.c src/complex_calc.c
	gcc -fprofile-arcs -ftest-coverage -Iinc main.c src/complex_calc.c 
	./a.exe 
	
	
doc:
	make doc -C doc
	
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcda *.gcno *.gcov a.exe
	make clean -C doc
	rmdir $(BUILD_DIR)