.PHONY:	build test

all:	build	test

build:	bug

bug:	bug.c
	/Users/suxianghan/Desktop/CS598/AFL-master/afl-clang -g -o $@ $<

test:	bug
	@rm -rf in out
	@mkdir -p in out
	@echo milano0 > in/test1
	/Users/suxianghan/Desktop/CS598/AFL-master/afl-fuzz -i in -o out -- ./bug

clean:
	rm -rf in out bug
