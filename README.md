# XCB Cellular Automata

![XCB Cellular Automata Deno GIF Image](./assets/demo.gif)

This is a C-based project that visualizes [Conway's Game of
Life](https://en.wikipedia.org/wiki/Conway's_Game_of_Life) [cellular
automata](https://en.wikipedia.org/wiki/Cellular_automaton) using the
[XCB](https://xcb.freedesktop.org/) library.


## Dependences:

- **GCC**: C Compiler
- **XCB**: X protocol C-language Binding is a replacement for Xlib
- **libxcb-image**: XCB port of Xlib's XImage and XShmImage functions.

Command to install Dependences in Debain based systems:
```sh
sudo apt install gcc libxcb-image0-dev libxcb1-dev
```

## Building and Running 

**Note**: This project is compatible only with Linux systems.

```c
cc build.c && ./a.out build-run
```

To see other options to build project:
```c
cc build.c && ./a.out
```

## References

- [GOL](https://github.com/CobbCoding1/gol) by [CobbCoding](https://github.com/CobbCoding1)
- [Jai on Linux](https://github.com/valignatev/jai-on-linux) by [Valentin Ignatev](https://github.com/valignatev)


