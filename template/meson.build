project('template', 'cpp')

progs = [
  ['template', ['template.cpp']],
  ['multi', ['multi-template.cpp']],
  ['class', ['class.cpp']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach
