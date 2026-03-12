project('libstalin', 'c', version: '1.0.0', license: 'Unlicense')

stalin_lib = library('stalin', 'src/stalin.c',
  include_directories: include_directories('include'),
  install: true)

install_headers('include/stalin.h')

pkg = import('pkgconfig')
pkg.generate(stalin_lib)

if get_option('build_tests')
  executable('test_stalin', 'tests/test_stalin.c',
    include_directories: include_directories('include'),
    link_with: stalin_lib)
endif
