# Instructions append

## Input and output

`solve` receives the puzzle as one string, for example `'SEND + MORE == MONEY'`: one or more words joined by ` + `, then ` == `, then the result word.

It returns an object that maps each letter to its digit, for example `{ I: 1, B: 9, L: 0 }` for `'I + BB == ILL'`, or `null` when the puzzle has no solution.
