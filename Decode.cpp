// https://codefights.com/challenge/6FcoYgXWmxETjuuaj
// Encodes a message
// Input: "hello"
// Output: "lynnq"

auto decode2(auto m) {
    for (i : m)
        i = (i+7)*(i+9)%26 +97;
    return m;
}

int main(){
    string temp = "hello";
    temp = decode2(temp);
}
