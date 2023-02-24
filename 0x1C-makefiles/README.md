We started working with makefile for generating our executables from source files.
The makefile has the advantage of generating object files from all source files at ones, and only regenerates object files from sources that get modified.
When a source file hasn't been modified, it doesn't need to get recompiled when the executable is being regenerated.
