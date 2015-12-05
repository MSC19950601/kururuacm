#include<iostream>
#include<queue>
#include<string>
#include<cstring>

using namespace std;

const int maxn = 1000 + 10;
int visited[maxn];
char str[maxn];
int i;
bool flag;

struct node{
	char first;
	char last;
}a[maxn];

void dfs(int j){
	if (a[j].last == 'm'){
		flag = true;
		return;
	}
	else{
		for (int k = 0; k < i; k++){
			if (a[j].last == a[k].first && visited[k] == 0){
				visited[k] = 1;
				dfs(k);
			}
		}
	}
}

int main(){
	while (cin >> str){
		memset(visited, 0, sizeof(visited));
		i = 0;
		while (str[0] != '0'){
			int length = strlen(str);
			a[i].first = str[0];
			a[i].last = str[length - 1];
			i++;
			cin >> str;
		}
		flag = false;
		for (int j = 0; j < i; j++){
			if (a[j].first == 'b'){
				visited[j] = 1;
				dfs(j);
			}
			else   continue;
		}
		if (flag)
			cout << "Yes." << endl;
		else
			cout << "No." << endl;
	}

}
