	.text
	.def	@feat.00;
	.scl	3;
	.type	0;
	.endef
	.globl	@feat.00
.set @feat.00, 0
	.file	"helloword.c"
	.def	add;
	.scl	2;
	.type	32;
	.endef
	.globl	add                             # -- Begin function add
	.p2align	4, 0x90
add:                                    # @add
.seh_proc add
# %bb.0:
	pushq	%rax
	.seh_stackalloc 8
	.seh_endprologue
	movl	%ecx, 4(%rsp)
	movl	%edx, (%rsp)
	movl	4(%rsp), %eax
	addl	(%rsp), %eax
	popq	%rcx
	retq
	.seh_endproc
                                        # -- End function
	.def	main;
	.scl	2;
	.type	32;
	.endef
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
main:                                   # @main
.seh_proc main
# %bb.0:
	pushq	%rbp
	.seh_pushreg %rbp
	subq	$48, %rsp
	.seh_stackalloc 48
	leaq	48(%rsp), %rbp
	.seh_setframe %rbp, 48
	.seh_endprologue
	callq	__main
	movl	$0, -4(%rbp)
	leaq	.L.str(%rip), %rcx
	callq	printf
	leaq	.L.str.1(%rip), %rcx
	callq	printf
	leaq	.L.str.2(%rip), %rcx
	callq	printf
	movl	$3, %ecx
	movl	$4, %edx
	callq	add
	movl	%eax, %edx
	leaq	.L.str.3(%rip), %rcx
	callq	printf
	xorl	%eax, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.seh_endproc
                                        # -- End function
	.section	.rdata,"dr"
.L.str:                                 # @.str
	.asciz	"Hello world \n"

.L.str.1:                               # @.str.1
	.asciz	"This is for UNI learning"

.L.str.2:                               # @.str.2
	.asciz	"What is the answer of 3 + 4 ?\n"

.L.str.3:                               # @.str.3
	.asciz	"The answer is %d"

	.addrsig
	.addrsig_sym add
	.addrsig_sym printf
