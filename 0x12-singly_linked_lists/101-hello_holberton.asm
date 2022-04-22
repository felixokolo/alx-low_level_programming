.global print_hol
print_hol:
	mov 4(%esp), %eax
	imul %eax, %eax
	ret