|             Method |      Mean |    Error |   StdDev |   Gen0 | Allocated |
|------------------- |----------:|---------:|---------:|-------:|----------:|
|    ResponseIfChain | 115.01 ns | 1.060 ns | 0.940 ns | 0.1301 |     272 B |
| ResponseWithSwitch |  58.42 ns | 0.240 ns | 0.188 ns | 0.0343 |      72 B |
|  ResponseWithArray |  55.94 ns | 0.306 ns | 0.286 ns | 0.0344 |      72 B |
|      ResponseRegex | 313.08 ns | 4.214 ns | 3.942 ns |      - |         - |