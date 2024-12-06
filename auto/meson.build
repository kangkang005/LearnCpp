project('auto', 'cpp')

progs = [
  ['for', ['for-auto.cpp']],
]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach
