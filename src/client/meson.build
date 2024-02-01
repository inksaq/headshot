subdir('runtime')
inc = include_directories('.', 'runtime')



client_sources = files(
  'main.cpp',
  'menu_scene.cpp'


  )

sources = runtime_sources + client_sources

dependencies = [grunge_dep]

cpp_args = []


executable(
  'Headshot-Client',
  sources: sources,
  include_directories: inc,
  dependencies: dependencies,
  cpp_args: cpp_args,
  install: true,
  install_dir: meson.source_root() / 'game'
  )
