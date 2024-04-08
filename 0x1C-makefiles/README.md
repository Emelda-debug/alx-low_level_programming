0x1C-makefiles

In this project, I was practising Makefiles


* [school.c](./school.c): This was the C function that displays a seahorse pattern in text.
It was used throughout project.

* [main.c](./main.c): Main C function that runs the function defined in
[school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Is the header file defining the function prototype used in `school.c`.



* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Includes:
    * The `all` rule built the executable 
    * And variables: none 

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
  with variables CC and SRC:
    * `CC`  defines the compiler.
    * `SRC` defines the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
  with additional variables OBJ and NAME:
    * `OBJ` defines the `.o` files to compile.
    * `NAME` defines the executable name.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
  with the following Rules:
    * `all`: builds the executable
    * `clean` deletes all Emacs/Vim temporary files along with the
    executable
    * `oclean` deletes the object files
    * `fclean` deletes all Emacs and Vim temporary files, the executable, and the object files
    * `re`  forces recompilation of all source files
    * The Variable `RM`  defines the program to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
  with variable:
   * `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra
    -pedantic`

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Is a Python function that returns the
  perimeter of an island defined in a grid
  * Prototype: `def island_perimeter(grid):`
  * The parameter `grid` is a list of a list of integers.
    * `0` represents a water zone
    * `1` represents a land zone
    * One cell is a square with side length `1`
    * Grid cells are connected horizontally/vertically (not diagonally).
    * Grid is rectangular, width and height don’t exceed `100`
    * The grid is completely surrounded by water, and there is either exactly
    one island or nothing.
    * The island does not contain lakes (water inside disconnected from
    surrounding land).

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [4-Makefile](./4-Makefile)
  with:
    * should not use $(RM) for the cleaning up rules, but to set the RM variable
    * should not use the string `$(CFLAGS)` more than once in the Makefile
    * should use the string $(RM) only  twice
    * should not use the string $(CFLAGS)
    * should not have an $(OBJ) rule
    * should not use the %.o: %.c rule
    * should not compile if the header `m.h` is missing.
    * should work even if there are existing files of the same name as any of the rule
