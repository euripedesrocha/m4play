project('m4play',
    'cpp',
    'c',
    default_options : ['cpp_std=c++14'])
design_sources = ['./src/main.cpp']
design_includes = ['']

if meson.is_cross_build()

  design_sources += meson.get_cross_property('target_sources')
  design_includes += meson.get_cross_property('target_includes')
  includes = include_directories(design_includes)
  m4play = executable('m4play.elf'
      ,design_sources
      ,include_dirrectories : includes)

else
  subdir('test')
endif

