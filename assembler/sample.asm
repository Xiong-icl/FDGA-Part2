s.li s23, 100
s.li s0, 5004
s.li sp, 5004
s.addi sp, sp, -1004
s.sw ra, 1000(sp)
s.sw s0, 996(sp)
s.addi s0, sp, 1004
s.li s2, 2
s.sw s2, 860(sp)
s.li s2, 9
s.sw s2, 856(sp)
s.li s2, 1
s.sw s2, 624(sp)
s.li s2, 0
s.sw s2, 632(sp)
for_start0:
s.lw s3, 632(sp)
s.li s4, 3
s.slt s2, s3, s4
s.beqz s2, for_end1
s.li s2, 1
s.slli s2, s2, 2
s.li s3, 996
s.sub s2, s3, s2
s.add s2, s2, sp
s.flw fs1, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s3, 900
s.sub s2, s3, s2
s.add s2, s2, sp
s.fsw fs1, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s3, 984
s.sub s2, s3, s2
s.add s2, s2, sp
s.flw fs1, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s3, 888
s.sub s2, s3, s2
s.add s2, s2, sp
s.fsw fs1, 0(s2)
s.li s2, 0
s.li s3, 1
s.slli s3, s3, 2
s.li s4, 876
s.sub s3, s4, s3
s.add s3, s3, sp
s.sw s2, 0(s3)
for_update2:
s.lw s2, 632(sp)
s.addi s3, s2, 1
s.sw s3, 632(sp)
s.j for_start0
for_end1:
s.li s4, 16264
s.li s2, 16280
s.sw s2, 0(s4)
s.li s4, 16008
s.li s2, 16024
s.sw s2, 0(s4)
s.li s4, 15752
s.li s2, 15768
s.sw s2, 0(s4)
s.li s4, 15496
s.li s2, 15512
s.sw s2, 0(s4)
s.li s4, 15240
s.li s2, 15256
s.sw s2, 0(s4)
s.li s4, 16152
s.li s2, 15
s.sw s2, 0(s4)
s.li s4, 16160
s.li s2, 0
s.sw s2, 0(s4)
s.li s4, 15896
s.li s2, 0
s.sw s2, 0(s4)
s.li s4, 15640
s.li s2, 1
s.sw s2, 0(s4)
s.li s4, 15384
s.li s2, 2
s.sw s2, 0(s4)
s.li s4, 15128
s.li s2, 3
s.sw s2, 0(s4)
s.li s4, 16268
s.sw sp, 0(s4)
s.li s4, 16012
s.sw sp, 0(s4)
s.li s4, 15756
s.sw sp, 0(s4)
s.li s4, 15500
s.sw sp, 0(s4)
s.li s4, 15244
s.sw sp, 0(s4)
s.li s4, 16272
s.sw ra, 0(s4)
s.li s4, 16252
s.sw s0, 0(s4)
s.li s4, 15996
s.sw s0, 0(s4)
s.li s4, 15740
s.sw s0, 0(s4)
s.li s4, 15484
s.sw s0, 0(s4)
s.li s4, 15228
s.sw s0, 0(s4)
sync kernel_start3
s.li s4, 16156
s.sw s25, 0(s4)
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
s.j kernel_start3
warp_switch4:
s.seqi v5, s24, 0
s.beqz v5, warp_check8
s.li s2, 16148
s.li t0, 1
s.sw t0, 0(s2)
s.li s2, 16276
s.sw zero, 0(s2)
s.li s2, 16272
s.sw ra, 0(s2)
s.li s2, 16268
s.sw sp, 0(s2)
s.li s2, 16264
s.sw gp, 0(s2)
s.li s2, 16260
s.sw tp, 0(s2)
s.li s2, 16256
s.sw s0, 0(s2)
s.li s2, 16252
s.sw s1, 0(s2)
s.li s2, 16248
s.sw s2, 0(s2)
s.li s2, 16244
s.sw s3, 0(s2)
s.li s2, 16156
s.sw s25, 0(s2)
s.li s2, 16152
s.sw s26, 0(s2)
s.li s2, 16024
s.fsw fs31, 0(s2)
v.li v6, 16020
v.sw zero, 0(v6)
v.li v6, 16016
v.sw ra, 0(v6)
v.li v6, 16012
v.sw sp, 0(v6)
v.li v6, 16008
v.sw gp, 0(v6)
v.li v6, 16004
v.sw tp, 0(v6)
v.li v6, 16000
v.sw v0, 0(v6)
v.li v6, 15996
v.sw v1, 0(v6)
v.li v6, 15992
v.sw v2, 0(v6)
v.li v6, 15988
v.sw v3, 0(v6)
v.li v6, 15984
v.sw v4, 0(v6)
v.li v6, 15980
v.sw v5, 0(v6)
v.li v6, 15976
v.sw v6, 0(v6)
v.li v6, 15972
v.sw v7, 0(v6)
v.li v6, 15968
v.sw v8, 0(v6)
v.li v6, 15964
v.sw v9, 0(v6)
v.li v6, 15960
v.sw v10, 0(v6)
v.li v6, 15956
v.sw v11, 0(v6)
v.li v6, 15952
v.sw v12, 0(v6)
v.li v6, 15948
v.sw v13, 0(v6)
v.li v6, 15944
v.sw v14, 0(v6)
v.li v6, 15940
v.sw v15, 0(v6)
v.li v6, 15936
v.sw v16, 0(v6)
v.li v6, 15932
v.sw v17, 0(v6)
v.li v6, 15928
v.sw v18, 0(v6)
v.li v6, 15924
v.sw v19, 0(v6)
v.li v6, 15920
v.sw v20, 0(v6)
v.li v6, 15916
v.sw v21, 0(v6)
v.li v6, 15912
v.sw v22, 0(v6)
v.li v6, 15908
v.sw v23, 0(v6)
v.li v6, 15904
v.sw v24, 0(v6)
v.li v6, 15900
v.sw v25, 0(v6)
v.li v6, 15896
v.sw v26, 0(v6)
v.li v6, 15892
v.fsw fv0, 0(v6)
v.li v6, 15888
v.fsw fv1, 0(v6)
v.li v6, 15884
v.fsw fv2, 0(v6)
v.li v6, 15880
v.fsw fv3, 0(v6)
v.li v6, 15876
v.fsw fv4, 0(v6)
v.li v6, 15872
v.fsw fv5, 0(v6)
v.li v6, 15868
v.fsw fv6, 0(v6)
v.li v6, 15864
v.fsw fv7, 0(v6)
v.li v6, 15860
v.fsw fv8, 0(v6)
v.li v6, 15856
v.fsw fv9, 0(v6)
v.li v6, 15852
v.fsw fv10, 0(v6)
v.li v6, 15848
v.fsw fv11, 0(v6)
v.li v6, 15844
v.fsw fv12, 0(v6)
v.li v6, 15840
v.fsw fv13, 0(v6)
v.li v6, 15836
v.fsw fv14, 0(v6)
v.li v6, 15832
v.fsw fv15, 0(v6)
v.li v6, 15828
v.fsw fv16, 0(v6)
v.li v6, 15824
v.fsw fv17, 0(v6)
v.li v6, 15820
v.fsw fv18, 0(v6)
v.li v6, 15816
v.fsw fv19, 0(v6)
v.li v6, 15812
v.fsw fv20, 0(v6)
v.li v6, 15808
v.fsw fv21, 0(v6)
v.li v6, 15804
v.fsw fv22, 0(v6)
v.li v6, 15800
v.fsw fv23, 0(v6)
v.li v6, 15796
v.fsw fv24, 0(v6)
v.li v6, 15792
v.fsw fv25, 0(v6)
v.li v6, 15788
v.fsw fv26, 0(v6)
v.li v6, 15784
v.fsw fv27, 0(v6)
v.li v6, 15780
v.fsw fv28, 0(v6)
v.li v6, 15776
v.fsw fv29, 0(v6)
v.li v6, 15772
v.fsw fv30, 0(v6)
v.li v6, 15768
v.fsw fv31, 0(v6)
v.li v1, 15764
v.sw zero, 0(v1)
v.li v1, 15760
v.sw ra, 0(v1)
v.li v1, 15756
v.sw sp, 0(v1)
v.li v1, 15752
v.sw gp, 0(v1)
v.li v1, 15748
v.sw tp, 0(v1)
v.li v1, 15744
v.sw v0, 0(v1)
v.li v1, 15740
v.sw v1, 0(v1)
v.li v1, 15736
v.sw v2, 0(v1)
v.li v1, 15732
v.sw v3, 0(v1)
v.li v1, 15728
v.sw v4, 0(v1)
v.li v1, 15724
v.sw v5, 0(v1)
v.li v1, 15720
v.sw v6, 0(v1)
v.li v1, 15716
v.sw v7, 0(v1)
v.li v1, 15712
v.sw v8, 0(v1)
v.li v1, 15708
v.sw v9, 0(v1)
v.li v1, 15704
v.sw v10, 0(v1)
v.li v1, 15700
v.sw v11, 0(v1)
v.li v1, 15696
v.sw v12, 0(v1)
v.li v1, 15692
v.sw v13, 0(v1)
v.li v1, 15688
v.sw v14, 0(v1)
v.li v1, 15684
v.sw v15, 0(v1)
v.li v1, 15680
v.sw v16, 0(v1)
v.li v1, 15676
v.sw v17, 0(v1)
v.li v1, 15672
v.sw v18, 0(v1)
v.li v1, 15668
v.sw v19, 0(v1)
v.li v1, 15664
v.sw v20, 0(v1)
v.li v1, 15660
v.sw v21, 0(v1)
v.li v1, 15656
v.sw v22, 0(v1)
v.li v1, 15652
v.sw v23, 0(v1)
v.li v1, 15648
v.sw v24, 0(v1)
v.li v1, 15644
v.sw v25, 0(v1)
v.li v1, 15640
v.sw v26, 0(v1)
v.li v1, 15636
v.fsw fv0, 0(v1)
v.li v1, 15632
v.fsw fv1, 0(v1)
v.li v1, 15628
v.fsw fv2, 0(v1)
v.li v1, 15624
v.fsw fv3, 0(v1)
v.li v1, 15620
v.fsw fv4, 0(v1)
v.li v1, 15616
v.fsw fv5, 0(v1)
v.li v1, 15612
v.fsw fv6, 0(v1)
v.li v1, 15608
v.fsw fv7, 0(v1)
v.li v1, 15604
v.fsw fv8, 0(v1)
v.li v1, 15600
v.fsw fv9, 0(v1)
v.li v1, 15596
v.fsw fv10, 0(v1)
v.li v1, 15592
v.fsw fv11, 0(v1)
v.li v1, 15588
v.fsw fv12, 0(v1)
v.li v1, 15584
v.fsw fv13, 0(v1)
v.li v1, 15580
v.fsw fv14, 0(v1)
v.li v1, 15576
v.fsw fv15, 0(v1)
v.li v1, 15572
v.fsw fv16, 0(v1)
v.li v1, 15568
v.fsw fv17, 0(v1)
v.li v1, 15564
v.fsw fv18, 0(v1)
v.li v1, 15560
v.fsw fv19, 0(v1)
v.li v1, 15556
v.fsw fv20, 0(v1)
v.li v1, 15552
v.fsw fv21, 0(v1)
v.li v1, 15548
v.fsw fv22, 0(v1)
v.li v1, 15544
v.fsw fv23, 0(v1)
v.li v1, 15540
v.fsw fv24, 0(v1)
v.li v1, 15536
v.fsw fv25, 0(v1)
v.li v1, 15532
v.fsw fv26, 0(v1)
v.li v1, 15528
v.fsw fv27, 0(v1)
v.li v1, 15524
v.fsw fv28, 0(v1)
v.li v1, 15520
v.fsw fv29, 0(v1)
v.li v1, 15516
v.fsw fv30, 0(v1)
v.li v1, 15512
v.fsw fv31, 0(v1)
v.li v1, 15508
v.sw zero, 0(v1)
v.li v1, 15504
v.sw ra, 0(v1)
v.li v1, 15500
v.sw sp, 0(v1)
v.li v1, 15496
v.sw gp, 0(v1)
v.li v1, 15492
v.sw tp, 0(v1)
v.li v1, 15488
v.sw v0, 0(v1)
v.li v1, 15484
v.sw v1, 0(v1)
v.li v1, 15480
v.sw v2, 0(v1)
v.li v1, 15476
v.sw v3, 0(v1)
v.li v1, 15472
v.sw v4, 0(v1)
v.li v1, 15468
v.sw v5, 0(v1)
v.li v1, 15464
v.sw v6, 0(v1)
v.li v1, 15460
v.sw v7, 0(v1)
v.li v1, 15456
v.sw v8, 0(v1)
v.li v1, 15452
v.sw v9, 0(v1)
v.li v1, 15448
v.sw v10, 0(v1)
v.li v1, 15444
v.sw v11, 0(v1)
v.li v1, 15440
v.sw v12, 0(v1)
v.li v1, 15436
v.sw v13, 0(v1)
v.li v1, 15432
v.sw v14, 0(v1)
v.li v1, 15428
v.sw v15, 0(v1)
v.li v1, 15424
v.sw v16, 0(v1)
v.li v1, 15420
v.sw v17, 0(v1)
v.li v1, 15416
v.sw v18, 0(v1)
v.li v1, 15412
v.sw v19, 0(v1)
v.li v1, 15408
v.sw v20, 0(v1)
v.li v1, 15404
v.sw v21, 0(v1)
v.li v1, 15400
v.sw v22, 0(v1)
v.li v1, 15396
v.sw v23, 0(v1)
v.li v1, 15392
v.sw v24, 0(v1)
v.li v1, 15388
v.sw v25, 0(v1)
v.li v1, 15384
v.sw v26, 0(v1)
v.li v1, 15380
v.fsw fv0, 0(v1)
v.li v1, 15376
v.fsw fv1, 0(v1)
v.li v1, 15372
v.fsw fv2, 0(v1)
v.li v1, 15368
v.fsw fv3, 0(v1)
v.li v1, 15364
v.fsw fv4, 0(v1)
v.li v1, 15360
v.fsw fv5, 0(v1)
v.li v1, 15356
v.fsw fv6, 0(v1)
v.li v1, 15352
v.fsw fv7, 0(v1)
v.li v1, 15348
v.fsw fv8, 0(v1)
v.li v1, 15344
v.fsw fv9, 0(v1)
v.li v1, 15340
v.fsw fv10, 0(v1)
v.li v1, 15336
v.fsw fv11, 0(v1)
v.li v1, 15332
v.fsw fv12, 0(v1)
v.li v1, 15328
v.fsw fv13, 0(v1)
v.li v1, 15324
v.fsw fv14, 0(v1)
v.li v1, 15320
v.fsw fv15, 0(v1)
v.li v1, 15316
v.fsw fv16, 0(v1)
v.li v1, 15312
v.fsw fv17, 0(v1)
v.li v1, 15308
v.fsw fv18, 0(v1)
v.li v1, 15304
v.fsw fv19, 0(v1)
v.li v1, 15300
v.fsw fv20, 0(v1)
v.li v1, 15296
v.fsw fv21, 0(v1)
v.li v1, 15292
v.fsw fv22, 0(v1)
v.li v1, 15288
v.fsw fv23, 0(v1)
v.li v1, 15284
v.fsw fv24, 0(v1)
v.li v1, 15280
v.fsw fv25, 0(v1)
v.li v1, 15276
v.fsw fv26, 0(v1)
v.li v1, 15272
v.fsw fv27, 0(v1)
v.li v1, 15268
v.fsw fv28, 0(v1)
v.li v1, 15264
v.fsw fv29, 0(v1)
v.li v1, 15260
v.fsw fv30, 0(v1)
v.li v1, 15256
v.fsw fv31, 0(v1)
v.li v1, 15252
v.sw zero, 0(v1)
v.li v1, 15248
v.sw ra, 0(v1)
v.li v1, 15244
v.sw sp, 0(v1)
v.li v1, 15240
v.sw gp, 0(v1)
v.li v1, 15236
v.sw tp, 0(v1)
v.li v1, 15232
v.sw v0, 0(v1)
v.li v1, 15228
v.sw v1, 0(v1)
v.li v1, 15224
v.sw v2, 0(v1)
v.li v1, 15220
v.sw v3, 0(v1)
v.li v1, 15216
v.sw v4, 0(v1)
v.li v1, 15212
v.sw v5, 0(v1)
v.li v1, 15208
v.sw v6, 0(v1)
v.li v1, 15204
v.sw v7, 0(v1)
v.li v1, 15200
v.sw v8, 0(v1)
v.li v1, 15196
v.sw v9, 0(v1)
v.li v1, 15192
v.sw v10, 0(v1)
v.li v1, 15188
v.sw v11, 0(v1)
v.li v1, 15184
v.sw v12, 0(v1)
v.li v1, 15180
v.sw v13, 0(v1)
v.li v1, 15176
v.sw v14, 0(v1)
v.li v1, 15172
v.sw v15, 0(v1)
v.li v1, 15168
v.sw v16, 0(v1)
v.li v1, 15164
v.sw v17, 0(v1)
v.li v1, 15160
v.sw v18, 0(v1)
v.li v1, 15156
v.sw v19, 0(v1)
v.li v1, 15152
v.sw v20, 0(v1)
v.li v1, 15148
v.sw v21, 0(v1)
v.li v1, 15144
v.sw v22, 0(v1)
v.li v1, 15140
v.sw v23, 0(v1)
v.li v1, 15136
v.sw v24, 0(v1)
v.li v1, 15132
v.sw v25, 0(v1)
v.li v1, 15128
v.sw v26, 0(v1)
v.li v1, 15124
v.fsw fv0, 0(v1)
v.li v1, 15120
v.fsw fv1, 0(v1)
v.li v1, 15116
v.fsw fv2, 0(v1)
v.li v1, 15112
v.fsw fv3, 0(v1)
v.li v1, 15108
v.fsw fv4, 0(v1)
v.li v1, 15104
v.fsw fv5, 0(v1)
v.li v1, 15100
v.fsw fv6, 0(v1)
v.li v1, 15096
v.fsw fv7, 0(v1)
v.li v1, 15092
v.fsw fv8, 0(v1)
v.li v1, 15088
v.fsw fv9, 0(v1)
v.li v1, 15084
v.fsw fv10, 0(v1)
v.li v1, 15080
v.fsw fv11, 0(v1)
v.li v1, 15076
v.fsw fv12, 0(v1)
v.li v1, 15072
v.fsw fv13, 0(v1)
v.li v1, 15068
v.fsw fv14, 0(v1)
v.li v1, 15064
v.fsw fv15, 0(v1)
v.li v1, 15060
v.fsw fv16, 0(v1)
v.li v1, 15056
v.fsw fv17, 0(v1)
v.li v1, 15052
v.fsw fv18, 0(v1)
v.li v1, 15048
v.fsw fv19, 0(v1)
v.li v1, 15044
v.fsw fv20, 0(v1)
v.li v1, 15040
v.fsw fv21, 0(v1)
v.li v1, 15036
v.fsw fv22, 0(v1)
v.li v1, 15032
v.fsw fv23, 0(v1)
v.li v1, 15028
v.fsw fv24, 0(v1)
v.li v1, 15024
v.fsw fv25, 0(v1)
v.li v1, 15020
v.fsw fv26, 0(v1)
v.li v1, 15016
v.fsw fv27, 0(v1)
v.li v1, 15012
v.fsw fv28, 0(v1)
v.li v1, 15008
v.fsw fv29, 0(v1)
v.li v1, 15004
v.fsw fv30, 0(v1)
v.li v1, 15000
v.fsw fv31, 0(v1)
s.j load_next_warp6
warp_check8:
load_next_warp6:
s.li v1, 16148
s.lw v1, 0(v1)
s.beqz v1, load_warp_010
s.j no_more_warps9
load_warp_010:
s.li s2, 16276
s.lw zero, 0(s2)
s.li s2, 16272
s.lw ra, 0(s2)
s.li s2, 16268
s.lw sp, 0(s2)
s.li s2, 16264
s.lw gp, 0(s2)
s.li s2, 16260
s.lw tp, 0(s2)
s.li s2, 16256
s.lw s0, 0(s2)
s.li s2, 16252
s.lw s1, 0(s2)
s.li s2, 16248
s.lw s2, 0(s2)
s.li s2, 16244
s.lw s3, 0(s2)
s.li s2, 16156
s.lw s25, 0(s2)
s.li s2, 16152
s.lw s26, 0(s2)
s.li s2, 16024
s.flw fs31, 0(s2)
v.li v6, 16020
v.lw zero, 0(v6)
v.li v6, 16016
v.lw ra, 0(v6)
v.li v6, 16012
v.lw sp, 0(v6)
v.li v6, 16008
v.lw gp, 0(v6)
v.li v6, 16004
v.lw tp, 0(v6)
v.li v6, 16000
v.lw v0, 0(v6)
v.li v6, 15996
v.lw v1, 0(v6)
v.li v6, 15992
v.lw v2, 0(v6)
v.li v6, 15988
v.lw v3, 0(v6)
v.li v6, 15984
v.lw v4, 0(v6)
v.li v6, 15980
v.lw v5, 0(v6)
v.li v6, 15976
v.lw v6, 0(v6)
v.li v6, 15972
v.lw v7, 0(v6)
v.li v6, 15968
v.lw v8, 0(v6)
v.li v6, 15964
v.lw v9, 0(v6)
v.li v6, 15960
v.lw v10, 0(v6)
v.li v6, 15956
v.lw v11, 0(v6)
v.li v6, 15952
v.lw v12, 0(v6)
v.li v6, 15948
v.lw v13, 0(v6)
v.li v6, 15944
v.lw v14, 0(v6)
v.li v6, 15940
v.lw v15, 0(v6)
v.li v6, 15936
v.lw v16, 0(v6)
v.li v6, 15932
v.lw v17, 0(v6)
v.li v6, 15928
v.lw v18, 0(v6)
v.li v6, 15924
v.lw v19, 0(v6)
v.li v6, 15920
v.lw v20, 0(v6)
v.li v6, 15916
v.lw v21, 0(v6)
v.li v6, 15912
v.lw v22, 0(v6)
v.li v6, 15908
v.lw v23, 0(v6)
v.li v6, 15904
v.lw v24, 0(v6)
v.li v6, 15900
v.lw v25, 0(v6)
v.li v6, 15896
v.lw v26, 0(v6)
v.li v6, 15892
v.flw fv0, 0(v6)
v.li v6, 15888
v.flw fv1, 0(v6)
v.li v6, 15884
v.flw fv2, 0(v6)
v.li v6, 15880
v.flw fv3, 0(v6)
v.li v6, 15876
v.flw fv4, 0(v6)
v.li v6, 15872
v.flw fv5, 0(v6)
v.li v6, 15868
v.flw fv6, 0(v6)
v.li v6, 15864
v.flw fv7, 0(v6)
v.li v6, 15860
v.flw fv8, 0(v6)
v.li v6, 15856
v.flw fv9, 0(v6)
v.li v6, 15852
v.flw fv10, 0(v6)
v.li v6, 15848
v.flw fv11, 0(v6)
v.li v6, 15844
v.flw fv12, 0(v6)
v.li v6, 15840
v.flw fv13, 0(v6)
v.li v6, 15836
v.flw fv14, 0(v6)
v.li v6, 15832
v.flw fv15, 0(v6)
v.li v6, 15828
v.flw fv16, 0(v6)
v.li v6, 15824
v.flw fv17, 0(v6)
v.li v6, 15820
v.flw fv18, 0(v6)
v.li v6, 15816
v.flw fv19, 0(v6)
v.li v6, 15812
v.flw fv20, 0(v6)
v.li v6, 15808
v.flw fv21, 0(v6)
v.li v6, 15804
v.flw fv22, 0(v6)
v.li v6, 15800
v.flw fv23, 0(v6)
v.li v6, 15796
v.flw fv24, 0(v6)
v.li v6, 15792
v.flw fv25, 0(v6)
v.li v6, 15788
v.flw fv26, 0(v6)
v.li v6, 15784
v.flw fv27, 0(v6)
v.li v6, 15780
v.flw fv28, 0(v6)
v.li v6, 15776
v.flw fv29, 0(v6)
v.li v6, 15772
v.flw fv30, 0(v6)
v.li v6, 15768
v.flw fv31, 0(v6)
v.li v1, 15764
v.lw zero, 0(v1)
v.li v1, 15760
v.lw ra, 0(v1)
v.li v1, 15756
v.lw sp, 0(v1)
v.li v1, 15752
v.lw gp, 0(v1)
v.li v1, 15748
v.lw tp, 0(v1)
v.li v1, 15744
v.lw v0, 0(v1)
v.li v1, 15740
v.lw v1, 0(v1)
v.li v1, 15736
v.lw v2, 0(v1)
v.li v1, 15732
v.lw v3, 0(v1)
v.li v1, 15728
v.lw v4, 0(v1)
v.li v1, 15724
v.lw v5, 0(v1)
v.li v1, 15720
v.lw v6, 0(v1)
v.li v1, 15716
v.lw v7, 0(v1)
v.li v1, 15712
v.lw v8, 0(v1)
v.li v1, 15708
v.lw v9, 0(v1)
v.li v1, 15704
v.lw v10, 0(v1)
v.li v1, 15700
v.lw v11, 0(v1)
v.li v1, 15696
v.lw v12, 0(v1)
v.li v1, 15692
v.lw v13, 0(v1)
v.li v1, 15688
v.lw v14, 0(v1)
v.li v1, 15684
v.lw v15, 0(v1)
v.li v1, 15680
v.lw v16, 0(v1)
v.li v1, 15676
v.lw v17, 0(v1)
v.li v1, 15672
v.lw v18, 0(v1)
v.li v1, 15668
v.lw v19, 0(v1)
v.li v1, 15664
v.lw v20, 0(v1)
v.li v1, 15660
v.lw v21, 0(v1)
v.li v1, 15656
v.lw v22, 0(v1)
v.li v1, 15652
v.lw v23, 0(v1)
v.li v1, 15648
v.lw v24, 0(v1)
v.li v1, 15644
v.lw v25, 0(v1)
v.li v1, 15640
v.lw v26, 0(v1)
v.li v1, 15636
v.flw fv0, 0(v1)
v.li v1, 15632
v.flw fv1, 0(v1)
v.li v1, 15628
v.flw fv2, 0(v1)
v.li v1, 15624
v.flw fv3, 0(v1)
v.li v1, 15620
v.flw fv4, 0(v1)
v.li v1, 15616
v.flw fv5, 0(v1)
v.li v1, 15612
v.flw fv6, 0(v1)
v.li v1, 15608
v.flw fv7, 0(v1)
v.li v1, 15604
v.flw fv8, 0(v1)
v.li v1, 15600
v.flw fv9, 0(v1)
v.li v1, 15596
v.flw fv10, 0(v1)
v.li v1, 15592
v.flw fv11, 0(v1)
v.li v1, 15588
v.flw fv12, 0(v1)
v.li v1, 15584
v.flw fv13, 0(v1)
v.li v1, 15580
v.flw fv14, 0(v1)
v.li v1, 15576
v.flw fv15, 0(v1)
v.li v1, 15572
v.flw fv16, 0(v1)
v.li v1, 15568
v.flw fv17, 0(v1)
v.li v1, 15564
v.flw fv18, 0(v1)
v.li v1, 15560
v.flw fv19, 0(v1)
v.li v1, 15556
v.flw fv20, 0(v1)
v.li v1, 15552
v.flw fv21, 0(v1)
v.li v1, 15548
v.flw fv22, 0(v1)
v.li v1, 15544
v.flw fv23, 0(v1)
v.li v1, 15540
v.flw fv24, 0(v1)
v.li v1, 15536
v.flw fv25, 0(v1)
v.li v1, 15532
v.flw fv26, 0(v1)
v.li v1, 15528
v.flw fv27, 0(v1)
v.li v1, 15524
v.flw fv28, 0(v1)
v.li v1, 15520
v.flw fv29, 0(v1)
v.li v1, 15516
v.flw fv30, 0(v1)
v.li v1, 15512
v.flw fv31, 0(v1)
v.li v1, 15508
v.lw zero, 0(v1)
v.li v1, 15504
v.lw ra, 0(v1)
v.li v1, 15500
v.lw sp, 0(v1)
v.li v1, 15496
v.lw gp, 0(v1)
v.li v1, 15492
v.lw tp, 0(v1)
v.li v1, 15488
v.lw v0, 0(v1)
v.li v1, 15484
v.lw v1, 0(v1)
v.li v1, 15480
v.lw v2, 0(v1)
v.li v1, 15476
v.lw v3, 0(v1)
v.li v1, 15472
v.lw v4, 0(v1)
v.li v1, 15468
v.lw v5, 0(v1)
v.li v1, 15464
v.lw v6, 0(v1)
v.li v1, 15460
v.lw v7, 0(v1)
v.li v1, 15456
v.lw v8, 0(v1)
v.li v1, 15452
v.lw v9, 0(v1)
v.li v1, 15448
v.lw v10, 0(v1)
v.li v1, 15444
v.lw v11, 0(v1)
v.li v1, 15440
v.lw v12, 0(v1)
v.li v1, 15436
v.lw v13, 0(v1)
v.li v1, 15432
v.lw v14, 0(v1)
v.li v1, 15428
v.lw v15, 0(v1)
v.li v1, 15424
v.lw v16, 0(v1)
v.li v1, 15420
v.lw v17, 0(v1)
v.li v1, 15416
v.lw v18, 0(v1)
v.li v1, 15412
v.lw v19, 0(v1)
v.li v1, 15408
v.lw v20, 0(v1)
v.li v1, 15404
v.lw v21, 0(v1)
v.li v1, 15400
v.lw v22, 0(v1)
v.li v1, 15396
v.lw v23, 0(v1)
v.li v1, 15392
v.lw v24, 0(v1)
v.li v1, 15388
v.lw v25, 0(v1)
v.li v1, 15384
v.lw v26, 0(v1)
v.li v1, 15380
v.flw fv0, 0(v1)
v.li v1, 15376
v.flw fv1, 0(v1)
v.li v1, 15372
v.flw fv2, 0(v1)
v.li v1, 15368
v.flw fv3, 0(v1)
v.li v1, 15364
v.flw fv4, 0(v1)
v.li v1, 15360
v.flw fv5, 0(v1)
v.li v1, 15356
v.flw fv6, 0(v1)
v.li v1, 15352
v.flw fv7, 0(v1)
v.li v1, 15348
v.flw fv8, 0(v1)
v.li v1, 15344
v.flw fv9, 0(v1)
v.li v1, 15340
v.flw fv10, 0(v1)
v.li v1, 15336
v.flw fv11, 0(v1)
v.li v1, 15332
v.flw fv12, 0(v1)
v.li v1, 15328
v.flw fv13, 0(v1)
v.li v1, 15324
v.flw fv14, 0(v1)
v.li v1, 15320
v.flw fv15, 0(v1)
v.li v1, 15316
v.flw fv16, 0(v1)
v.li v1, 15312
v.flw fv17, 0(v1)
v.li v1, 15308
v.flw fv18, 0(v1)
v.li v1, 15304
v.flw fv19, 0(v1)
v.li v1, 15300
v.flw fv20, 0(v1)
v.li v1, 15296
v.flw fv21, 0(v1)
v.li v1, 15292
v.flw fv22, 0(v1)
v.li v1, 15288
v.flw fv23, 0(v1)
v.li v1, 15284
v.flw fv24, 0(v1)
v.li v1, 15280
v.flw fv25, 0(v1)
v.li v1, 15276
v.flw fv26, 0(v1)
v.li v1, 15272
v.flw fv27, 0(v1)
v.li v1, 15268
v.flw fv28, 0(v1)
v.li v1, 15264
v.flw fv29, 0(v1)
v.li v1, 15260
v.flw fv30, 0(v1)
v.li v1, 15256
v.flw fv31, 0(v1)
v.li v1, 15252
v.lw zero, 0(v1)
v.li v1, 15248
v.lw ra, 0(v1)
v.li v1, 15244
v.lw sp, 0(v1)
v.li v1, 15240
v.lw gp, 0(v1)
v.li v1, 15236
v.lw tp, 0(v1)
v.li v1, 15232
v.lw v0, 0(v1)
v.li v1, 15228
v.lw v1, 0(v1)
v.li v1, 15224
v.lw v2, 0(v1)
v.li v1, 15220
v.lw v3, 0(v1)
v.li v1, 15216
v.lw v4, 0(v1)
v.li v1, 15212
v.lw v5, 0(v1)
v.li v1, 15208
v.lw v6, 0(v1)
v.li v1, 15204
v.lw v7, 0(v1)
v.li v1, 15200
v.lw v8, 0(v1)
v.li v1, 15196
v.lw v9, 0(v1)
v.li v1, 15192
v.lw v10, 0(v1)
v.li v1, 15188
v.lw v11, 0(v1)
v.li v1, 15184
v.lw v12, 0(v1)
v.li v1, 15180
v.lw v13, 0(v1)
v.li v1, 15176
v.lw v14, 0(v1)
v.li v1, 15172
v.lw v15, 0(v1)
v.li v1, 15168
v.lw v16, 0(v1)
v.li v1, 15164
v.lw v17, 0(v1)
v.li v1, 15160
v.lw v18, 0(v1)
v.li v1, 15156
v.lw v19, 0(v1)
v.li v1, 15152
v.lw v20, 0(v1)
v.li v1, 15148
v.lw v21, 0(v1)
v.li v1, 15144
v.lw v22, 0(v1)
v.li v1, 15140
v.lw v23, 0(v1)
v.li v1, 15136
v.lw v24, 0(v1)
v.li v1, 15132
v.lw v25, 0(v1)
v.li v1, 15128
v.lw v26, 0(v1)
v.li v1, 15124
v.flw fv0, 0(v1)
v.li v1, 15120
v.flw fv1, 0(v1)
v.li v1, 15116
v.flw fv2, 0(v1)
v.li v1, 15112
v.flw fv3, 0(v1)
v.li v1, 15108
v.flw fv4, 0(v1)
v.li v1, 15104
v.flw fv5, 0(v1)
v.li v1, 15100
v.flw fv6, 0(v1)
v.li v1, 15096
v.flw fv7, 0(v1)
v.li v1, 15092
v.flw fv8, 0(v1)
v.li v1, 15088
v.flw fv9, 0(v1)
v.li v1, 15084
v.flw fv10, 0(v1)
v.li v1, 15080
v.flw fv11, 0(v1)
v.li v1, 15076
v.flw fv12, 0(v1)
v.li v1, 15072
v.flw fv13, 0(v1)
v.li v1, 15068
v.flw fv14, 0(v1)
v.li v1, 15064
v.flw fv15, 0(v1)
v.li v1, 15060
v.flw fv16, 0(v1)
v.li v1, 15056
v.flw fv17, 0(v1)
v.li v1, 15052
v.flw fv18, 0(v1)
v.li v1, 15048
v.flw fv19, 0(v1)
v.li v1, 15044
v.flw fv20, 0(v1)
v.li v1, 15040
v.flw fv21, 0(v1)
v.li v1, 15036
v.flw fv22, 0(v1)
v.li v1, 15032
v.flw fv23, 0(v1)
v.li v1, 15028
v.flw fv24, 0(v1)
v.li v1, 15024
v.flw fv25, 0(v1)
v.li v1, 15020
v.flw fv26, 0(v1)
v.li v1, 15016
v.flw fv27, 0(v1)
v.li v1, 15012
v.flw fv28, 0(v1)
v.li v1, 15008
v.flw fv29, 0(v1)
v.li v1, 15004
v.flw fv30, 0(v1)
v.li v1, 15000
v.flw fv31, 0(v1)
s.jalr zero, s25, 0
no_more_warps9:
s.j kernel_end5
kernel_start3:
v.addi v6, v26, 0
v.addi v7, v6, 0
v.li v6, 1
v.slli v6, v6, 2
v.li v8, 996
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv4, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 972
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.fsub.s fv3, fv4, fv5
v.fabs.s fv2, fv3
v.li v6, 1
v.slli v6, v6, 2
v.li v8, 984
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 936
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv6, 0(v6)
v.fsub.s fv4, fv5, fv6
v.fabs.s fv3, fv4
v.fadd.s fv1, fv2, fv3
v.li v6, 1
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v8, 620
v.sub v6, v8, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
v.li v6, 2
v.slli v6, v6, 2
v.li v8, 996
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv4, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 972
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.fsub.s fv3, fv4, fv5
v.fabs.s fv2, fv3
v.li v6, 2
v.slli v6, v6, 2
v.li v8, 984
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 936
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv6, 0(v6)
v.fsub.s fv4, fv5, fv6
v.fabs.s fv3, fv4
v.fadd.s fv1, fv2, fv3
v.li v6, 10
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v8, 620
v.sub v6, v8, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
v.li v6, 3
v.slli v6, v6, 2
v.li v8, 996
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv4, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 972
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.fsub.s fv3, fv4, fv5
v.fabs.s fv2, fv3
v.li v6, 3
v.slli v6, v6, 2
v.li v8, 984
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv5, 0(v6)
v.addi v8, v7, 1
v.slli v6, v8, 2
v.li v8, 936
v.sub v6, v8, v6
v.add v6, v6, sp
v.flw fv6, 0(v6)
v.fsub.s fv4, fv5, fv6
v.fabs.s fv3, fv4
v.fadd.s fv1, fv2, fv3
v.li v6, 19
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v8, 620
v.sub v6, v8, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
v.li v8, 1
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv1, 0(v8)
v.li v8, 10
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv2, 0(v8)
sx.slt s26, fv1, fv2
v.li v8, 1
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv1, 0(v8)
v.addi v9, v7, 1
v.slli v8, v9, 2
v.li v9, 188
v.sub v8, v9, v8
v.add v8, v8, sp
v.fsw fv1, 0(v8)
v.li v8, 0
v.addi v10, v7, 1
v.slli v9, v10, 2
v.li v10, 152
v.sub v9, v10, v9
v.add v9, v9, sp
v.sw v8, 0(v9)
s.neg s26, s26
v.li v8, 10
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv1, 0(v8)
v.addi v9, v7, 1
v.slli v8, v9, 2
v.li v9, 188
v.sub v8, v9, v8
v.add v8, v8, sp
v.fsw fv1, 0(v8)
v.li v8, 1
v.addi v10, v7, 1
v.slli v9, v10, 2
v.li v10, 152
v.sub v9, v10, v9
v.add v9, v9, sp
v.sw v8, 0(v9)
s.li s26, 15
v.li v8, 19
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv1, 0(v8)
v.addi v9, v7, 1
v.slli v8, v9, 2
v.li v9, 188
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv2, 0(v8)
sx.slt s26, fv1, fv2
v.li v8, 1
v.add v8, v8, v7
v.slli v8, v8, 2
v.li v9, 620
v.sub v8, v9, v8
v.add v8, v8, sp
v.flw fv1, 0(v8)
v.addi v9, v7, 1
v.slli v8, v9, 2
v.li v9, 188
v.sub v8, v9, v8
v.add v8, v8, sp
v.fsw fv1, 0(v8)
v.li v8, 2
v.addi v10, v7, 1
v.slli v9, v10, 2
v.li v10, 152
v.sub v9, v10, v9
v.add v9, v9, sp
v.sw v8, 0(v9)
s.neg s26, s26
s.li s26, 15
v.addi v9, v7, 1
v.slli v8, v9, 2
v.li v9, 152
v.sub v8, v9, v8
v.add v8, v8, sp
v.lw v6, 0(v8)
v.addi v8, v6, 0
v.addi v9, v7, 1
v.slli v6, v9, 2
v.li v9, 972
v.sub v6, v9, v6
v.add v6, v6, sp
v.flw fv1, 0(v6)
v.li v6, -17
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v9, 856
v.sub v6, v9, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
v.addi v9, v7, 1
v.slli v6, v9, 2
v.li v9, 936
v.sub v6, v9, v6
v.add v6, v6, sp
v.flw fv1, 0(v6)
v.li v6, -17
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v9, 748
v.sub v6, v9, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
v.lui v6, %hi(.LC0)
v.flw fv1, %lo(.LC0)(v6)
v.li v6, -17
v.add v6, v6, v7
v.slli v6, v6, 2
v.li v9, 512
v.sub v6, v9, v6
v.add v6, v6, sp
v.fsw fv1, 0(v6)
sync endsync11
s.li s2, 16276
s.sw zero, 0(s2)
s.li s2, 16272
s.sw ra, 0(s2)
s.li s2, 16268
s.sw sp, 0(s2)
s.li s2, 16264
s.sw gp, 0(s2)
s.li s2, 16260
s.sw tp, 0(s2)
s.li s2, 16256
s.sw s0, 0(s2)
s.li s2, 16252
s.sw s1, 0(s2)
s.li s2, 16248
s.sw s2, 0(s2)
s.li s2, 16244
s.sw s3, 0(s2)
s.li s2, 16156
s.sw s25, 0(s2)
s.li s2, 16152
s.sw s26, 0(s2)
s.li s2, 16024
s.fsw fs31, 0(s2)
v.li v6, 16020
v.sw zero, 0(v6)
v.li v6, 16016
v.sw ra, 0(v6)
v.li v6, 16012
v.sw sp, 0(v6)
v.li v6, 16008
v.sw gp, 0(v6)
v.li v6, 16004
v.sw tp, 0(v6)
v.li v6, 16000
v.sw v0, 0(v6)
v.li v6, 15996
v.sw v1, 0(v6)
v.li v6, 15992
v.sw v2, 0(v6)
v.li v6, 15988
v.sw v3, 0(v6)
v.li v6, 15984
v.sw v4, 0(v6)
v.li v6, 15980
v.sw v5, 0(v6)
v.li v6, 15976
v.sw v6, 0(v6)
v.li v6, 15972
v.sw v7, 0(v6)
v.li v6, 15968
v.sw v8, 0(v6)
v.li v6, 15964
v.sw v9, 0(v6)
v.li v6, 15960
v.sw v10, 0(v6)
v.li v6, 15956
v.sw v11, 0(v6)
v.li v6, 15952
v.sw v12, 0(v6)
v.li v6, 15948
v.sw v13, 0(v6)
v.li v6, 15944
v.sw v14, 0(v6)
v.li v6, 15940
v.sw v15, 0(v6)
v.li v6, 15936
v.sw v16, 0(v6)
v.li v6, 15932
v.sw v17, 0(v6)
v.li v6, 15928
v.sw v18, 0(v6)
v.li v6, 15924
v.sw v19, 0(v6)
v.li v6, 15920
v.sw v20, 0(v6)
v.li v6, 15916
v.sw v21, 0(v6)
v.li v6, 15912
v.sw v22, 0(v6)
v.li v6, 15908
v.sw v23, 0(v6)
v.li v6, 15904
v.sw v24, 0(v6)
v.li v6, 15900
v.sw v25, 0(v6)
v.li v6, 15896
v.sw v26, 0(v6)
v.li v6, 15892
v.fsw fv0, 0(v6)
v.li v6, 15888
v.fsw fv1, 0(v6)
v.li v6, 15884
v.fsw fv2, 0(v6)
v.li v6, 15880
v.fsw fv3, 0(v6)
v.li v6, 15876
v.fsw fv4, 0(v6)
v.li v6, 15872
v.fsw fv5, 0(v6)
v.li v6, 15868
v.fsw fv6, 0(v6)
v.li v6, 15864
v.fsw fv7, 0(v6)
v.li v6, 15860
v.fsw fv8, 0(v6)
v.li v6, 15856
v.fsw fv9, 0(v6)
v.li v6, 15852
v.fsw fv10, 0(v6)
v.li v6, 15848
v.fsw fv11, 0(v6)
v.li v6, 15844
v.fsw fv12, 0(v6)
v.li v6, 15840
v.fsw fv13, 0(v6)
v.li v6, 15836
v.fsw fv14, 0(v6)
v.li v6, 15832
v.fsw fv15, 0(v6)
v.li v6, 15828
v.fsw fv16, 0(v6)
v.li v6, 15824
v.fsw fv17, 0(v6)
v.li v6, 15820
v.fsw fv18, 0(v6)
v.li v6, 15816
v.fsw fv19, 0(v6)
v.li v6, 15812
v.fsw fv20, 0(v6)
v.li v6, 15808
v.fsw fv21, 0(v6)
v.li v6, 15804
v.fsw fv22, 0(v6)
v.li v6, 15800
v.fsw fv23, 0(v6)
v.li v6, 15796
v.fsw fv24, 0(v6)
v.li v6, 15792
v.fsw fv25, 0(v6)
v.li v6, 15788
v.fsw fv26, 0(v6)
v.li v6, 15784
v.fsw fv27, 0(v6)
v.li v6, 15780
v.fsw fv28, 0(v6)
v.li v6, 15776
v.fsw fv29, 0(v6)
v.li v6, 15772
v.fsw fv30, 0(v6)
v.li v6, 15768
v.fsw fv31, 0(v6)
v.li v1, 15764
v.sw zero, 0(v1)
v.li v1, 15760
v.sw ra, 0(v1)
v.li v1, 15756
v.sw sp, 0(v1)
v.li v1, 15752
v.sw gp, 0(v1)
v.li v1, 15748
v.sw tp, 0(v1)
v.li v1, 15744
v.sw v0, 0(v1)
v.li v1, 15740
v.sw v1, 0(v1)
v.li v1, 15736
v.sw v2, 0(v1)
v.li v1, 15732
v.sw v3, 0(v1)
v.li v1, 15728
v.sw v4, 0(v1)
v.li v1, 15724
v.sw v5, 0(v1)
v.li v1, 15720
v.sw v6, 0(v1)
v.li v1, 15716
v.sw v7, 0(v1)
v.li v1, 15712
v.sw v8, 0(v1)
v.li v1, 15708
v.sw v9, 0(v1)
v.li v1, 15704
v.sw v10, 0(v1)
v.li v1, 15700
v.sw v11, 0(v1)
v.li v1, 15696
v.sw v12, 0(v1)
v.li v1, 15692
v.sw v13, 0(v1)
v.li v1, 15688
v.sw v14, 0(v1)
v.li v1, 15684
v.sw v15, 0(v1)
v.li v1, 15680
v.sw v16, 0(v1)
v.li v1, 15676
v.sw v17, 0(v1)
v.li v1, 15672
v.sw v18, 0(v1)
v.li v1, 15668
v.sw v19, 0(v1)
v.li v1, 15664
v.sw v20, 0(v1)
v.li v1, 15660
v.sw v21, 0(v1)
v.li v1, 15656
v.sw v22, 0(v1)
v.li v1, 15652
v.sw v23, 0(v1)
v.li v1, 15648
v.sw v24, 0(v1)
v.li v1, 15644
v.sw v25, 0(v1)
v.li v1, 15640
v.sw v26, 0(v1)
v.li v1, 15636
v.fsw fv0, 0(v1)
v.li v1, 15632
v.fsw fv1, 0(v1)
v.li v1, 15628
v.fsw fv2, 0(v1)
v.li v1, 15624
v.fsw fv3, 0(v1)
v.li v1, 15620
v.fsw fv4, 0(v1)
v.li v1, 15616
v.fsw fv5, 0(v1)
v.li v1, 15612
v.fsw fv6, 0(v1)
v.li v1, 15608
v.fsw fv7, 0(v1)
v.li v1, 15604
v.fsw fv8, 0(v1)
v.li v1, 15600
v.fsw fv9, 0(v1)
v.li v1, 15596
v.fsw fv10, 0(v1)
v.li v1, 15592
v.fsw fv11, 0(v1)
v.li v1, 15588
v.fsw fv12, 0(v1)
v.li v1, 15584
v.fsw fv13, 0(v1)
v.li v1, 15580
v.fsw fv14, 0(v1)
v.li v1, 15576
v.fsw fv15, 0(v1)
v.li v1, 15572
v.fsw fv16, 0(v1)
v.li v1, 15568
v.fsw fv17, 0(v1)
v.li v1, 15564
v.fsw fv18, 0(v1)
v.li v1, 15560
v.fsw fv19, 0(v1)
v.li v1, 15556
v.fsw fv20, 0(v1)
v.li v1, 15552
v.fsw fv21, 0(v1)
v.li v1, 15548
v.fsw fv22, 0(v1)
v.li v1, 15544
v.fsw fv23, 0(v1)
v.li v1, 15540
v.fsw fv24, 0(v1)
v.li v1, 15536
v.fsw fv25, 0(v1)
v.li v1, 15532
v.fsw fv26, 0(v1)
v.li v1, 15528
v.fsw fv27, 0(v1)
v.li v1, 15524
v.fsw fv28, 0(v1)
v.li v1, 15520
v.fsw fv29, 0(v1)
v.li v1, 15516
v.fsw fv30, 0(v1)
v.li v1, 15512
v.fsw fv31, 0(v1)
v.li v1, 15508
v.sw zero, 0(v1)
v.li v1, 15504
v.sw ra, 0(v1)
v.li v1, 15500
v.sw sp, 0(v1)
v.li v1, 15496
v.sw gp, 0(v1)
v.li v1, 15492
v.sw tp, 0(v1)
v.li v1, 15488
v.sw v0, 0(v1)
v.li v1, 15484
v.sw v1, 0(v1)
v.li v1, 15480
v.sw v2, 0(v1)
v.li v1, 15476
v.sw v3, 0(v1)
v.li v1, 15472
v.sw v4, 0(v1)
v.li v1, 15468
v.sw v5, 0(v1)
v.li v1, 15464
v.sw v6, 0(v1)
v.li v1, 15460
v.sw v7, 0(v1)
v.li v1, 15456
v.sw v8, 0(v1)
v.li v1, 15452
v.sw v9, 0(v1)
v.li v1, 15448
v.sw v10, 0(v1)
v.li v1, 15444
v.sw v11, 0(v1)
v.li v1, 15440
v.sw v12, 0(v1)
v.li v1, 15436
v.sw v13, 0(v1)
v.li v1, 15432
v.sw v14, 0(v1)
v.li v1, 15428
v.sw v15, 0(v1)
v.li v1, 15424
v.sw v16, 0(v1)
v.li v1, 15420
v.sw v17, 0(v1)
v.li v1, 15416
v.sw v18, 0(v1)
v.li v1, 15412
v.sw v19, 0(v1)
v.li v1, 15408
v.sw v20, 0(v1)
v.li v1, 15404
v.sw v21, 0(v1)
v.li v1, 15400
v.sw v22, 0(v1)
v.li v1, 15396
v.sw v23, 0(v1)
v.li v1, 15392
v.sw v24, 0(v1)
v.li v1, 15388
v.sw v25, 0(v1)
v.li v1, 15384
v.sw v26, 0(v1)
v.li v1, 15380
v.fsw fv0, 0(v1)
v.li v1, 15376
v.fsw fv1, 0(v1)
v.li v1, 15372
v.fsw fv2, 0(v1)
v.li v1, 15368
v.fsw fv3, 0(v1)
v.li v1, 15364
v.fsw fv4, 0(v1)
v.li v1, 15360
v.fsw fv5, 0(v1)
v.li v1, 15356
v.fsw fv6, 0(v1)
v.li v1, 15352
v.fsw fv7, 0(v1)
v.li v1, 15348
v.fsw fv8, 0(v1)
v.li v1, 15344
v.fsw fv9, 0(v1)
v.li v1, 15340
v.fsw fv10, 0(v1)
v.li v1, 15336
v.fsw fv11, 0(v1)
v.li v1, 15332
v.fsw fv12, 0(v1)
v.li v1, 15328
v.fsw fv13, 0(v1)
v.li v1, 15324
v.fsw fv14, 0(v1)
v.li v1, 15320
v.fsw fv15, 0(v1)
v.li v1, 15316
v.fsw fv16, 0(v1)
v.li v1, 15312
v.fsw fv17, 0(v1)
v.li v1, 15308
v.fsw fv18, 0(v1)
v.li v1, 15304
v.fsw fv19, 0(v1)
v.li v1, 15300
v.fsw fv20, 0(v1)
v.li v1, 15296
v.fsw fv21, 0(v1)
v.li v1, 15292
v.fsw fv22, 0(v1)
v.li v1, 15288
v.fsw fv23, 0(v1)
v.li v1, 15284
v.fsw fv24, 0(v1)
v.li v1, 15280
v.fsw fv25, 0(v1)
v.li v1, 15276
v.fsw fv26, 0(v1)
v.li v1, 15272
v.fsw fv27, 0(v1)
v.li v1, 15268
v.fsw fv28, 0(v1)
v.li v1, 15264
v.fsw fv29, 0(v1)
v.li v1, 15260
v.fsw fv30, 0(v1)
v.li v1, 15256
v.fsw fv31, 0(v1)
v.li v1, 15252
v.sw zero, 0(v1)
v.li v1, 15248
v.sw ra, 0(v1)
v.li v1, 15244
v.sw sp, 0(v1)
v.li v1, 15240
v.sw gp, 0(v1)
v.li v1, 15236
v.sw tp, 0(v1)
v.li v1, 15232
v.sw v0, 0(v1)
v.li v1, 15228
v.sw v1, 0(v1)
v.li v1, 15224
v.sw v2, 0(v1)
v.li v1, 15220
v.sw v3, 0(v1)
v.li v1, 15216
v.sw v4, 0(v1)
v.li v1, 15212
v.sw v5, 0(v1)
v.li v1, 15208
v.sw v6, 0(v1)
v.li v1, 15204
v.sw v7, 0(v1)
v.li v1, 15200
v.sw v8, 0(v1)
v.li v1, 15196
v.sw v9, 0(v1)
v.li v1, 15192
v.sw v10, 0(v1)
v.li v1, 15188
v.sw v11, 0(v1)
v.li v1, 15184
v.sw v12, 0(v1)
v.li v1, 15180
v.sw v13, 0(v1)
v.li v1, 15176
v.sw v14, 0(v1)
v.li v1, 15172
v.sw v15, 0(v1)
v.li v1, 15168
v.sw v16, 0(v1)
v.li v1, 15164
v.sw v17, 0(v1)
v.li v1, 15160
v.sw v18, 0(v1)
v.li v1, 15156
v.sw v19, 0(v1)
v.li v1, 15152
v.sw v20, 0(v1)
v.li v1, 15148
v.sw v21, 0(v1)
v.li v1, 15144
v.sw v22, 0(v1)
v.li v1, 15140
v.sw v23, 0(v1)
v.li v1, 15136
v.sw v24, 0(v1)
v.li v1, 15132
v.sw v25, 0(v1)
v.li v1, 15128
v.sw v26, 0(v1)
v.li v1, 15124
v.fsw fv0, 0(v1)
v.li v1, 15120
v.fsw fv1, 0(v1)
v.li v1, 15116
v.fsw fv2, 0(v1)
v.li v1, 15112
v.fsw fv3, 0(v1)
v.li v1, 15108
v.fsw fv4, 0(v1)
v.li v1, 15104
v.fsw fv5, 0(v1)
v.li v1, 15100
v.fsw fv6, 0(v1)
v.li v1, 15096
v.fsw fv7, 0(v1)
v.li v1, 15092
v.fsw fv8, 0(v1)
v.li v1, 15088
v.fsw fv9, 0(v1)
v.li v1, 15084
v.fsw fv10, 0(v1)
v.li v1, 15080
v.fsw fv11, 0(v1)
v.li v1, 15076
v.fsw fv12, 0(v1)
v.li v1, 15072
v.fsw fv13, 0(v1)
v.li v1, 15068
v.fsw fv14, 0(v1)
v.li v1, 15064
v.fsw fv15, 0(v1)
v.li v1, 15060
v.fsw fv16, 0(v1)
v.li v1, 15056
v.fsw fv17, 0(v1)
v.li v1, 15052
v.fsw fv18, 0(v1)
v.li v1, 15048
v.fsw fv19, 0(v1)
v.li v1, 15044
v.fsw fv20, 0(v1)
v.li v1, 15040
v.fsw fv21, 0(v1)
v.li v1, 15036
v.fsw fv22, 0(v1)
v.li v1, 15032
v.fsw fv23, 0(v1)
v.li v1, 15028
v.fsw fv24, 0(v1)
v.li v1, 15024
v.fsw fv25, 0(v1)
v.li v1, 15020
v.fsw fv26, 0(v1)
v.li v1, 15016
v.fsw fv27, 0(v1)
v.li v1, 15012
v.fsw fv28, 0(v1)
v.li v1, 15008
v.fsw fv29, 0(v1)
v.li v1, 15004
v.fsw fv30, 0(v1)
v.li v1, 15000
v.fsw fv31, 0(v1)
s.li s2, 16276
s.lw zero, 0(s2)
s.li s2, 16272
s.lw ra, 0(s2)
s.li s2, 16268
s.lw sp, 0(s2)
s.li s2, 16264
s.lw gp, 0(s2)
s.li s2, 16260
s.lw tp, 0(s2)
s.li s2, 16256
s.lw s0, 0(s2)
s.li s2, 16252
s.lw s1, 0(s2)
s.li s2, 16248
s.lw s2, 0(s2)
s.li s2, 16244
s.lw s3, 0(s2)
s.li s2, 16156
s.lw s25, 0(s2)
s.li s2, 16152
s.lw s26, 0(s2)
s.li s2, 16024
s.flw fs31, 0(s2)
v.li v6, 16020
v.lw zero, 0(v6)
v.li v6, 16016
v.lw ra, 0(v6)
v.li v6, 16012
v.lw sp, 0(v6)
v.li v6, 16008
v.lw gp, 0(v6)
v.li v6, 16004
v.lw tp, 0(v6)
v.li v6, 16000
v.lw v0, 0(v6)
v.li v6, 15996
v.lw v1, 0(v6)
v.li v6, 15992
v.lw v2, 0(v6)
v.li v6, 15988
v.lw v3, 0(v6)
v.li v6, 15984
v.lw v4, 0(v6)
v.li v6, 15980
v.lw v5, 0(v6)
v.li v6, 15976
v.lw v6, 0(v6)
v.li v6, 15972
v.lw v7, 0(v6)
v.li v6, 15968
v.lw v8, 0(v6)
v.li v6, 15964
v.lw v9, 0(v6)
v.li v6, 15960
v.lw v10, 0(v6)
v.li v6, 15956
v.lw v11, 0(v6)
v.li v6, 15952
v.lw v12, 0(v6)
v.li v6, 15948
v.lw v13, 0(v6)
v.li v6, 15944
v.lw v14, 0(v6)
v.li v6, 15940
v.lw v15, 0(v6)
v.li v6, 15936
v.lw v16, 0(v6)
v.li v6, 15932
v.lw v17, 0(v6)
v.li v6, 15928
v.lw v18, 0(v6)
v.li v6, 15924
v.lw v19, 0(v6)
v.li v6, 15920
v.lw v20, 0(v6)
v.li v6, 15916
v.lw v21, 0(v6)
v.li v6, 15912
v.lw v22, 0(v6)
v.li v6, 15908
v.lw v23, 0(v6)
v.li v6, 15904
v.lw v24, 0(v6)
v.li v6, 15900
v.lw v25, 0(v6)
v.li v6, 15896
v.lw v26, 0(v6)
v.li v6, 15892
v.flw fv0, 0(v6)
v.li v6, 15888
v.flw fv1, 0(v6)
v.li v6, 15884
v.flw fv2, 0(v6)
v.li v6, 15880
v.flw fv3, 0(v6)
v.li v6, 15876
v.flw fv4, 0(v6)
v.li v6, 15872
v.flw fv5, 0(v6)
v.li v6, 15868
v.flw fv6, 0(v6)
v.li v6, 15864
v.flw fv7, 0(v6)
v.li v6, 15860
v.flw fv8, 0(v6)
v.li v6, 15856
v.flw fv9, 0(v6)
v.li v6, 15852
v.flw fv10, 0(v6)
v.li v6, 15848
v.flw fv11, 0(v6)
v.li v6, 15844
v.flw fv12, 0(v6)
v.li v6, 15840
v.flw fv13, 0(v6)
v.li v6, 15836
v.flw fv14, 0(v6)
v.li v6, 15832
v.flw fv15, 0(v6)
v.li v6, 15828
v.flw fv16, 0(v6)
v.li v6, 15824
v.flw fv17, 0(v6)
v.li v6, 15820
v.flw fv18, 0(v6)
v.li v6, 15816
v.flw fv19, 0(v6)
v.li v6, 15812
v.flw fv20, 0(v6)
v.li v6, 15808
v.flw fv21, 0(v6)
v.li v6, 15804
v.flw fv22, 0(v6)
v.li v6, 15800
v.flw fv23, 0(v6)
v.li v6, 15796
v.flw fv24, 0(v6)
v.li v6, 15792
v.flw fv25, 0(v6)
v.li v6, 15788
v.flw fv26, 0(v6)
v.li v6, 15784
v.flw fv27, 0(v6)
v.li v6, 15780
v.flw fv28, 0(v6)
v.li v6, 15776
v.flw fv29, 0(v6)
v.li v6, 15772
v.flw fv30, 0(v6)
v.li v6, 15768
v.flw fv31, 0(v6)
v.li v1, 15764
v.lw zero, 0(v1)
v.li v1, 15760
v.lw ra, 0(v1)
v.li v1, 15756
v.lw sp, 0(v1)
v.li v1, 15752
v.lw gp, 0(v1)
v.li v1, 15748
v.lw tp, 0(v1)
v.li v1, 15744
v.lw v0, 0(v1)
v.li v1, 15740
v.lw v1, 0(v1)
v.li v1, 15736
v.lw v2, 0(v1)
v.li v1, 15732
v.lw v3, 0(v1)
v.li v1, 15728
v.lw v4, 0(v1)
v.li v1, 15724
v.lw v5, 0(v1)
v.li v1, 15720
v.lw v6, 0(v1)
v.li v1, 15716
v.lw v7, 0(v1)
v.li v1, 15712
v.lw v8, 0(v1)
v.li v1, 15708
v.lw v9, 0(v1)
v.li v1, 15704
v.lw v10, 0(v1)
v.li v1, 15700
v.lw v11, 0(v1)
v.li v1, 15696
v.lw v12, 0(v1)
v.li v1, 15692
v.lw v13, 0(v1)
v.li v1, 15688
v.lw v14, 0(v1)
v.li v1, 15684
v.lw v15, 0(v1)
v.li v1, 15680
v.lw v16, 0(v1)
v.li v1, 15676
v.lw v17, 0(v1)
v.li v1, 15672
v.lw v18, 0(v1)
v.li v1, 15668
v.lw v19, 0(v1)
v.li v1, 15664
v.lw v20, 0(v1)
v.li v1, 15660
v.lw v21, 0(v1)
v.li v1, 15656
v.lw v22, 0(v1)
v.li v1, 15652
v.lw v23, 0(v1)
v.li v1, 15648
v.lw v24, 0(v1)
v.li v1, 15644
v.lw v25, 0(v1)
v.li v1, 15640
v.lw v26, 0(v1)
v.li v1, 15636
v.flw fv0, 0(v1)
v.li v1, 15632
v.flw fv1, 0(v1)
v.li v1, 15628
v.flw fv2, 0(v1)
v.li v1, 15624
v.flw fv3, 0(v1)
v.li v1, 15620
v.flw fv4, 0(v1)
v.li v1, 15616
v.flw fv5, 0(v1)
v.li v1, 15612
v.flw fv6, 0(v1)
v.li v1, 15608
v.flw fv7, 0(v1)
v.li v1, 15604
v.flw fv8, 0(v1)
v.li v1, 15600
v.flw fv9, 0(v1)
v.li v1, 15596
v.flw fv10, 0(v1)
v.li v1, 15592
v.flw fv11, 0(v1)
v.li v1, 15588
v.flw fv12, 0(v1)
v.li v1, 15584
v.flw fv13, 0(v1)
v.li v1, 15580
v.flw fv14, 0(v1)
v.li v1, 15576
v.flw fv15, 0(v1)
v.li v1, 15572
v.flw fv16, 0(v1)
v.li v1, 15568
v.flw fv17, 0(v1)
v.li v1, 15564
v.flw fv18, 0(v1)
v.li v1, 15560
v.flw fv19, 0(v1)
v.li v1, 15556
v.flw fv20, 0(v1)
v.li v1, 15552
v.flw fv21, 0(v1)
v.li v1, 15548
v.flw fv22, 0(v1)
v.li v1, 15544
v.flw fv23, 0(v1)
v.li v1, 15540
v.flw fv24, 0(v1)
v.li v1, 15536
v.flw fv25, 0(v1)
v.li v1, 15532
v.flw fv26, 0(v1)
v.li v1, 15528
v.flw fv27, 0(v1)
v.li v1, 15524
v.flw fv28, 0(v1)
v.li v1, 15520
v.flw fv29, 0(v1)
v.li v1, 15516
v.flw fv30, 0(v1)
v.li v1, 15512
v.flw fv31, 0(v1)
v.li v1, 15508
v.lw zero, 0(v1)
v.li v1, 15504
v.lw ra, 0(v1)
v.li v1, 15500
v.lw sp, 0(v1)
v.li v1, 15496
v.lw gp, 0(v1)
v.li v1, 15492
v.lw tp, 0(v1)
v.li v1, 15488
v.lw v0, 0(v1)
v.li v1, 15484
v.lw v1, 0(v1)
v.li v1, 15480
v.lw v2, 0(v1)
v.li v1, 15476
v.lw v3, 0(v1)
v.li v1, 15472
v.lw v4, 0(v1)
v.li v1, 15468
v.lw v5, 0(v1)
v.li v1, 15464
v.lw v6, 0(v1)
v.li v1, 15460
v.lw v7, 0(v1)
v.li v1, 15456
v.lw v8, 0(v1)
v.li v1, 15452
v.lw v9, 0(v1)
v.li v1, 15448
v.lw v10, 0(v1)
v.li v1, 15444
v.lw v11, 0(v1)
v.li v1, 15440
v.lw v12, 0(v1)
v.li v1, 15436
v.lw v13, 0(v1)
v.li v1, 15432
v.lw v14, 0(v1)
v.li v1, 15428
v.lw v15, 0(v1)
v.li v1, 15424
v.lw v16, 0(v1)
v.li v1, 15420
v.lw v17, 0(v1)
v.li v1, 15416
v.lw v18, 0(v1)
v.li v1, 15412
v.lw v19, 0(v1)
v.li v1, 15408
v.lw v20, 0(v1)
v.li v1, 15404
v.lw v21, 0(v1)
v.li v1, 15400
v.lw v22, 0(v1)
v.li v1, 15396
v.lw v23, 0(v1)
v.li v1, 15392
v.lw v24, 0(v1)
v.li v1, 15388
v.lw v25, 0(v1)
v.li v1, 15384
v.lw v26, 0(v1)
v.li v1, 15380
v.flw fv0, 0(v1)
v.li v1, 15376
v.flw fv1, 0(v1)
v.li v1, 15372
v.flw fv2, 0(v1)
v.li v1, 15368
v.flw fv3, 0(v1)
v.li v1, 15364
v.flw fv4, 0(v1)
v.li v1, 15360
v.flw fv5, 0(v1)
v.li v1, 15356
v.flw fv6, 0(v1)
v.li v1, 15352
v.flw fv7, 0(v1)
v.li v1, 15348
v.flw fv8, 0(v1)
v.li v1, 15344
v.flw fv9, 0(v1)
v.li v1, 15340
v.flw fv10, 0(v1)
v.li v1, 15336
v.flw fv11, 0(v1)
v.li v1, 15332
v.flw fv12, 0(v1)
v.li v1, 15328
v.flw fv13, 0(v1)
v.li v1, 15324
v.flw fv14, 0(v1)
v.li v1, 15320
v.flw fv15, 0(v1)
v.li v1, 15316
v.flw fv16, 0(v1)
v.li v1, 15312
v.flw fv17, 0(v1)
v.li v1, 15308
v.flw fv18, 0(v1)
v.li v1, 15304
v.flw fv19, 0(v1)
v.li v1, 15300
v.flw fv20, 0(v1)
v.li v1, 15296
v.flw fv21, 0(v1)
v.li v1, 15292
v.flw fv22, 0(v1)
v.li v1, 15288
v.flw fv23, 0(v1)
v.li v1, 15284
v.flw fv24, 0(v1)
v.li v1, 15280
v.flw fv25, 0(v1)
v.li v1, 15276
v.flw fv26, 0(v1)
v.li v1, 15272
v.flw fv27, 0(v1)
v.li v1, 15268
v.flw fv28, 0(v1)
v.li v1, 15264
v.flw fv29, 0(v1)
v.li v1, 15260
v.flw fv30, 0(v1)
v.li v1, 15256
v.flw fv31, 0(v1)
v.li v1, 15252
v.lw zero, 0(v1)
v.li v1, 15248
v.lw ra, 0(v1)
v.li v1, 15244
v.lw sp, 0(v1)
v.li v1, 15240
v.lw gp, 0(v1)
v.li v1, 15236
v.lw tp, 0(v1)
v.li v1, 15232
v.lw v0, 0(v1)
v.li v1, 15228
v.lw v1, 0(v1)
v.li v1, 15224
v.lw v2, 0(v1)
v.li v1, 15220
v.lw v3, 0(v1)
v.li v1, 15216
v.lw v4, 0(v1)
v.li v1, 15212
v.lw v5, 0(v1)
v.li v1, 15208
v.lw v6, 0(v1)
v.li v1, 15204
v.lw v7, 0(v1)
v.li v1, 15200
v.lw v8, 0(v1)
v.li v1, 15196
v.lw v9, 0(v1)
v.li v1, 15192
v.lw v10, 0(v1)
v.li v1, 15188
v.lw v11, 0(v1)
v.li v1, 15184
v.lw v12, 0(v1)
v.li v1, 15180
v.lw v13, 0(v1)
v.li v1, 15176
v.lw v14, 0(v1)
v.li v1, 15172
v.lw v15, 0(v1)
v.li v1, 15168
v.lw v16, 0(v1)
v.li v1, 15164
v.lw v17, 0(v1)
v.li v1, 15160
v.lw v18, 0(v1)
v.li v1, 15156
v.lw v19, 0(v1)
v.li v1, 15152
v.lw v20, 0(v1)
v.li v1, 15148
v.lw v21, 0(v1)
v.li v1, 15144
v.lw v22, 0(v1)
v.li v1, 15140
v.lw v23, 0(v1)
v.li v1, 15136
v.lw v24, 0(v1)
v.li v1, 15132
v.lw v25, 0(v1)
v.li v1, 15128
v.lw v26, 0(v1)
v.li v1, 15124
v.flw fv0, 0(v1)
v.li v1, 15120
v.flw fv1, 0(v1)
v.li v1, 15116
v.flw fv2, 0(v1)
v.li v1, 15112
v.flw fv3, 0(v1)
v.li v1, 15108
v.flw fv4, 0(v1)
v.li v1, 15104
v.flw fv5, 0(v1)
v.li v1, 15100
v.flw fv6, 0(v1)
v.li v1, 15096
v.flw fv7, 0(v1)
v.li v1, 15092
v.flw fv8, 0(v1)
v.li v1, 15088
v.flw fv9, 0(v1)
v.li v1, 15084
v.flw fv10, 0(v1)
v.li v1, 15080
v.flw fv11, 0(v1)
v.li v1, 15076
v.flw fv12, 0(v1)
v.li v1, 15072
v.flw fv13, 0(v1)
v.li v1, 15068
v.flw fv14, 0(v1)
v.li v1, 15064
v.flw fv15, 0(v1)
v.li v1, 15060
v.flw fv16, 0(v1)
v.li v1, 15056
v.flw fv17, 0(v1)
v.li v1, 15052
v.flw fv18, 0(v1)
v.li v1, 15048
v.flw fv19, 0(v1)
v.li v1, 15044
v.flw fv20, 0(v1)
v.li v1, 15040
v.flw fv21, 0(v1)
v.li v1, 15036
v.flw fv22, 0(v1)
v.li v1, 15032
v.flw fv23, 0(v1)
v.li v1, 15028
v.flw fv24, 0(v1)
v.li v1, 15024
v.flw fv25, 0(v1)
v.li v1, 15020
v.flw fv26, 0(v1)
v.li v1, 15016
v.flw fv27, 0(v1)
v.li v1, 15012
v.flw fv28, 0(v1)
v.li v1, 15008
v.flw fv29, 0(v1)
v.li v1, 15004
v.flw fv30, 0(v1)
v.li v1, 15000
v.flw fv31, 0(v1)
endsync11: 
s.li s2, 0
s.sw s2, 108(sp)
for_start12:
s.lw s4, 108(sp)
s.li s5, 7
s.slt s2, s4, s5
s.beqz s2, for_end13
v.lw v9, 112(sp)
v.li v11, 1
v.lw v12, 108(sp)
v.sll v10, v11, v12
v.add v6, v9, v10
v.addi v9, v6, 0
v.lw v11, 856(sp)
v.li v12, 1
v.sub v10, v11, v12
v.li v12, 1
v.lw v13, 108(sp)
v.sll v11, v12, v13
sx.slt s26, v10, v11
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 1
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 10
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 19
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 1
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 10
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 19
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 1
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 10
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv2, 0(v10)
v.li v10, 19
v.add v10, v10, v9
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv3, 0(v10)
v.fadd.s fv1, fv2, fv3
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
s.neg s26, s26
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 856
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 404
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 748
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 296
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 1
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 10
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.flw fv1, 0(v10)
v.li v10, 19
v.add v10, v10, v7
v.slli v10, v10, 2
v.li v11, 512
v.sub v10, v11, v10
v.add v10, v10, sp
v.fsw fv1, 0(v10)
s.li s26, 15
for_update14:
s.lw s2, 108(sp)
s.addi s4, s2, 1
s.sw s4, 112(s0)
s.j for_start12
for_end13:
s.j warp_switch4
kernel_end5:
s.li s2, 0
s.sw s2, 104(sp)
for_start15:
s.lw s5, 104(sp)
s.li s6, 3
s.slt s2, s5, s6
s.beqz s2, for_end16
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 404
s.sub s2, s5, s2
s.add s2, s2, sp
s.flw fs2, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 512
s.sub s2, s5, s2
s.add s2, s2, sp
s.flw fs3, 0(s2)
s.fdiv.s fs1, fs2, fs3
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 996
s.sub s2, s5, s2
s.add s2, s2, sp
s.fsw fs1, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 296
s.sub s2, s5, s2
s.add s2, s2, sp
s.flw fs2, 0(s2)
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 512
s.sub s2, s5, s2
s.add s2, s2, sp
s.flw fs3, 0(s2)
s.fdiv.s fs1, fs2, fs3
s.li s2, 1
s.slli s2, s2, 2
s.li s5, 984
s.sub s2, s5, s2
s.add s2, s2, sp
s.fsw fs1, 0(s2)
for_update17:
s.lw s2, 104(sp)
s.addi s5, s2, 1
s.sw s5, 108(s0)
s.j for_start15
for_end16:
s.li s1, 5
s.j f_end
f_end:
s.lw s0, 996(sp)
s.lw ra, 1000(sp)
s.addi sp, sp, 1004
s.li s5, 5
s.sw s5, 0(s23)
exit
.size f, .-f

	.section .rodata
	.align 2
.LC0:
	.word 1065353216

	.data