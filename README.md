Examples of PVS-Studio integration in WAF Build System 

**Note: This analysis mode will be available in the next version of the analyzer (PVS-Studio 6.26)**

The supported version: **waf-1.8.0** or later.

The used WAF version has to be rebuilt with the following parameters:

```python ./waf-light --tools=clang_compilation_database configure build```

You need to copy the new WAF file in your project.

In the file wscript (in your project) you need to add the following string:

```conf.load('clang_compilation_database')```

Usually it is added in the end of the function def configure(conf).

After building a project, for example, by such a command:

```python ./waf configure build```

the file compile_commands.json, which is needed for this analysis mode, appears in the directory with the project.

## Running analysis in different OSs: ##

### Windows: ###

```"C:\Program Files (x86)\PVS-Studio\CompilerCommandsAnalyzer.exe" analyze -f build/compile_commands.json ...```

### Linux: ###

```pvs-studio-analyzer analyze -f build/compile_commands.json ...```
