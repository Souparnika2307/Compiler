#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
struct ThreeAddressCode {
std::string result;
std::string op;
std::string arg1;
std::string arg2;
};
unordered_map<string,bool> is_zero;
void performAlgebraicOptimization(std::vector<ThreeAddressCode>&
code) {
for (auto& tac : code) {
if (tac.op == "-" && tac.arg1 == tac.arg2) {
// t1 := a - a => t1 := 0
is_zero[tac.result] = true;
tac.op = " ";
tac.arg1 = "0";
tac.arg2 = "";
} else if (tac.op == "+" && is_zero[tac.arg2] ) {
// t2 := b + 0 => t2 := b
tac.op = " ";
tac.arg2 = tac.arg1;
tac.arg1 = "";
}
else if (tac.op == "+" && is_zero[tac.arg1] ) {
// t2 := b + 0 => t2 := b
tac.op = " ";
tac.arg2 = tac.arg2;
tac.arg1 = "";
}
else if (tac.op == "*" && tac.arg2 == "2") {
// t3 := 2 * t2 => t3 := t2 << 1
tac.op = "<<";
tac.arg2 = "1";
} else if (tac.op == "**" && tac.arg2 == "2") {
// x := y ** 2 => x := y * y
tac.op = "*";
tac.arg2 = tac.arg1;
}
}
}
int main() {
std::ifstream inputFile("input2.txt");
if (!inputFile.is_open()) {
std::cerr << "Error opening the input file." << std::endl;
return 1;
}
std::vector<ThreeAddressCode> code;
std::string line;
while (std::getline(inputFile, line)) {
std::istringstream iss(line);
std::string result, op, arg1, arg2;
iss >> result >> op >> arg1 >> op >> arg2;
code.push_back({result, op, arg1, arg2});
}
inputFile.close();
std::cout << "Original three-address code:" << std::endl;
for (const auto& tac : code) {
std::cout << tac.result << " " << tac.op << " " << tac.arg1 << " " << tac.arg2 << std::endl;
}
performAlgebraicOptimization(code);
std::cout << "\nOptimized three-address code:" << std::endl;
for (const auto& tac : code) {
if (!tac.op.empty()) { // Exclude eliminated expressions
std::cout << tac.result << " " << tac.op << " " << tac.arg1 <<
" " << tac.arg2 << std::endl;
}
}
return 0;
}
