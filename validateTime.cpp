

int validTime(auto t) {
    //Compare if string is less than 24,
    //  check if first number after : is
    //  less than 6.
    return t < "24" & t[3] < 54;
}

int main(){
    std::string t = "12:33";
    validateTime(t);
}
