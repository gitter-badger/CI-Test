%: test/%.cpp
	clang -Isrc -o $@ $^

