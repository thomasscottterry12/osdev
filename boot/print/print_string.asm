print_string:
	mov ah, 0x0E
print_loop:
	mov al, [bx]
	cmp al, 0
	je print_end
	int 0x10
	inc bx
	jmp print_loop
print_end:
	ret

