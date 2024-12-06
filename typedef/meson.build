project('typedef', 'cpp')

progs = [
  ['function', ['function_pointer.cpp']],
  ['struct', ['struct.cpp']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach
