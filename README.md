![Banner](https://s-christy.com/status-banner-service/markdown-generator/banner-slim.svg)

## Overview

This is a markdown generator that I will be using to generate lists of skills I
have mastered. Previously, I did this kind of work manually, but I have to make
lists like this often enough that it just makes more sense to build a program
to do it for me.

This program isn't really meant to be particularly good or impressive, only
useful.

## Features

- Parses YAML input using the YAML-cpp library
- Automatically sorts the list using a custom comparator
- Formats output as Github Markdown
- Simple
- Easy to understand

## Usage

```
./markdown-generator skills.yml
```

## Build

```
git submodule update --init --recursive
mkdir build
cd build
cmake ..
make
```

## Dependencies:

```
CMake
Git
g++
```

## License

This work is licensed under the GNU General Public License version 3 (GPLv3).

[<img src="https://s-christy.com/status-banner-service/GPLv3_Logo.svg" width="150" />](https://www.gnu.org/licenses/gpl-3.0.en.html)
