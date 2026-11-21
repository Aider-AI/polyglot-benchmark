# Instructions append

## Input and output

The puzzle is passed to the `Alphametics` constructor as one string, for example `"SEND + MORE == MONEY"`: one or more words joined by ` + `, then ` == `, then the result word.

`solve()` returns the digit assigned to each letter and throws `UnsolvablePuzzleException` when the puzzle has no solution.
