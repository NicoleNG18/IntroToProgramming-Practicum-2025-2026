#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, curr = 1;
    for (int i = 0; i < n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return prev;
}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.