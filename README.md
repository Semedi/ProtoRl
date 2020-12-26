# ProtoRl

Repository for ProtoRl project.

Basic goal is to create a decent gamedev framework for building Roguelike and Roguelite games using C++.
To achieve this purpose this repository contains the ProtoRl game, a modular game that will use the roguengine framework developed in this same repository.

Knowing this, the project can be separated into two parts:

* Engine framework, under the engine folder and roguengine namespace
* Proper game using the engine (testing and fun)

## COMPILING (WIP)

I recommend compiling the ProtoRl using cmake and conan:

```
$ mkdir build && cd build
$ conan install ..
$ cmake ..
$ cmake --build .
```

If you are having problems installing conan dependencies:
```
$ conan install .. --build missing
```

If you want to compile only Roguengine lib:

```
$ cmake --build . --target Roguengine
```
## Roadmap

## Contributing
