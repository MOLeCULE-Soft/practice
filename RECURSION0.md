```

/**
 * Given s is function sum_decimals,
 * n is parameter start.
 * Let n = 0;
 * So s(n) which is s(0) is as follows
 * Note that s(n) is s(n + 1) if n < 10 else s(n) is 0
 */
    s(0)  = (0+s(1))  // n which is 0  is     < 10
But s(1)  = (1+s(2))  // n which is 1  is     < 10
But s(2)  = (2+s(3))  // n which is 2  is     < 10
But s(3)  = (3+s(4))  // n which is 3  is     < 10
But s(4)  = (4+s(5))  // n which is 4  is     < 10
But s(5)  = (5+s(6))  // n which is 5  is     < 10
But s(6)  = (6+s(7))  // n which is 6  is     < 10
But s(7)  = (7+s(8))  // n which is 7  is     < 10
But s(8)  = (8+s(9))  // n which is 8  is     < 10
But s(9)  = (9+s(10)) // n which is 9  is     < 10
But s(10) = (0)       // n which is 10 is not < 10
Expanding...
s(0)=(0+s(1))
s(0)=(0+(1+(s(2))))
s(0)=(0+(1+(2+(s(3)))))
s(0)=(0+(1+(2+(3+(s(4))))))
s(0)=(0+(1+(2+(3+(4+(s(5)))))))
s(0)=(0+(1+(2+(3+(4+(5+(s(6))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(s(7)))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(s(8))))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(8+(s(9)))))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(8+(9+(s(10))))))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(8+(9+(0)))))))))))Evaluatx...
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(8+(9))))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(7+(17)))))))))
s(0)=(0+(1+(2+(3+(4+(5+(6+(24))))))))
s(0)=(0+(1+(2+(3+(4+(5+(30)))))))
s(0)=(0+(1+(2+(3+(4+(35))))))
s(0)=(0+(1+(2+(3+(39)))))
s(0)=(0+(1+(2+(42))))
s(0)=(0+(1+(44)))
s(0)=(0+(45))
s(0)=(45)
```