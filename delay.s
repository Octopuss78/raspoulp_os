	.arch armv8-a
	.file	"delay.c"
	.text
	.align	2
	.p2align 5,,15
	.global	delay
	.type	delay, %function
delay:
.LFB0:
	.cfi_startproc
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, 12]
	ldr	w0, [sp, 12]
	cbz	w0, .L1
	.p2align 5,,15
.L3:
	ldr	w0, [sp, 12]
	sub	w0, w0, #1
	str	w0, [sp, 12]
	ldr	w0, [sp, 12]
	cbnz	w0, .L3
.L1:
	add	sp, sp, 16
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE0:
	.size	delay, .-delay
	.ident	"GCC: (GNU) 15.2.0"
	.section	.note.GNU-stack,"",@progbits
