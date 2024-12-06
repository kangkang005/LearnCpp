project('class', 'cpp')

progs = [
  ['pointer', ['class_pointer.cpp']],
  ['virtual', ['virtual.cpp']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach
