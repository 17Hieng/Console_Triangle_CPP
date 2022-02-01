# Console_Triangle_CPP
Draw triangle in console with C++ Program

## Pseudocode
```
START

declare n,u
OUTPUT "ENTER max width of triangle"
input n

FOR i=1 to n*2 
	IF i < n
		u = i
	ELSE
		u = n - (i - n)
	ENDIF

	FOR j=1 to u 
		OUTPUT "*"
	ENDFOR

	OUTPUT "\n"
ENDFOR

END
```
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
