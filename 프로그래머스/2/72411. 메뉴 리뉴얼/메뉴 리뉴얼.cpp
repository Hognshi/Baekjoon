#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    unordered_map<string, int> comboCount;
    
    // 모든 주문을 정렬
    for (string& order : orders) {
        sort(order.begin(), order.end());
    }

    // 각 코스 요리 수에 대해 조합 계산
    for (int c : course) {
        comboCount.clear();
        for (string& order : orders) {
            if (order.size() < c) continue;
            vector<bool> v(order.size() - c, false);
            v.insert(v.end(), c, true);
            do {
                string combo = "";
                for (int i = 0; i < order.size(); ++i) {
                    if (v[i]) combo += order[i];
                }
                comboCount[combo]++;
            } while (next_permutation(v.begin(), v.end()));
        }

        // 가장 많이 주문된 조합을 찾기
        int maxCount = 2;
        for (auto& pair : comboCount) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
            }
        }
        for (auto& pair : comboCount) {
            if (pair.second == maxCount) {
                answer.push_back(pair.first);
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
