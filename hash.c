float hash(char* key, int size) {
    int sum = 0;
    for(int i = 0; key[i] != 0; i = i+ 1) {
        sum = sum + key[i];
    }
    return sum % size;
}


void main() {
    return;
}