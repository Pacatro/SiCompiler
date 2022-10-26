# SiCompiler v0.1
This is a simple compiler that prepare files for be using in SiCoMe simulator realized by the University of Cordoba (UCO).

## Installation:
If you can't run 'sc.exe', maybe you need to compile it, 
remember that SiCompiler is written in C++ so you will need to use g++.

```bash
  g++ main.cc functions.cc -o sc.exe
```

Other way is using makefiles, in the directory 'scripts' you can find a makefile with the same instruction.
You only need to run make in your terminal.

```bash
  make
```
## How to use:
The only thing you need to do is write the next command in the directory you have the executable: 

```bash
  ./sc.exe input_file_dir output_file_dir
```

The result will be an output file with the name you write in the same directory you are.
## Standars
This project is not complete, so is possible that it may be update in the future, 
but in this momment this compiler meets some standars that have been written resently.

### Comments:
 * Simple comments:
    The comments in one line will be specified by a semicolon ' ; ':

    ```bash
        CRA 23 ;One line comment
    ```

 * Multiline comments:
    The comments in multiple lines will be specified by ' *** ' like closing and opening:
    
    ```bash
        *** Multiline
        comment ***
        CRA
    ```

 * This standars will be updates.