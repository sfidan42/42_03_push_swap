# push_swap
##Foreword
C
```
#include <stdio.h>
int	main(void)
{
	printf("hello, world\n");
	return 0;
}
```
ASM
```
cseg	segment
assume	cs:cseg, ds:cseg
org		100h
main	proc
jmp		debut
mess	db 'Hello world!$'
debut:
mov		dx, offset mess
mov		ah, 9
int		21h
ret
main	endp
cseg	ends
end		main
```
LOLCODE
```
HAI
CAN HAS STDIO?
VISIBLE "HELLO WORLD!"
KTHXBYE
```
PHP
```
<?php
 echo "Hello world!";
?>
```
BrainFuck
```
++++++++++[>+++++++>++++++++++>+++>+<<<<-]
>++.>+.+++++++..+++.>++.
<<+++++++++++++++.>.+++.------.--------.>+.>.
```

#### Please read the [***Subject File***](https://cdn.intra.42.fr/pdf/pdf/70135/en.subject.pdf)