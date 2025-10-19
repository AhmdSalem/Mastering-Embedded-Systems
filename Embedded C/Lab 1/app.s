
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f000c 	ldr	r0, [pc, #12]	@ 1c <main+0x1c>
   c:	ebfffffe 	bl	0 <uart_send_string>
  10:	e59f0008 	ldr	r0, [pc, #8]	@ 20 <main+0x20>
  14:	ebfffffe 	bl	0 <uart_send_string>
  18:	eafffffe 	b	18 <main+0x18>
	...

Disassembly of section .data:

00000000 <string_buffer1>:
   0:	7261654c 	rsbvc	r6, r1, #76, 10	@ 0x13000000
   4:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
   8:	70654420 	rsbvc	r4, r5, r0, lsr #8
   c:	203a6874 	eorscs	r6, sl, r4, ror r8
  10:	656d6841 	strbvs	r6, [sp, #-2113]!	@ 0xfffff7bf
  14:	61532064 	cmpvs	r3, r4, rrx
  18:	0d6d656c 	stcleq	5, cr6, [sp, #-432]!	@ 0xfffffe50
  1c:	0000000a 	andeq	r0, r0, sl
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	7473614d 	ldrbtvc	r6, [r3], #-333	@ 0xfffffeb3
   4:	6e697265 	cdpvs	2, 6, cr7, cr9, cr5, {3}
   8:	6d452067 	stclvs	0, cr2, [r5, #-412]	@ 0xfffffe64
   c:	64646562 	strbtvs	r6, [r4], #-1378	@ 0xfffffa9e
  10:	53206465 			@ <UNDEFINED> instruction: 0x53206465
  14:	65747379 	ldrbvs	r7, [r4, #-889]!	@ 0xfffffc87
  18:	0a0d736d 	beq	35cdd4 <string_buffer2+0x35cdd4>
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	cmpmi	r3, #0, 14
   4:	4128203a 			@ <UNDEFINED> instruction: 0x4128203a
   8:	47206d72 			@ <UNDEFINED> instruction: 0x47206d72
   c:	5420554e 	strtpl	r5, [r0], #-1358	@ 0xfffffab2
  10:	636c6f6f 	cmnvs	ip, #444	@ 0x1bc
  14:	6e696168 	cdpvs	1, 6, cr6, cr9, cr8, {3}
  18:	2e343120 	cdpcs	1, 3, cr3, cr4, cr0, {1}
  1c:	65522e33 	ldrbvs	r2, [r2, #-3635]	@ 0xfffff1cd
  20:	2820316c 	stmdacs	r0!, {r2, r3, r5, r6, r8, ip, sp}
  24:	6c697542 	stclvs	5, cr7, [r9], #-264	@ 0xfffffef8
  28:	72612064 	rsbvc	r2, r1, #100	@ 0x64
  2c:	34312d6d 	ldrtcc	r2, [r1], #-3437	@ 0xfffff293
  30:	3437312e 	ldrtcc	r3, [r7], #-302	@ 0xfffffed2
  34:	31202929 			@ <UNDEFINED> instruction: 0x31202929
  38:	2e332e34 	mrccs	14, 1, r2, cr3, cr4, {1}
  3c:	30322031 	eorscc	r2, r2, r1, lsr r0
  40:	36303532 			@ <UNDEFINED> instruction: 0x36303532
  44:	Address 0x44 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002b41 	andeq	r2, r0, r1, asr #22
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000021 	andeq	r0, r0, r1, lsr #32
  10:	45543505 	ldrbmi	r3, [r4, #-1285]	@ 0xfffffafb
  14:	0506004a 	streq	r0, [r6, #-74]	@ 0xffffffb6
  18:	01090108 	tsteq	r9, r8, lsl #2
  1c:	01140412 	tsteq	r4, r2, lsl r4
  20:	03170115 	tsteq	r7, #1073741829	@ 0x40000005
  24:	01190118 	tsteq	r9, r8, lsl r1
  28:	061e011a 			@ <UNDEFINED> instruction: 0x061e011a
