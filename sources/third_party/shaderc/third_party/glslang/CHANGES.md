# Revision history for `glslang`

All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](https://semver.org/).

## 11.1.0 2021-02-18

### Other changes
* Removed Python requirement when not building with spirv-tools
* Add support for GL_EXT_shared_memory_block
* Implement GL_EXT_null_initializer
* Add CMake support for Fuschia

## 11.0.0 2020-07-20

### Breaking changes

#### Visual Studio 2013 is no longer supported

[As scheduled](https://github.com/KhronosGroup/glslang/blob/9eef54b2513ca6b40b47b07d24f453848b65c0df/README.md#planned-deprecationsremovals),
Microsoft Visual Studio 2013 is no longer officially supported. Please upgrade
to at least Visual Studio 2015.

## 10.15.3847 2020-07-20

### Breaking changes

* The following files have been removed:
  * `glslang/include/revision.h`
  * `glslang/include/revision.template`

The `GLSLANG_MINOR_VERSION` and `GLSLANG_PATCH_LEVEL` defines have been removed
from the public headers. \
Instead each build script now uses the new `build_info.py`
script along with the `build_info.h.tmpl` and this `CHANGES.md` file to generate
the glslang build-time generated header `glslang/build_info.h`.

The new public API to obtain the `glslang` version is `glslang::GetVersion()`.

### Other changes
* `glslang` shared objects produced by CMake are now `SONAME` versioned using
   [Semantic Versioning 2.0.0](https://semver.org/).
