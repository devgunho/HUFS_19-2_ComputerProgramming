#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string input, w;
	vector<string> input_vec;
	vector<int> output_vec;

	getline(cin, input);
	for (stringstream stst(input); (stst >> w);)	// 문자열 input으로 만들어진 문자열 스트림 stst생성
	{	// 문자열 스트림 stst를 이용하여 한 단어씩 w에 입력
		// stst에 남은 단어가 없다면 NULL 반환							 
		input_vec.push_back(w);	// 단어 w를 input_vec에 추가
	}
	for (int i = 1; i < input_vec.size(); i += 2)
		output_vec.push_back(atoi(input_vec[i].c_str()));
	
	sort(output_vec.begin(), output_vec.end());
	for (int j = 0; j < output_vec.size(); j++)
		cout << output_vec[j] << " ";
	
	return 0;
}