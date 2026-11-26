class Trie {
public:
    Trie* array[26];
    bool isEndOfWord;

    Trie() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
            array[i] = nullptr;
    }

    void insert(string word) {
        Trie* current = this;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                current->array[index] = new Trie();

            current = current->array[index];
        }

        current->isEndOfWord = true;
    }

    bool search(string word) {
        Trie* current = this;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                return false;

            current = current->array[index];
        }

        return current->isEndOfWord;
    }

    bool startsWith(string prefix) {
        Trie* current = this;

        for (char ch : prefix) {
            int index = ch - 'a';

            if (current->array[index] == nullptr)
                return false;

            current = current->array[index];
        }

        return true;
    }
};