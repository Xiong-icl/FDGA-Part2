s.li sp, 42
v.li v2, 20
lui v1, %hi(.LC0)
v.flw fv1, %lo(.LC0)(v1)
v.fsw fv1, 4(v2)
lui v1, %hi(.LC1)
v.flw fv1, %lo(.LC1)(v1)
v.fsw fv1, 8(v2)
v.flw fv1, 4(v2)
v.flw fv2, 8(v2)
sx.flt s26, fv2, fv1  
s.sw s26, 0(sp)
exit

.section .rodata 
.align 2
.LC0:
	.word 1065353216
	.align 2
.LC1:
	.word 1073741824
	.align 2