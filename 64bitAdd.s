


.global _start
.equ wordsize, 4
.equ sec, 1

.data

num1:
	.long 0
	.long 2147483647
	#movl $0, %eax
	#movl $0, %ebx	
num2:
	.long 0
	.long 2147483647
	#movl $0, %ecx
	#movl $0, %edx

.text
_start:
	#add num2, num1
	movl $sec, %ecx
	movl $0, %eax#lower 32
	movl $0, %edx#higher 32
	#addl 4, num1
	#addl 4, num2
	movl num1(,%ecx,wordsize), %eax
	#addl 4, %eax
	addl num2(,%ecx,wordsize), %eax
	addl 4, %eax
	jc carry 
	#addl -4, num1
	#addl -4, num2
	movl num1, %edx
	addl num2, %edx 
	jmp done
carry:
	movl $1, %edx
	#addl -4, num1
	#addl -4, num2
	addl num1, %edx
	addl num2, %edx
	jmp done

done:
	nop
