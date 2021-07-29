.data

.include "input_count_target.s"

.text
.globl _start
_start:
	#I think this is a comment find out what to use e/r/something else
	mov $0 , %r12d
	mov $0 , %rcx
	mov $len, %rdx
loop:
	mov str(%r12d), %r15b
	cmp %r15b, target
	je ad
cont:
	mov $2, %rbx
	inc %r12d
	dec %rdx
	jnz loop
	mov %rcx, count
	jmp done
ad:
	add $1, %rcx
	jmp cont
done:
	nop
