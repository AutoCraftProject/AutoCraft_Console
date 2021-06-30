OBJ := item.o AutoCraft.o render.o json/cJSON.c.o json/CJsonObject.o
LD := ld
LD_FLAGS_RELEASE := -s
LD_FLAGS_DEBUG :=
GPP := g++
GPP_FLAGS_RELEASE := -std=c++11
GPP_FLAGS_DEBUG := -std=c++11
OUTPUT := AutoCraft

%.o : %.cpp
	$(GPP) $(GPP_FLAGS_DEBUG) -c -o $@ $^

%.c.o : %.c
	$(GPP) $(GPP_FLAGS_DEBUG) -c -o $@ $^

$(OUTPUT): $(OBJ)
	$(GPP) $(GPP_FLAGS_DEBUG) -o $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJ)