# push_swap
## Foreword
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
C#
```
using System;
public class HelloWorld
{
	public static void Main ()
	{
		Console.WriteLine("Hello world!");
	}
}
```
HTML5
```
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Hello world !</title>
	</head>
	<body>
		<p>Hello World !</p>
	</body>
</html>
```
YASL
```
"Hello world!"
print
```
OCaml
```
let main () =
	print_endline "Hello world !"
let _ = main ()
```

#### Please read the [***Subject File***](https://cdn.intra.42.fr/pdf/pdf/70135/en.subject.pdf)