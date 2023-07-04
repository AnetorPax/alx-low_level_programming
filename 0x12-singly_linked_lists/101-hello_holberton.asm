	section .data
	    format db "Hello, Holberton", 0
	    newline db 10, 0

	section .text
	extern printf

	global main
	main:
	    sub rsp, 8                   ; Align the stack

	    ; Call printf with the format string
	    lea rdi, [format]
	    xor eax, eax                 ; Set the floating-point register to 0
	    call printf

	    ; Call printf with the new line string
	    lea rdi, [newline]
	    xor eax, eax
	    call printf

	    add rsp, 8                   ; Restore the stack

	    ; Exit the program
	    xor eax, eax
	    ret
