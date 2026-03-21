#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 110000;
bool is_prime[MAX];
int dist_to_prime[MAX];

void sieve() {
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAX; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX; i += p)
                is_prime[i] = false;
        }
    }

    for (int i = MAX - 1; i >= 0; i--) {
        if (is_prime[i]) {
            dist_to_prime[i] = 0;
        } else {
            dist_to_prime[i] = dist_to_prime[i + 1] + 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val;
            cin >> val;
            matrix[i][j] = dist_to_prime[val];
        }
    }

    long long min_moves = 2e18;

    for (int i = 0; i < n; i++) {
        long long current_row_sum = 0;
        for (int j = 0; j < m; j++) {
            current_row_sum += matrix[i][j];
        }
        min_moves = min(min_moves, current_row_sum);
    }

    for (int j = 0; j < m; j++) {
        long long current_col_sum = 0;
        for (int i = 0; i < n; i++) {
            current_col_sum += matrix[i][j];
        }
        min_moves = min(min_moves, current_col_sum);
    }

    cout << min_moves << endl;

    return 0;
}