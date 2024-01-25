project(
  'g-core',
  'c',
  'cpp',
  default_options: [
    'cpp_std=c++20',
    'prefix=' + meson.source_root() + '/',
	'default_library=static'
    ],
  version: '0.0.1'
  )

  grunge_dep = dependency('grunge', default_options: 'default_library=static')

subdir('src')
