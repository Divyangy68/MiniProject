# Name of the project
PROJECT_NAME = Quiz

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/main_menu.c\
src/start_quiz.c\
src/show_record.c\
src/help.c\
src/edit_score.c

# All include folders with header files
INC	= -Iinc\

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build