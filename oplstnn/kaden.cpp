#include<iostream>
#define MAX_SYOHIN 100
using namespace std;
/////////////////////////////////////////////////////////////家電量販店クラス
class Kaden{
	public:
		int print();
};
int Kaden::print(){
	int choice,choice1,choice2,choice3,choice4,choice5;
	cout << "1 or 2 or 3 or 4の数字を選択してください" << endl;
	cout << "[1]商品の検索 [2]全商品の表示 [3]顧客の検索 [4]全顧客の表示" << endl;
	cin >> choice1;
	if(choice1==1){
		cout << "なんの商品をお探しですか？" << endl;
		cout << "[1]カメラ [2]PC [3]掃除機" << endl;
		cin >> choice2;
		if(choice2==1){
			cout << "カメラの何を表示しますか？" << endl;
			cout << "[1]全表示 [2]製造会社一覧 [3]製品価格平均 [4]在庫平均" << endl;
			cin >> choice3;
			if(choice3==1){
				choice=100;
			}
			else if(choice3==2){
				choice=101;
			}
			else if(choice3==3){
				choice=102;
			}
			else if(choice3==4){
				choice=103;
			}
			else{
				choice=999;
			}
		}
		else if(choice2==2){
			cout << "PCの何を表示しますか？" << endl;
			cout << "[1]全表示 [2]製造会社一覧 [3]製品価格平均 [4]在庫平均" << endl;
			cin >> choice4;
			if(choice4==1){
				choice=110;
			}
			else if(choice4==2){
				choice=111;
			}
			else if(choice4==3){
				choice=112;
			}
			else if(choice4==4){
				choice=113;
			}
			else{
				choice=999;
			}
		}
		else if(choice2==3){
			cout << "掃除機の何を表示しますか？" << endl;
			cout << "[1]全表示 [2]製造会社一覧 [3]製品価格平均 [4]在庫平均" << endl;
			cin >> choice4;
			if(choice4==1){
				choice=500;
			}
			else if(choice4==2){
				choice=501;
			}
			else if(choice4==3){
				choice=502;
			}
			else if(choice4==4){
				choice=503;
			}
			else{
				choice=999;
			}
		}
	}
	else if(choice1==2){
		cout << "当店の全商品を表示します" << endl;
		choice=99;
	}
	else if(choice1==3){
		cout << "顧客の何を表示しますか？" << endl;
		cout << "[1]全表示 [2]氏名一覧 [3]顧客ポイント平均" << endl;
		cin >> choice5;
		if(choice5==1){
			choice=1001;
		}
		else if(choice5==2){
			choice=1002;
		}
		else if(choice5==3){
			choice=1003;
		}
		else{
			choice=999;
		}
	}
	else if(choice1==4){
		cout << "当店の全顧客を表示します" << endl;
		choice=1000;
	}
	return choice;
}


///////////////////////////////////////////////////////////カメラクラス
class Camera{
	char *com_camera;
	char *col_camera;
	int price_camera;
	int zaiko_camera;
	public:
		Camera();
		Camera(char *comcam, char *colcam, int pric, int zaic);
		char *getName();
		char *getColor();
		int getprice_camera();
		int	getzaiko_camera();
};
Camera::Camera(){
	com_camera = "";
	col_camera = "";
	price_camera = 0;
	zaiko_camera = 0;
}
Camera::Camera(char *comcam, char *colcam, int pric, int zaic){
	com_camera = comcam;
	col_camera = colcam;
	price_camera = pric;
	zaiko_camera = zaic;
}
char *Camera::getName(){
	return(com_camera);
}
char *Camera::getColor(){
	return(col_camera);
}
int Camera::getprice_camera(){
	return(price_camera);
}
int Camera::getzaiko_camera(){
	return(zaiko_camera);
}


///////////////////////////////////////////////////////////PCクラス
class PC{
	char *com_pc;
	char *col_pc;
	int  price_pc;
	int  zaiko_pc;
	public:
		PC();
		PC(char *compc, char *colpc, int prip, int zaip);
		char *getName();
		char *getColor();
		int getprice_pc();
		int getzaiko_pc();
};
PC::PC(){
	com_pc = "";
	col_pc = "";
	price_pc = 0;
	zaiko_pc = 0;
}
PC::PC(char *compc, char *colpc, int prip, int zaip){
	com_pc = compc;
	col_pc = colpc;
	price_pc = prip;
	zaiko_pc = zaip;
}
char *PC::getName(){
	return(com_pc);
}
char *PC::getColor(){
	return(col_pc);
}
int PC::getprice_pc(){
	return(price_pc);
}
int PC::getzaiko_pc(){
	return(zaiko_pc);
}


///////////////////////////////////////////////////////////掃除機クラス
class Sojiki{
	char *com_soj;
	char *col_soj;
	int price_soj;
	int zaiko_soj;
	public:
		Sojiki();
		Sojiki(char *comsoj, char *colsoj, int pris, int zais);
		char *getName();
		char *getColor();
		int getprice_soj();
		int getzaiko_soj();
};
Sojiki::Sojiki(){
	com_soj = "";
	col_soj = "";
	price_soj = 0;
	zaiko_soj = 0;
}
Sojiki::Sojiki(char *comsoj, char *colsoj, int pris, int zais){
	com_soj = comsoj;
	col_soj = colsoj;
	price_soj = pris;
	zaiko_soj = zais;
}
char *Sojiki::getName(){
	return(com_soj);
}
char *Sojiki::getColor(){
	return(col_soj);
}
int Sojiki::getprice_soj(){
	return(price_soj);
}
int Sojiki::getzaiko_soj(){
	return(zaiko_soj);
}


////////////////////////////////////////////////////////////////顧客クラス
class Kokyaku{
	char *name_kokyaku;
	char *rank_kokyaku;
	int point_kokyaku;
	public:
		Kokyaku();
		Kokyaku(char *namkok, char *rankok, int point);
		char *getName();
		char *getRank();
		int getpoint_kokyaku();
};
Kokyaku::Kokyaku(){
	name_kokyaku = "";
	rank_kokyaku = "";
	point_kokyaku = 0;
}
Kokyaku::Kokyaku(char *namkok, char *rankok, int point){
	name_kokyaku = namkok;
	rank_kokyaku = rankok;
	point_kokyaku = point;
}
char *Kokyaku::getName(){
	return(name_kokyaku);
}
char *Kokyaku::getRank(){
	return(rank_kokyaku);
}
int Kokyaku::getpoint_kokyaku(){
	return(point_kokyaku);
}


///////////////////////////////////////////////////////////商品クラス
class Syohin{
	Camera *cameras[MAX_SYOHIN];
	PC *pcs[MAX_SYOHIN];
	Sojiki *sojikis[MAX_SYOHIN];
	Kokyaku	*kokyakus[MAX_SYOHIN];
	public:
		Syohin();
		void printcom_cam();
		void printcom_pc();
		void printcom_soj();
		void printname_kokyaku();
		void setCamera(Camera *pcamera, int num);
		void setPC(PC *ppc, int num);
		void setSojiki(Sojiki *psojiki, int num);
		void setKokyaku(Kokyaku *pkokyaku, int num);
		void avepri_camera();
		void avepri_pc();
		void avepri_sojiki();
		void avezai_camera();
		void avezai_pc();
		void avezai_sojiki();
		void avepoi_kokyaku();
		void Syohin::print_all();
		void Syohin::print_all_cam();
		void Syohin::print_all_pc();
		void Syohin::print_all_soj();
		void Syohin::print_all_kokyaku();
};
Syohin::Syohin(){
	int i;
	for(i=0; i<MAX_SYOHIN; i++){
		cameras[i] = NULL;
		pcs[i] = NULL;
		sojikis[i] = NULL;
		kokyakus[i] = NULL;
	}
}
void Syohin::printcom_cam(){
	int i;
	cout << "" << endl;
	cout << "[全製造会社]" << endl;
	for(i=0; cameras[i] != NULL; i++){
		cout << cameras[i]->getName() << endl;
	}
}
void Syohin::printcom_pc(){
	int i;
	cout << "" << endl;
	cout << "[全製造会社]" << endl;
	for(i=0; pcs[i] != NULL; i++){
		cout << pcs[i]->getName() << endl;
	}
}
void Syohin::printcom_soj(){
	int i;
	cout << "" << endl;
	cout << "[全製造会社]" << endl;
	for(i=0; sojikis[i] != NULL; i++){
		cout << sojikis[i]->getName() << endl;
	}
}
void Syohin::printname_kokyaku(){
	int i;
	cout << "" << endl;
	cout << "[全顧客氏名]" << endl;
	for(i=0; kokyakus[i] != NULL; i++){
		cout << kokyakus[i]->getName() << endl;
	}
}
void Syohin::print_all(){
	int i;
	cout << "" << endl;
	cout << "[全商品一覧表示]" << endl;
	cout <<	"#会社" << "\t" << flush;
	cout <<	"#色" << "\t" << flush;
	cout <<	"#価格"	<< "\t" << flush;
	cout <<	"#在庫" << endl;
	cout <<	"---カメラ---" << endl;
	
	for(i=0; pcs[i] != NULL; i++){
		cout <<	cameras[i]->getName() << "\t" << flush;
		cout <<	cameras[i]->getColor() << "\t" << flush;
		cout <<	cameras[i]->getprice_camera() << "\t" << flush;
		cout <<	cameras[i]->getzaiko_camera() << endl;
	}
	cout << "---PC---" << endl;
	for(i=0; pcs[i] != NULL; i++){
		cout <<	pcs[i]->getName() << "\t" << flush;
		cout <<	pcs[i]->getColor() << "\t" << flush;
		cout << pcs[i]->getprice_pc() << "\t" << flush;
		cout << pcs[i]->getzaiko_pc() << endl;
	}
	cout <<	"---掃除機---"	<<	endl;
	for(i=0; sojikis[i] != NULL; i++){
		cout <<	sojikis[i]->getName() << "\t" << flush;
		cout <<	sojikis[i]->getColor() << "\t" << flush;
		cout <<	sojikis[i]->getprice_soj() << "\t" << flush;
		cout <<	sojikis[i]->getzaiko_soj() << endl;
	}
}
void Syohin::print_all_cam(){
	int i;
	cout << "" << endl;
	cout << "[全カメラ一覧表示]" << endl;
	cout << "#会社" << "\t" << flush;
	cout << "#色" << "\t" << flush;
	cout << "#価格" << "\t" << flush;
	cout << "#在庫" << endl;
	for(i=0; pcs[i] != NULL; i++){
		cout << cameras[i]->getName() << "\t" << flush;
		cout << cameras[i]->getColor() << "\t" << flush;
		cout << cameras[i]->getprice_camera() << "\t" << flush;
		cout << cameras[i]->getzaiko_camera() << endl;
	}
}
void Syohin::print_all_pc(){
	int i;
	cout << "" <<endl;
	cout << "[全PC一覧表示]"	<<endl;
	cout << "#会社" << "\t" << flush;
	cout <<  "#色" << "\t" << flush;
	cout << "#価格" << "\t" << flush;
	cout << "#在庫" <<endl;
	for(i=0; pcs[i] != NULL; i++){
		cout << pcs[i]->getName() << "\t" << flush;
		cout << pcs[i]->getColor() << "\t" << flush;
		cout << pcs[i]->getprice_pc() << "\t" << flush;
		cout << pcs[i]->getzaiko_pc() << endl;
	}
}
void Syohin::print_all_soj(){
	int i;
	cout << "" << endl;
	cout << "[全掃除機一覧表示]" << endl;
	cout << "#会社" << "\t" << flush;
	cout << "#色" << "\t" << flush;
	cout << "#価格" << "\t" << flush;
	cout << "#在庫" << endl;
	for(i=0; sojikis[i] != NULL; i++){
		cout << sojikis[i]->getName() << "\t" << flush;
		cout << sojikis[i]->getColor() << "\t" << flush;
		cout << sojikis[i]->getprice_soj() << "\t" << flush;
		cout << sojikis[i]->getzaiko_soj() << endl;
	}
}
void Syohin::print_all_kokyaku(){
	int i;
	cout << "" << endl;
	cout << "[全顧客一覧表示]" << endl;
	cout << "#氏名" << "\t" << flush;
	cout <<"#ランク" << "\t" << flush;
	cout << "#保有ポイント" << endl;
	for(i=0; pcs[i] != NULL; i++){
		cout << kokyakus[i]->getName() << "\t" << flush;
		cout << kokyakus[i]->getRank() << "\t" << flush;
		cout << kokyakus[i]->getpoint_kokyaku() << endl;
	}
}
void Syohin::setCamera(Camera *pcamera, int num){
	cameras[num] = pcamera;
}
void Syohin::setPC(PC *ppc, int num){
	pcs[num] = ppc;
}
void Syohin::setSojiki(Sojiki *psojiki, int num){
	sojikis[num] = psojiki;
}
void Syohin::setKokyaku(Kokyaku *pkokyaku, int num){
	kokyakus[num] = pkokyaku;
}
void Syohin::avepri_camera(){
	int i;
	int prisum_cam=0;
	double priave_cam;
	for(i=0; cameras[i] != NULL; i++){
		prisum_cam += cameras[i]->getprice_camera();
	}
	priave_cam = prisum_cam/3.0;
	cout << "" << endl;
	cout << "[カメラ価格平均]" << endl;
	cout << priave_cam << "円" << endl;
}
void Syohin::avepri_pc(){
	int i;
	int prisum_pc=0;
	double priave_pc;
	for(i=0; pcs[i] != NULL; i++){
		prisum_pc += pcs[i]->getprice_pc();
	}
	priave_pc = prisum_pc/3.0;
	cout << "" << endl;
	cout << "[PC価格平均]" << endl;
	cout << priave_pc << "円" << endl;
}
void Syohin::avepri_sojiki(){
	int i;
	int prisum_soj=0;
	double priave_soj;
	for(i=0; sojikis[i] != NULL; i++){
		prisum_soj += sojikis[i]->getprice_soj();
	}
	priave_soj = prisum_soj/3.0;
	cout << "" << endl;
	cout << "[掃除機価格平均]" << endl;
	cout << priave_soj << "円" << endl;
}
void Syohin::avezai_camera(){
	int i;
	int ziksum_cam=0;
	double zikave_cam;
	for(i=0; cameras[i] != NULL; i++){
		ziksum_cam += cameras[i]->getzaiko_camera();
	}
	zikave_cam = ziksum_cam/3.0;
	cout << "" << endl;
	cout << "[カメラ在庫平均]" << endl;
	cout << zikave_cam << "個" << endl;
}
void Syohin::avezai_pc(){
	int i;
	int ziksum_pc=0;
	double zikave_pc;
	for(i=0; pcs[i] != NULL; i++){
		ziksum_pc += pcs[i]->getzaiko_pc();
	}
	zikave_pc = ziksum_pc/3.0;
	cout << "" << endl;
	cout << "[PC在庫平均]" << endl;
	cout << zikave_pc << "個" << endl;
}
void Syohin::avezai_sojiki(){
	int i;
	int ziksum_soj=0;
	double zikave_soj;
	for(i=0; sojikis[i] != NULL; i++){
		ziksum_soj += sojikis[i]->getzaiko_soj();
	}
	zikave_soj = ziksum_soj/3.0;
	cout << "" << endl;
	cout << "[掃除機在庫平均]" << endl;
	cout << zikave_soj << "個" << endl;
}
void Syohin::avepoi_kokyaku(){
	int i;
	int sum_point=0;
	double ave_point;
	for(i=0; kokyakus[i] != NULL; i++){
		sum_point += kokyakus[i]->getpoint_kokyaku();
	}
	ave_point = sum_point/3.0;
	cout << "" << endl;
	cout << "[平均保持ポイント]" << endl;
	cout << ave_point << "pt" << endl;
}


///////////////////////////////////////////////////////////main関数
int main(){
	int ch=999;
	Kaden kaden;
	Syohin syohin;
	Camera *camera1, *camera2, *camera3;
	PC *pc1, *pc2, *pc3;
	Sojiki *sojiki1, *sojiki2, *sojiki3;
	Kokyaku *kokyaku1, *kokyaku2, *kokyaku3, *kokyaku4;	
	
	camera1 = new Camera("Nicon","red",92000,21);
	syohin.setCamera(camera1,0);
	
	camera2 = new Camera("Canon","blue",64500,5);
	syohin.setCamera(camera2,1);
	
	camera3 = new Camera("Sony","black",86000,17);
	syohin.setCamera(camera3,2);
	
	pc1 = new PC("富士通","silver",110000,21);
	syohin.setPC(pc1,0);
	
	pc2 = new PC("ASUS","blown",59200,5);
	syohin.setPC(pc2,1);
	
	pc3 = new PC("DELL","black",88000,17);
	syohin.setPC(pc3,2);
	
	sojiki1 = new Sojiki("東芝","silver",62000,3);
	syohin.setSojiki(sojiki1,0);
	
	sojiki2 = new Sojiki("富士通","white",53800,12);
	syohin.setSojiki(sojiki2,1);
	
	sojiki3 = new Sojiki("dyson","blue",42000,19);
	syohin.setSojiki(sojiki3,2);
	
	kokyaku1 = new Kokyaku("古谷","GOLD",149900);
	syohin.setKokyaku(kokyaku1,0);
	
	kokyaku2 = new Kokyaku("長 ","BRONS",120);
	syohin.setKokyaku(kokyaku2,1);
	
	kokyaku3 = new Kokyaku("矢嶋","SILVER",2100);
	syohin.setKokyaku(kokyaku3,2);
	
	while(ch==999){
		ch = kaden.print();
	}
	if(ch==99){
		syohin.print_all();
	}
	if(ch==100){
		syohin.print_all_cam();
	}
	if(ch==101){
		syohin.printcom_cam();
	}
	if(ch==102){
		syohin.avepri_camera();
	}
	if(ch==103){
		syohin.avezai_camera();
	}
	if(ch==110){
		syohin.print_all_pc();
	}
	if(ch==111){
		syohin.printcom_pc();
	}
	if(ch==112){
		syohin.avepri_pc();
	}
	if(ch==113){
		syohin.avezai_pc();
	}
	if(ch==500){
		syohin.print_all_soj();
	}
	if(ch==501){
		syohin.printcom_soj();
	}
	if(ch==502){
		syohin.avepri_sojiki();
	}
	if(ch==503){
		syohin.avezai_sojiki();
	}
	if(ch==1000){
		syohin.print_all_kokyaku();
	}
	if(ch==1001){
		syohin.print_all_kokyaku();
	}
	if(ch==1002){
		syohin.printname_kokyaku();
	}
	if(ch==1003){
		syohin.avepoi_kokyaku();
	}
	delete camera1;
	delete camera2;
	delete camera3;
	delete pc1;
	delete pc2;
	delete pc3;
	delete sojiki1;
	delete sojiki2;
	delete sojiki3;
	delete kokyaku1;
	delete kokyaku2;
	delete kokyaku3;
}