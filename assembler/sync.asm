s.li sp, 42
v.li v2, 1
v.li v2, 2
v.li v2, 3
s.li s25, 5
sync endsync
endsync:
s.sw s25, 0(sp)
sync jihwan
jihwan:
s.sw s25, 1(sp)
exit