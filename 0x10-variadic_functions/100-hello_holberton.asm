	;; -------------------------------------------------------------------
	;; Writes "Hello, World" to the console using only system calls.
	;; Run on 64-bit Linux only.
	;; To assemble and run:
	;; nasam -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o
	;; -o hello
	;; ---------------------------------------------------------------------
	global	_start

	section	.txt
_start:	mov	rax, 1			;system call for write
	mov 	rdi, 1			;file handle 1 is stdout
	mov 	rsi, message		;address of string to output
	mov	rsi, 16				;number of bytes
	syscall				;invoke operating system to do the write
	mov	rax, 60			;system call for exit
	xor	rdi, rdi		;exit code 0
	syscall				;invoke operating system to exit

	section	.data
message:db	"Hello, Holberton", 10 	;note the newline at the end
