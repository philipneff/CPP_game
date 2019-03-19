# this is the make file if you will for the game.
# simply type scons and it will link and create a file called CatBalls

# https://github.com/scons/scons/wiki/SconsTutorial1



env = Environment() #initialize the build Environment

include_path = '~/gitwork/Cpp_game/weapons'


#@TODO -> this is for my system...can't seem to get a relative link
#would prefer it is just '/weapons' then we can pull from anywhere and run.


env.Append(CPPPATH = ['/home/philneff/gitwork/CPP_game/weapons'])
env.Append(CPPPATH= ['/home/philneff/gitwork/CPP_game/weapons/Ranged'])
env.Append(TARGET= ['/home/philneff/gitwork/CPP_game/weapons/Ranged/bow.cpp'])


#print env.Dump()
env.Program(target = 'CatBalls', source = ['main.cpp'])


