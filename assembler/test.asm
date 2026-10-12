s.li s2, 1
s.li s3, 10
s.jalr zero, s2, 2
s.li s4 5
s.sw s4, 1(s2)
exit
s.li s4, 10
s.sw s4, 0(s2)
exit