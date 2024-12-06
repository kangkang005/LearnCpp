project('macros', 'cpp', 'c')

math_lib = static_library(
  'math',
  'math.c',
)

incdir = include_directories('.')

progs = [
  ['function', ['define_function.cpp']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach

dep_glut = declare_dependency(
  dependencies: math_lib,
  include_directories: incdir
)

exe = executable(
      'extern_c', 'extern_c.cpp', 
      link_with : math_lib,
      include_directories : incdir,
      dependencies : [dep_glut],
)
test('extern_c', exe)
