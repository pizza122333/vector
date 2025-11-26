#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;   // 정수 저장용 vector
    int num;

    cout << "정수 4개를 입력하시오: ";

    // 정수 4개 입력받기
    for(int i = 0; i < 4; i++) {
        cin >> num;
        v.push_back(num);   // vector 끝에 추가
    }

    // 최대값, 최소값 초기화
    int max_val = v[0];
    int min_val = v[0];

    // vector 순회하여 최대/최소값 계산
    for(size_t i = 0; i < v.size(); i++) {
        if(v[i] > max_val) max_val = v[i];
        if(v[i] < min_val) min_val = v[i];
    }

    cout << "최대값은 " << max_val << ", 최소값은 " << min_val << "입니다" << endl;

    return 0;
}
