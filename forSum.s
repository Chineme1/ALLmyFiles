

.global _start
.equ wordsize, 4
.equ x_len, 10
.equ sum, %eax



.data
x:
	.rept x_len
		.long 3 + 4*10 / 5+ 16 &0x57
	.endr

.text

_start:
movl $0 , %eax
movl $0 , %ecx


start_for:
	cmpl $x_len, %ecx
	jge end_for
	addl x(,%ecx, wordsize), %eax
	incl %ecx
	jmp start_for
	
end_for:

done:
	nop
