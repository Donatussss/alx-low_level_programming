	SECTION .data
mymsg:	db "Hello, Holberton", 0
myfmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, mymsg
	mov edi, myfmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
