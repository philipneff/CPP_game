# this is the make file if you will for the game.
# simply type scons and it will link and create a file called CatBalls

# https://github.com/scons/scons/wiki/SconsTutorial1

#https://github.com/SCons/scons/wiki/SConsCrashCourse


env = Environment() #initialize the build Environment

include_path = '~/gitwork/Cpp_game/weapons'


#@TODO -> this is for my system...can't seem to get a relative link
#would prefer it is just '/weapons' then we can pull from anywhere and run.

env.Append(CPPPATH = ['./weapons'])
env.Append(CPPPATH= ['./weapons/Ranged'])
env.Append(CPPPATH= ['./weapons/Ranged/Bow.cpp'])
#env.Append(CPPPATH= ['/home/philneff/gitwork/CPP_game/'])
env.VariantDir('weapons/Ranged', 'weapons')
#env.Sconscript(['weapons/ranged/Sconscript'])
env.Sconscript('%s/weapons' %modeDir, {'env',env})
env.Sconscript('%s/weapons/Ranged' %modeDir, {'env',env})

#print env.Dump()
sources = ['main.cpp']
env.Program(target = 'CatBalls', source = ['main.cpp'])


