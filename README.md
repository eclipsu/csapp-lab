# csapp-lab

My work through the labs from *Computer Systems: A Programmer's Perspective* (Bryant & O'Hallaron).
Mostly doing these to actually understand what's going on under C, not just read about it.

## Labs

| Lab | Status |
| --- | --- |
| [Data Lab](datalab-handout/) | in progress |

### Data Lab

Bit-twiddling puzzles with a restricted set of operators (no `if`, no loops, limited ops per function).
Solutions live in [`datalab-handout/bits.c`](datalab-handout/bits.c).

Done so far: `bitXor`, `tmin`, `isTmax`, `allOddBits`, `negate`, `isAsciiDigit`,
`conditional`, `isLessOrEqual`, `logicalNeg`.

Still left: `howManyBits`, `floatScale2`, `floatFloat2Int`, `floatPower2`.

To check it:

```sh
cd datalab-handout
make            # needs gcc-multilib, it builds with -m32
./dlc bits.c    # checks the operator rules
./btest         # checks correctness
./driver.pl     # both, plus a score
```

## Setup

Everything runs on Linux (x86-64). For the 32-bit build on Ubuntu/Debian:

```sh
sudo apt install gcc-multilib
```

Handouts are from the [CS:APP student site](http://csapp.cs.cmu.edu/3e/labs.html).
