
class Trie {
public:
    Trie* children[26];
    bool isEnd;

    Trie() {
        for (int i = 0; i < 26; ++i) {
            children[i] = NULL;
        }
        isEnd = false;
    }

    void insert(string word) {
        Trie* curr = this;

        // Here, I try to insert the new word into the children.
        for (char c : word) {
            
            int idx = c - 'a'; // This gives us the index.

            if (!curr->children[idx]) {
                // If it is NULL, let's create a new child node.
                curr->children[idx] = new Trie;
            }

            // Otherwise, move to the next node.
            curr = curr->children[idx];
        }

        // Mark it as true when we have completed the entire word.
        curr->isEnd = true;
    }

    bool search(string word) {
        Trie* curr = this;

        for (char c : word) {
            int idx = c - 'a'; // This gives us the index.

            if (!curr->children[idx]) {
                // Return false because we couldn't find the word.
                return false;
            }

            // Otherwise, move to the next node.
            curr = curr->children[idx];
        }

        // Return true only if this node marks the end of a complete word.
        return curr->isEnd;
    }

    bool startsWith(string prefix) {
        Trie* curr = this;

        for (char c : prefix) {
            int idx = c - 'a'; // This gives us the index.

            if (!curr->children[idx]) {
                // Return false because we couldn't find the prefix.
                return false;
            }

            // Otherwise, move to the next node.
            curr = curr->children[idx];
        }

        // If we reach here, the prefix exists.
        return true;
    }
};
