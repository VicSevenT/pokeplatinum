fr_script_target_name = 'fr_script.narc'
fr_script_private_dir = relative_build_dir / fr_script_target_name + '.p'

fr_script_files = copy_gen.process(files(
    '00000.bin',
    '00001.bin',
    '00002.bin',
    '00003.bin',
    '00004.bin',
    '00005.bin',
    '00006.bin',
    '00007.bin',
    '00008.bin',
    '00009.bin',
    '00010.bin',
))

fr_script_narc = custom_target('fr_script.narc',
    output: [
        'fr_script.narc',
        'fr_script.naix.h',
    ],
    input: fr_script_files,
    command: [
        narc_exe, 'create',
        '--naix',
        '--output', '@OUTPUT0@',
        '@PRIVATE_DIR@',
    ],
)

nitrofs_files += fr_script_narc
naix_headers += fr_script_narc[1]
