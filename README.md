# yam_cpp_parse

### How to build?

```console
$ git clone [yaml_cpp_parse repo]

$ mkdir libraries
$ git clone https://github.com/jbeder/yaml-cpp libraries/yaml-cpp

$ mkdir build && cd build
$ cmake ..
$ make -j10
```

or in Ubuntu, you can just install w/ following command

```
$ sudo apt-get install libyaml-cpp-dev
```

and modify CMakeLists.txt to ```find_package(yaml-cpp REQUIRED)```.


* [Reference link](https://www.reddit.com/r/cpp_questions/comments/bdxcp0/im_a_beginner_to_c_help_me_install_and_use/)
