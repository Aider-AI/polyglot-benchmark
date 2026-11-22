# Implementation

Define a single Go func, ParseOctal, with the following signature:

```
func ParseOctal(input string) (int64, error)
```

For a valid octal string, ParseOctal should return its decimal value and a nil error.

"Treat invalid input as octal 0" means: if the input contains any character other than the digits 0-7
(for example "carrot" or "35682"), ParseOctal should return 0 together with a non-nil error.
