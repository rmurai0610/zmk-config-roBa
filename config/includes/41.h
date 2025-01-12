#pragma once
// clang-format off
/*                              43 KEY MATRIX / LAYOUT MAPPING
  ╭────────────────────────┬────────────────────────╮  ╭─────────────────────────┬─────────────────────────╮
  │  0   1   2   3   4     │      5   6   7   8   9 │  │ LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │  │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │  │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │
  │ 34  35  36  37  38  39 │ 40  41              42 │  │ LH5 LH4 LH3 LH2 LH1 LH0 │ RH0 RH1             RH2 │
  ╰────────────────────────┴────────────────────────╯  ╰─────────────────────────┴─────────────────────────╯
*/
// clang-format on

// Left-top row (LT)
#define LT0 4
#define LT1 3
#define LT2 2
#define LT3 1
#define LT4 0

// Right-top row (RT)
#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

// Left-middle row (LM)
#define LM0 10
#define LM1 11
#define LM2 12
#define LM3 13
#define LM4 14
#define LM5 15

// Right-middle row (RM)
#define RM0 16
#define RM1 17
#define RM2 18
#define RM3 19
#define RM4 20
#define RM5 21

// Left-bottom row (LB)
#define LB0 22
#define LB1 23
#define LB2 24
#define LB3 25
#define LB4 26
#define LB5 27

// Right-bottom row (RB)
#define RB0 28
#define RB1 29
#define RB2 30
#define RB3 31
#define RB4 32
#define RB5 33

// Left-thumb keys (LH)
#define LH0 34
#define LH1 35
#define LH2 36
#define LH3 37
#define LH4 38
#define LH5 39

// Right-thumb keys (RH)
#define RH0 40
#define RH1 41
#define RH2 42

// clang-format off
#define KEYS_L LT4 LT3 LT2 LT1 LT0 LM5 LM4 LM3 LM2 LM1 LM0 LB5 LB4 LB3 LB2 LB1 LB0 LH5 LH4 LH3
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 RH2
#define THUMBS LH0 LH1 LH2 RH0 RH1
// clang-format on
