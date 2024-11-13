#makefile для c_from_asm.c
c_from_asm: c_from_asm.c
	gcc  -Wall -Wextra -Wpedantic -o c_from_asm c_from_asm.c -no-pie

