.text
.text
.globl f
.align 2
.type f, @function
f:
s.li s23, 100
s.li s0, 4144
s.li sp, 4144
s.addi sp, sp, -144
s.sw ra, 140(sp)
s.sw s0, 136(sp)
s.addi s0, sp, 144
s.li s2, 50
s.sw s2, 132(sp)
s.li s3, 16264
s.li s2, 16280
s.sw s2, 0(s3)
s.li s3, 16008
s.li s2, 16024
s.sw s2, 0(s3)
s.li s3, 15752
s.li s2, 15768
s.sw s2, 0(s3)
s.li s3, 15496
s.li s2, 15512
s.sw s2, 0(s3)
s.li s3, 15240
s.li s2, 15256
s.sw s2, 0(s3)
s.li s3, 16152
s.li s2, 15
s.sw s2, 0(s3)
s.li s3, 16160
s.li s2, 0
s.sw s2, 0(s3)
s.li s3, 15896
s.li s2, 0
s.sw s2, 0(s3)
s.li s3, 15640
s.li s2, 1
s.sw s2, 0(s3)
s.li s3, 15384
s.li s2, 2
s.sw s2, 0(s3)
s.li s3, 15128
s.li s2, 3
s.sw s2, 0(s3)
s.li s3, 16268
s.sw sp, 0(s3)
s.li s3, 16012
s.sw sp, 0(s3)
s.li s3, 15756
s.sw sp, 0(s3)
s.li s3, 15500
s.sw sp, 0(s3)
s.li s3, 15244
s.sw sp, 0(s3)
s.li s3, 16272
s.sw ra, 0(s3)
s.li s3, 16252
s.sw s0, 0(s3)
s.li s3, 15996
s.sw s0, 0(s3)
s.li s3, 15740
s.sw s0, 0(s3)
s.li s3, 15484
s.sw s0, 0(s3)
s.li s3, 15228
s.sw s0, 0(s3)
sync start0
s.li s3, 16156
s.sw s25, 0(s3)
s.li s2, 16264
s.lw gp, 0(s2)
s.li s2, 16180
s.lw s24, 0(s2)
s.li s2, 16176
s.lw s25, 0(s2)
s.li s2, 16172
s.lw s26, 0(s2)
v.li v1, 16012
v.lw sp, 0(v1)
v.li v1, 16008
v.lw gp, 0(v1)
v.li v1, 15996
v.lw v0, 0(v1)
v.li v1, 15896
v.lw v26, 0(v1)
v.li v2, 15756
v.lw sp, 0(v2)
v.li v2, 15752
v.lw gp, 0(v2)
v.li v2, 15740
v.lw v0, 0(v2)
v.li v2, 15640
v.lw v26, 0(v2)
v.li v3, 15500
v.lw sp, 0(v3)
v.li v3, 15496
v.lw gp, 0(v3)
v.li v3, 15484
v.lw v0, 0(v3)
v.li v3, 15384
v.lw v26, 0(v3)
v.li v4, 15244
v.lw sp, 0(v4)
v.li v4, 15240
v.lw gp, 0(v4)
v.li v4, 15228
v.lw v0, 0(v4)
v.li v4, 15128
v.lw v26, 0(v4)
start0: 
s.lw s1, 132(sp)
j f_end
f_end:
s.lw s0, 136(sp)
s.lw ra, 140(sp)
s.addi sp, sp, 144
s.li s5, 5
s.sw s5, 0(s23)
exit
.size f, .-f

	.section .rodata

	.data