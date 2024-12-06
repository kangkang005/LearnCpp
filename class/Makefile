all: clean build compile test open_log

build:
	meson build

compile:
	ninja -C build

test:
	meson test -C build

open_log:
	gvim ./build/meson-logs/testlog.txt

clean:
	rm -rf build
