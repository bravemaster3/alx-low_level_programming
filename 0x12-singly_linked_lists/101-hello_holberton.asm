section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	extern printf

global main
main:
	push rbp
	mov rbp, rsp

	lea rdi, [fmt]
	lea rsi, [msg]
	call printf

	mov rsp, rbp
	pop rbp
	ret
