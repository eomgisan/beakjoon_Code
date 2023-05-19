
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// M 은 남긴 마켓 수
// idx는 남길 마켓의 idx

vector<pair<unsigned short, unsigned short>> house;
vector<pair<unsigned short, unsigned short>> market;

bool isRemain[13] = { false, };
int N, M;
int rst = 100000000;


int dist(pair<unsigned short, unsigned short> h, pair<unsigned short, unsigned short>m) {
	return abs(h.first - m.first) + abs(h.second - m.second);
}


// dfs 사용이유 조합을 만들려고
void dfs(int cnt, int idx) {
	
	// M은 남길 market 수
	// idx는 새롭게 남기게 할 마켓
	// idx 를 가지는 이유는 조합이기때문에 지금 추가된 마켓에서 이전의 인덱스를 가지는 마켓은 신경 안쓰기위함
	// 즉 1 2 3 이후 2 1 3 을 선택 안하기 위함이다.
	if (cnt == M) {
		int total_dist = 0;


		for (auto h : house) {
			int dis = 10000;
			
			for (int i = 0; i < market.size(); i++) {
				if (!isRemain[i]) continue;
				
				int cal_dis = dist(h, market[i]);
				dis = dis > cal_dis ? cal_dis : dis;
			}
			total_dist += dis;
		}


		rst = rst > total_dist ? total_dist : rst;
	}
	else {
		for (int i = idx;i < market.size();i++) {
			if (isRemain[i]) continue;
			isRemain[i] = true;
			dfs(cnt + 1, i);
			isRemain[i] = false;
		}
	}


}




int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	
	cin >> N >> M;

	
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N;++j) {
			char temp;
			cin >> temp;
			if (temp == '1') house.push_back(make_pair(i, j));
			else if (temp == '2') market.push_back(make_pair(i, j));
			
		}
	}


	
	dfs(0, 0);

	cout << rst;
	return 0;
}


