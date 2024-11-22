# 定义构建目录
BUILD_DIR = build

# 创建构建目录规则
$(BUILD_DIR):
    mkdir -p $(BUILD_DIR)

# 生成的文件都放在 build 目录下
$(BUILD_DIR)/lexer.h: lang.l | $(BUILD_DIR)
    flex --outfile=$(BUILD_DIR)/lexer.c $<

$(BUILD_DIR)/lexer.c: lang.l | $(BUILD_DIR)
    flex --outfile=$(BUILD_DIR)/lexer.c $<

$(BUILD_DIR)/parser.c: lang.y | $(BUILD_DIR)
    bison -o $(BUILD_DIR)/parser.c -d -v $<

$(BUILD_DIR)/parser.h: lang.y | $(BUILD_DIR)
    bison -o $(BUILD_DIR)/parser.c -d -v $<

$(BUILD_DIR)/lang.o: lang.c lang.h | $(BUILD_DIR)
    gcc -c $< -o $@

$(BUILD_DIR)/parser.o: $(BUILD_DIR)/parser.c $(BUILD_DIR)/parser.h $(BUILD_DIR)/lexer.h lang.h | $(BUILD_DIR)
    gcc -c $(BUILD_DIR)/parser.c -o $@

$(BUILD_DIR)/lexer.o: $(BUILD_DIR)/lexer.c $(BUILD_DIR)/lexer.h $(BUILD_DIR)/parser.h lang.h | $(BUILD_DIR)
    gcc -c $(BUILD_DIR)/lexer.c -o $@

$(BUILD_DIR)/main.o: main.c $(BUILD_DIR)/lexer.h $(BUILD_DIR)/parser.h lang.h | $(BUILD_DIR)
    gcc -c $< -o $@

$(BUILD_DIR)/main: $(BUILD_DIR)/lang.o $(BUILD_DIR)/parser.o $(BUILD_DIR)/lexer.o $(BUILD_DIR)/main.o | $(BUILD_DIR)
    gcc $^ -o $@

all: $(BUILD_DIR)/main

clean:
    rm -rf $(BUILD_DIR)

%.c: %.y
    bison -o $@ $<