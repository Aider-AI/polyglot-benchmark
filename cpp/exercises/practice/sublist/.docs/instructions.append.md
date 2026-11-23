# Instructions append

## Interface

Implement the function declared in `sublist.h`:

```cpp
enum class List_comparison { equal, sublist, superlist, unequal };

List_comparison sublist(const std::vector<int>& list_one, const std::vector<int>& list_two);
```

The result describes list A (`list_one`) relative to list B (`list_two`).
The tests pass the lists as braced lists of integers, for example `sublist::sublist({}, {1, 2, 3})` returns `List_comparison::sublist`, so keep `sublist` a plain (non-template) function taking `std::vector<int>`.
