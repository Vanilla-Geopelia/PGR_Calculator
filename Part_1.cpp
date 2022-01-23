//第一届PGR音游组 Rank计算器
#include <bits/stdc++.h>

using namespace std;

char p_name[256];

int main(){
	int game,pgr_yp;
	double song_score,p1_score,p1_acc,p_rks,rscore;
	
	cout<<"请输入选手的名字/昵称：";
	cin>>p_name;
	cout<<endl;
	cout<<"请输入所游玩的游戏编号：";
	cin>>game;
	cout<<endl;
	
	if(game==0){
		cout<<"你选择的游戏是：Phigros";
		cout<<endl;
		cout<<"请输入曲目定数：";
		cin>>song_score;
		cout<<endl;
		cout<<"请输入本次最终分数：";
		cin>>p1_score;
		cout<<endl;
		cout<<"请输入本次准确度(ACC，只输入百分号前的数字)：";
		cin>>p1_acc;
		cout<<endl;
		cout<<"请输入选手最高rks：";
		cin>>p_rks;
		cout<<endl;
		cout<<"选手本次选择的模式是否为严判模式？若是请输入1，否则输入0：";
		cin>>pgr_yp;
	}
	
	printf("\n请核对信息哟~~\n选手名字：");
	puts(p_name);
	printf("\n游玩游戏：Phigros");
	if(game == 0 && pgr_yp == 1)
	    printf("[严判模式]");
	printf("\n曲目定数：%.1lf\n本次分数：%d\n本次ACC%：%.2lf%c\n选手rks：%.2lf",song_score,(int)p1_score,p1_acc,'%',p_rks);
	
	if(pgr_yp == 1)
	    rscore = log(song_score/100.00*p1_acc*1000000) / p_rks / 0.40;
	else if(pgr_yp == 0)
	    rscore = log(song_score/100.00*p1_acc*1000000) /p_rks / 0.80;
	
	
	printf("\n小鸽子，你的最终分数出来啦~！\n你的最终分数是：%lf\n继续加油哟~",rscore);

return 0;
}
