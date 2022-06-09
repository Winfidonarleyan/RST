project('bit_counting', 'c')

sources = ['solution.c', 'tests.c']
criterion_lib = 'criterion'
criterion_lib_dir = '../libs/criterion-v2.3.3/lib'
criterion_inc_dir = '../libs/criterion-v2.3.3/include'
criterion_dep = declare_dependency(
        link_args: ['-L../' + criterion_lib_dir, '-l' + criterion_lib],
        include_directories: include_directories(criterion_inc_dir))

e = executable('solution.bin',
        sources,
        build_rpath : criterion_lib_dir,
        dependencies: [criterion_dep])

test('solution test', e, args: '--always-succeed')

