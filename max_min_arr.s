.data

.include "input_max_min_arr.s"

.text
.globl _start
_start:
	mov $0 , %eax
	mov $arrlen, %ebx
	mov (%ebx), %ecx
	mov arr(%eax), %edx
	mov arr(%eax), %esi
	mov $0 , %edi
	mov $0 , %esp
	jmp loop
bigl:
	mov arr(%eax), %edx
	mov %edi, %ebp
	jmp bl
lill:
	mov arr(%eax), %esi
	mov %edi, %esp
	jmp ll
loop:
	add $1, %edi
	add $4, %eax
	cmp arr(%eax), %edx
	jg bigl
bl:
	cmp arr(%eax), %esi
	jl lill
ll:
	dec %ecx
	jnz loop
	mov %ebp, minIndex
	mov %esp, maxIndex
done:
	nop
