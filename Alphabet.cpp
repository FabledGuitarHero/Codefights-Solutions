auto AlphabetStudy(auto l, auto w) {
    for (i : w)
        if (l.find(i) == string::npos) return "No";
    return "Yes";
}

int main(){
    AlphabetStudy("act", "cat");
}
