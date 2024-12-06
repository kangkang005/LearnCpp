project('struct', 'cpp', 'c')

progs = [
  ['pointer', ['pointer.cpp']],
  ['declare_pointer', ['declare_pointer.cpp']],
  ['constructor', ['constructor.cpp']],
  ['nest_cpp', ['nest.cpp']],
  ['nest_c', ['nest.c']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach
