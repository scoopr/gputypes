
CPPFLAGS+=-Iinclude
# -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/Frameworks/

#CPPFLAGS+=-x c++ -std=c++14

all: gltest metaltest gputest

run: all
	./gltest
	./metaltest
	./gputest

gltest: test/gltest.o
	$(CC) $(LDFLAGS) $^ -o $@

metaltest: test/metaltest.o
	$(CC) $(LDFLAGS) $^ -o $@

gputest: test/gputest.o
	$(CC) $(LDFLAGS) $^ -o $@

test/gltest.o: include/gputypes/gltypes.h
test/metaltest.o: include/gputypes/metaltypes.h
test/gputest.o: include/gputypes/gputypes.h
include/gputypes/gltypes.h: include/gputypes/gputypes.h
include/gputypes/metaltypes.h: include/gputypes/gputypes.h

clean:
	$(RM) test/*.o gltest metaltest

format:
	clang-format -i include/gputypes/*.h test/*.c

