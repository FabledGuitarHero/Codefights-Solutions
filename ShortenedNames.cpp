//https://codefights.com/challenge/ueKvGPJ8X2pircnkW
// Shorts a full name (Last, First Middle)
// Input: "Placedo, Silver Van"
// Output: "Placedo, Silver V."

string ShortenName(string n) {
    return (count(n.begin(), n.end(), ' ') > 1)?n.replace((n.find_last_of(" ")+2),n.size(), "."):n;
}

int main(){
    string temp = "Placedo, Silver Van";
    temp = ShortenName(temp);
}
