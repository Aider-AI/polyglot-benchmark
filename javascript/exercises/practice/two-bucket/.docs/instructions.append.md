# Instructions.append

## Output format

The `solve()` method is expected to return an object with these properties:

- `moves` - the number of bucket actions required to reach the goal
  (includes filling the start bucket),
- `goalBucket` - the name of the bucket that reached the goal amount,
- `otherBucket` - the amount contained in the other bucket.

Example:

```json
{
  "moves": 5,
  "goalBucket": "one",
  "otherBucket": 2
}
```

## Unreachable goals

Some goals can never be reached, for example a goal larger than both buckets.
In that case throw an `Error` instead of returning a result.
The tests accept the error from either the `TwoBucket` constructor or `solve()`.
