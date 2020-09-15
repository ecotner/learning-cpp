# this is a `makefile`, which is executed by running the command `make`.
# this one is kind of simple, but they are useful for more complicated projects
# where you need to specify which files depend on other files. we could see
# a potential need for this in the previous module/chapter, where we had
# both a *.h and *.cpp file for each class, and different classes needed to
# include different header files. basically, you specify a dependency graph
# along with "recipes" for building that graph, and it executes everything
# in order, but ONLY IF SOMETHING HAS CHANGED! so this can save you a lot of
# time when compiling

err_opt = -Wall -Wextra -Wpedantic -Werror # can specify macros to be expanded later

final: make-test # this specifies the final target file to be created, `make-test`
# fyi, the names of the recipies are arbitrary, people usually use the names of files

make-test: make_test.cpp # this command only runs if `make_test.cpp` is out of date
	# and the following line is the command to rebuild it
	g++ -std=c++11 ${err_opt} make_test.cpp -o make-test

# if make_test.cpp has been changed since the last time we ran `make`, then it
# will be rebuilt. otherwise, nothing happens and we know it is up to date