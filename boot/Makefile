##########################################################
#		@file	Makefile
#
#		@brief	bootのコンパイル規則
#
#		@author	VXdora
#
#		@update mindows01b
##########################################################


###  Compile Option  ###
CC		= x86_64-w64-mingw32-gcc
CFLAGS	= -O0 -Wall -Wextra -e EfiMain -nostdlib -fno-builtin -Wl,--subsystem,10 -mno-stack-arg-probe

###  Include Option  ###
iUEFI	= -I uefi

main.efi: main.c $(fUEFI) Makefile
	$(CC) main.c -o main.efi $(iUEFI) $(CFLAGS)

clean:
	rm -f main.efi
