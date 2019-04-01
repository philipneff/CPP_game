# this is the make file if you will for the game.
# simply type scons and it will link and create a file called CatBalls

# https://github.com/scons/scons/wiki/SconsTutorial1

#https://github.com/SCons/scons/wiki/SConsCrashCourse


env = Environment() #initialize the build Environment


env.Append(CPPPATH = ['./weapons/', 
					  './weapons/ranged/', 
					  './weapons/melee/',
					  './gameplay' ])

script_locations=[	'./weapons/ranged/', 
					'./weapons/melee/',
					'./gameplay']

SConscript(dirs=script_locations,
			duplicate=True,
			exports="env")


sources = ['main.cpp']
#add any libraries here
library_names =['ranged', 
				'melee',
				'gameplay']






#add any new folder paths here
library_paths =['./weapons/ranged/', 
				'./weapons/melee/',
				'./gameplay']

env.Program(target = 'CatBalls', source = sources, LIBS = library_names,LIBPATH = library_paths)


