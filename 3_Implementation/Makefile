# Name of the project
PROJECT_NAME = Duty_Cycle

# Output directory
BUILD = build

#code works on both Windows and Linux
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

# All source code files
SRC = Main.c\
Src/DutyCycle.c

# All test source files
TEST_SRC = Src/DutyCycle.c\
Src/test.c\
unity/unity.c

#output of testing
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

# All include folders with header files
INC	= -IInc\
-Iunity


#Library Inlcudes
#INCLUDE_LIBS = 
#INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
#.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)


coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(BUILD)/Test_$(PROJECT_NAME).$(EXEC))

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD)/*)

# Create new build folder if not present
$(BUILD):
	mkdir build