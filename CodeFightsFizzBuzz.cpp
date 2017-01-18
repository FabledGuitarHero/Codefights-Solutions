vector<string> CodeFight(int n) {

    vector<string> newVector;
    for (int i = 1; i <= n; i++){
        if (i%5 == 0 && i%7 == 0)
            newVector.push_back("CodeFight");
       else if (i%5 == 0)
            newVector.push_back("Code");
        else if (i%7 == 0)
            newVector.push_back("Fight");
        else {
            newVector.push_back(to_string(i));
        }
    }

    return newVector;

}

int main(){
  vector<string> tmp = CodeFight(1);
}
