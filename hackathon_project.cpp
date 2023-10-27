#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class overview
{
	private:
		int age;
		float h_met,height,bmi,weight,i;
		char name[25],geneder,b_group[2];
		
		public:
			void get_dat()
			{
				
				cout<<"enter your name";
				gets(name);
				cout<<"enter your age ";
				cin>>age;
				cout<<"enter your weigth";
				cin>>weight;
				cout<<"enter your blood group";
				cin>>b_group;
				cout<<"enter your height";
				cin>>height;
				
			}
		int cal()
		{
			h_met=(height *0.3048);
			bmi=float(weight/(h_met*h_met));
			
			return (bmi);
		}
		int get_weight()
		{
			
			if(bmi<18)
			{
				
				return(1);
			
			}		
			else if(bmi==18&&bmi<=25)
			{
				
				return(2);
				
			}
			else if(bmi>25&&bmi<=30)
			{
				
				return(3);
				
			}
			else if(bmi>30&&bmi<=35)
			{
				
				return(4);
				
			}
			else if(bmi>35&&bmi<=40)
			{
				return(5);
			}
			else if(bmi>40)
			{
			
				return(6);
				
			}
			
		}
		
		void disp()
		{
			cout<<setw(10)<<"name"<<setw(5)<<"age"<<setw(10)<<"blood group"<<setw(10)<<"weight"<<setw(10)<<"height"<<endl;
			cout<<setw(10)<<name<<setw(5)<<age<<setw(10)<<b_group<<setw(10)<<weight<<setw(10)<<height<<endl;
		//	cout<<"you are"<<get_weight()<<"\n";
		
			if(get_weight()==1)
			{
				cout<<"your body is healthy\n";
			}
			else if(get_weight()==2)
			{
				cout<<"your body is in normal condition\n";
			}
			
			else if(get_weight()==3)
			{
			cout<<"your body is overweighted reduce your weight either it will cause health issue \n";
			}
			else if(get_weight()==4)
			{
				cout<<"obese 1";
				cout<<"you can have disease like-colloestrol,coma,sleep disorder,dandruff concern with dr either case will be serious"<<endl;
			}
			else if(get_weight()==5)
			{
				cout<<"obese 2";
				cout<<"you can have disease like-colloestrol,coma,sleep disorder,dandruff concern with dr you are in second stage of obese"<<endl;	
			}
			else if(get_weight()==6)
			{
				cout<<"obese 3";
			cout<<"serious case !!!!!!!!!!";
			cout<<"you can have disease like-colloestrol,coma,sleep disorder,dandruff quickly concern with dr you are in 2nd stage your case is serious "<<endl;	
			}
		}
		
};
class cause : public overview
{
	protected:
		int caus;
		char con;
		char dis1[30],dis2[30],dis3[30],dis4[30],dis5[30],dis6[30],dis7[30],dis8[30],dis9[30];
		char dis10[30],dis11[30],dis12[30],dis13[30],dis14[30],dis15[30],dis16[30],dis17[30],dis18[30],dis19[30];
		char dis20[30],dis21[30],dis22[30],dis23[30],dis24[30];
		public:
			cause()
			{
				strcpy(dis1,"fever");
				strcpy(dis2,"cold");
				strcpy(dis3,"headache");
				strcpy(dis4,"dengue");
				strcpy(dis5,"chicken pox");
				strcpy(dis6,"sneeze");
				strcpy(dis7,"vomiting");
				strcpy(dis8,"food poisoning");
				strcpy(dis9,"body pain");
				strcpy(dis10,"diarrhea");
				strcpy(dis11,"eye irritation");
				strcpy(dis12,"skin rashes");
				strcpy(dis13,"throat pain");
				strcpy(dis14,"diabetes stage 1");
				strcpy(dis15,"urinary tract infection");
				strcpy(dis16,"rabies");
				strcpy(dis17,"fatty liver");
				strcpy(dis18,"pneumonia");
				strcpy(dis19,"jaundice");
				strcpy(dis20,"typhoid");
				strcpy(dis21,"breathing trouble");
				strcpy(dis22,"anxiety");
				strcpy(dis23,"hair fall");
				strcpy(dis24,"acne");
			}
			void disp_data()
			{
			cout<<"if you have normal disease like-\n ";
			cout<<"fever=1\ncold=2\nheadache=3\ndengue=4\nchicken pox=5\nsneeze=6\nvomiting=7\nfood poisning=8\nbody pain=9\n";
			cout<<"diarrhea=10\neye irritation=11\nskin rashes=12\nthroat pain=13\ndiabetes satge 1 =14\nurinary tract infection=15\nrabies=16\n";
			cout<<"fatty liver=17\npneumonia=18\njaundice=19\ntyphoid=20\nbreathing trouble=21\nanxiety=22\nhair fall=23\nacne=24\n";
			}
			void disp_med()
			{
			for(;;)
			{
			cout<<"\n\nenter the respective number of the disease for which you want medicine";
			cin>>caus;	
				if(caus==1)
				{
					cout<<"medicine....\n";
					cout<<"paracetamol or crocin";
				}
				else if(caus==2)
				{
					cout<<"medicine....\n";
					cout<<"analgesic or aspirin";
			    }
			    else if(caus==3)
			   	{
					cout<<"medicine....\n";
					cout<<"ibuprofen and bed rest";
				}
				else if(caus==4)
			   	{
					cout<<"medicine....\n";
					cout<<"paracetamol,asprin,caripill and dolo650 ";
				}
				else if(caus==5)
			   	{
					cout<<"medicine....\n";
					cout<<"analgesic,antihistamine,sitavig and zovirax";
				}
				else if(caus==6)
			   	{
					cout<<"medicine....\n";
					cout<<"paracetamol,cetirizine and sipla ";
				}
				else if(caus==7)
			   	{
					cout<<"medicine....\n";
					cout<<"ors,bismuth subsalicylate and pantagra40";
				}
				else if(caus==8)
			   	{
					cout<<"medicine....\n";
					cout<<"bismuth subsalicylate and ors";
				}
				else if(caus==9)
			   	{
					cout<<"medicine....\n";
					cout<<"ors , imodium and bismuth subsalicylate ";
				}
				else if(caus==10)
			   	{
					cout<<"medicine....\n";
					cout<<" cetirizine , zyxal and claritin";
				}
				else if(caus==11)
			   	{
					cout<<"medicine....\n";
					cout<<"hydrocortisone cream";
				}
				else if(caus==12)
			   	{
					cout<<"medicine....\n";
					cout<<"acetaminophen,ibuprofen and aspirin";
				}
				else if(caus==13)
			   	{
					cout<<"medicine....\n";
					cout<<" metformin and linagliptin ";
				}
				else if(caus==14)
			   	{
					cout<<"medicine....\n";
					cout<<" ciprofloxacin and levofloxacin ";
				}
				else if(caus==15)
			   	{
					cout<<"medicine....\n";
					cout<<"hrig , rabies vaccine";
				}
				else if(caus==16)
			   	{
					cout<<"medicine....\n";
					cout<<"liv52";
				}
				else if(caus==17)
			   	{
					cout<<"medicine....\n";
					cout<<"zithromax and vibramycin";
				}
				else if(caus==18)
			   	{
					cout<<"medicine....\n";
					cout<<"rifampin , naltrexone and cholestyramine ";
				}
				else if(caus==19)
			   	{
					cout<<"medicine....\n";
					cout<<"syprofloxacyn";
				}
				else if(caus==20)
			   	{
					cout<<"medicine....\n";
					cout<<"theophylline";
				}
				else if(caus==21)
			   	{
					cout<<"medicine....\n";
					cout<<"citalopram and sertraline";
				}
				else if(caus==22)
			   	{
					cout<<"medicine....\n";
					cout<<"refollium and biotin";
				}
				else if(caus==23)
			   	{
					cout<<"medicine....\n";
					cout<<"minoxidil and finasteride";
				}
				else if(caus==24)
			   	{
					cout<<"medicine....\n";
					cout<<"tetracyline and macrolide";
				}		
			
			cout<<"\nif you want to continue to find medicine of another disease press y else n";
			cin>>con;
			if(con=='y'||con=='Y')
			{
				continue;
			}
			else
			{
				break;
			}
		}
		}		
};
class area
{
	private:
	char area1[30],area2[30],area3[30],area4[30],area5[30],area6[30],area7[30],area8[30];
	char area9[30],area10[30],area11[30],area12[30],area13[30],area14[30],area15[30],area16[30];
	char area17[30],area18[30],area19[30],area20[30],area21[30],area22[30],area23[30],area24[30];
	char area25[30];
	int rs;
//	string area30[25]={"bharat nagar","brown road","chaura bazar","civil lines","dholewal chownk","dugri","ferozpur road","field ganj","focal point","ghumar mandi","gill road","gt road","janta nagar","kichlu nagar","kochar market chownk","link road","industrial area ","madhopuri","miller ganj","model town","model town extension","pakhowal road","sabzi mandi road","sher pur chownk","transport nagar"};
	public:
		area()
		{
		strcpy(area1,"bharat nagar");
		strcpy(area2,"brown road");
		strcpy(area3,"chaura bazar");
		strcpy(area4,"civil lines");
		strcpy(area5,"dholewal chownk");
		strcpy(area6,"dugri");	
		strcpy(area7,"ferozpur road");
		strcpy(area8,"field ganj");
		strcpy(area9,"focal point");
		strcpy(area10,"ghumar mandi");
		strcpy(area11,"gill road");
		strcpy(area12,"gt road");
		strcpy(area13,"janta nagar");
		strcpy(area14,"kichlu nagar");
		strcpy(area15,"kochar market chownk");
		strcpy(area16,"link road");
		strcpy(area17,"industrial area ");
		strcpy(area18,"madhopuri");
		strcpy(area19,"miller ganj");
		strcpy(area20,"model town");
		strcpy(area21,"model town ex");
		strcpy(area22,"pakhowal road");
		strcpy(area23,"sabzi mandi road");
		strcpy(area24,"sher pur chownk");
		strcpy(area25,"transport nagar");
		}
		void disp_list()
		{
			cout<<"bharat nagar=13 /n brown road=19 /n chaura bazar=16 /n civil lines=1 /n dholewal chownk =5/n";
			cout<<" dugri=18 /n ferozpur road=17 /n field ganj=15 /n focal point=4 /n ghumar mandi=3 /n gill road=9/n";
			cout<<" janta nagar /n kichlu nagar=2 /n kochar market chownk=14 /n link road=20/n industrial area=6/n";
			cout<<" madhopuri=21 /n miller ganj=22 /n model town=11 /n model town extension==12 /n pakhowal road=23 /n ";
			cout<<" sabzi mandi road=24 /n sher pur chownk=7 /n transport nagar=25\n gt road=10\n";
		}
		void get_resi()
		{
			cout<<"choose your locality from above given list where your house is near";
			cin>>rs;
			
			if(rs==1||rs==2||rs==3)
			{
				cout<<"dmc is the best hospital near you";
				if(rs==1)
				{
					cout<<"civil line \n|\n|\n|\n|\n|\n|\n|\n\/\n baba than singh chownk\n|\n|\n|\n|\n|\n|\n|\n\/\n dmc";
				}
				else if(rs==2)
				{
					cout<<"kichliu nagar\n|\n|\n|\n|\n|\n|\n|\n\/ \n dugri\n|\n|\n|\n|\n|\n|\n|\n\/ \ndmc";
				}
				else if(rs==3)
				{
					cout<<"ghumar mandi\n|\n|\n|\n|\n|\n|\n|\n\/ \nsuhani building chownk\n|\n|\n|\n|\n|\n|\n|\n\/ \ndmc";
				}
			}
			else if(rs==4||rs==5||rs==6||rs==7)
			{
				cout<<"sps hospital is best hospital near you";
				if(rs==4)
				{
				cout<<"focal point \n|\n|\n|\n|\n|\n|\n|\n\/ \n take jamuu delhi road\n|\n|\n|\n|\n|\n|\n|\n\/ \nnear hotel riyasat"	;
				}
				else if(rs==5)
				{
				cout<<"dholewal chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n take jamuu delhi road\n|\n|\n|\n|\n|\n|\n|\n\/ \n near hotel riyasat"	;
				}
				else if(rs==6)
				{
					cout<<"industrial area  \n|\n|\n|\n|\n|\n|\n|\n\/ \n rk road  \n|\n|\n|\n|\n|\n|\n|\n\/ \n delhi multan road  \n-\n-\n-\n-\n-\n-\n-\n-\n>\n near hotel riyasat";
				}
				else if(rs==7)
				{
					cout<<"sherpur chownk\n|\n|\n|\n|\n|\n|\n|\n\/ \n take delhi multan road\n|\n|\n|\n|\n|\n|\n|\n\/ \n near hotel riyasat"	;
				}
			}
			else if(rs==9||rs==10)
			{
				cout<<"didar hospital is best hospital near you";
				 if (rs==9)
				{
					cout<<"gill road \n|\n|\n|\n|\n|\n|\n|\n\/ \n didar hospital ";
				}
				else if(rs==10)
				{
					cout<<"gt road\n|\n|\n|\n|\n|\n|\n|\n\/ \n ati road \n|\n|\n|\n|\n|\n|\n|\n\/ \n gill road n-\n-\n-\n-\n-\n-\n-\n-\n>\n didar hospital";
				}
			}
			else if(rs==11||rs==12)
			{
				cout<<"mittal hospital is best hospital near you";
				if(rs==11)
				{
				cout<<"model town\n|\n|\n|\n|\n|\n|\n|\n\/ \n brands road\n|\n|\n|\n|\n|\n|\n|\n\/ \n mittal hospital road \n-\n-\n-\n-\n-\n-\n-\n-\n>\n mittal hospital";	
				}
				else if(rs==12)
				{
					cout<<"model town extension \n|\n|\n|\n|\n|\n|\n|\n\/ \n baba deep singh road \n|\n|\n|\n|\n|\n|\n|\n\/ \n model town road \n-\n-\n-\n-\n-\n-\n-\n-\n>\n mittal hospital";
				}
			}
			else if(rs==13||rs==14)
			{
				cout<<"esic hospital is near you";
				if(rs==13)
				{
					cout<<"bharat nagar chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n esic";
				}
				else if(rs==14)
				{
					cout<<"kochar market chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n bharat nagar chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n esic";
				}
			}
			else if(rs==15)
			{
				cout<<"civil hospital is best hospital near you";
				cout<<"field ganj \n|\n|\n|\n|\n|\n|\n|\n\/ \n jail road \n|\n|\n|\n|\n|\n|\n|\n\/ \n civil hospital";
				
			}
			else if(rs==16)
			{
				cout<<"vijaynand hospital is best hospital near you";
				cout<<"chaura bazar \n|\n|\n|\n|\n|\n|\n|\n\/ \n shingar cinema road \n|\n|\n|\n|\n|\n|\n|\n\/ \n clock tower road \n|\n|\n|\n|\n|\n|\n|\n\/ \n clock tower \n|\n|\n|\n|\n|\n|\n|\n\/ \n fountain chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n vijaynand hospital";
			}
			else if(rs==17)
			{
				cout<<"gurdev hospital";
				cout<<"ferozpur road \n|\n|\n|\n|\n|\n|\n|\n\/ \n agar nagar block a \n|\n|\n|\n|\n|\n|\n|\n\/ \n gurdev hospital";
			}
			else if(rs==18)
			{
				cout<<" high care hospital is best hospital near you";
				cout<<"dugri road \n|\n|\n|\n|\n|\n|\n|\n\/ \n flower chownk\n|\n|\n|\n|\n|\n|\n|\n\/ \n basant avenue \n|\n|\n|\n|\n|\n|\n|\n\/ \n high care hospital ";
			}
			else if(rs==19)
			{
				cout<<"cmc hospital is best hospital near you";
				cout<<"brown road \n|\n|\n|\n|\n|\n|\n|\n\/ \n cni church \n|\n|\n|\n|\n|\n|\n|\n\/ \n cmc hospital";
			}
			else if(rs==20)
			{
				cout<<"bali hospital is best hospital near you";
				cout<<"link road \n|\n|\n|\n|\n|\n|\n|\n\/ \n chema chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n dholewal chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n gill chonk \n|\n|\n|\n|\n|\n|\n|\n\/ \nchattar singh park\n|\n|\n|\n|\n|\n|\n|\n\/ \n bali hospital";
			}
			else if(rs==21)
			{
				cout<<"jain hospital is best hospital near you";
				cout<<"madhopuri \n|\n|\n|\n|\n|\n|\n|\n\/ \n near old madhopuri chownk";
			}
			else if(rs==22)
			{
				cout<<"khosla hospital is best hospital near you";
				cout<<"millar ganj \n|\n|\n|\n|\n|\n|\n|\n\/ \n gill road \n|\n|\n|\n|\n|\n|\n|\n\/ \n vishkarma chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n near prakash dhaba";
			}
			else if(rs==23)
			{
				cout<<"anant hospital is best hospital near you";
				cout<<"pakhowal road \n|\n|\n|\n|\n|\n|\n|\n\/ \n bagwan nagar \n|\n|\n|\n|\n|\n|\n|\n\/ \nsamrala chownk \n|\n|\n|\n|\n|\n|\n|\n\/ \n near indian overseas bank";
			}
			else if(rs==24)
			{
				cout<<"kupor hospital is best hospital near you";
				cout<<"sabzi mandi road \n|\n|\n|\n|\n|\n|\n|\n\/ \n near anand palace ";
			}
			else if(rs==25)
			{
				cout<<"bawa hospital is best hospital near you";
				cout<<"tranport nagar \n|\n|\n|\n|\n|\n|\n|\n\/ \n miller ganj \n|\n|\n|\n|\n|\n|\n|\n\/ \n guru nanak stadium \n|\n|\n|\n|\n|\n|\n|\n\/ \n rakh bagh";
			}
		}
	
};
class majordisease:public area
{
	protected:
		char dise1[30],dise2[30],dise3[30],dise4[30],dise5[30],g_disease[30];
		public:
			majordisease()
			{
				strcpy(dise1,"cancer");
				strcpy(dise2,"cardic amest");
				strcpy(dise3,"aids");
				strcpy(dise4,"mall nutriation");
				strcpy(dise5,"thyroid");
			}
			char get_disease()
			{
				cout<<"enter your disease";
				gets(g_disease);
			//	return (g_disease);
			}
			void check_disease()
			{
				if(g_disease==dise1||g_disease==dise2||g_disease==dise3||g_disease==dise4||g_disease==dise5)
				{
					cout<<"you have to concern with dr!!!!";
					cout<<"\nwe can provide you best hospital nearby your house with dr name contact number\n";
				}
			}	
};
int main()
{

	int a,b;
	overview c1;
	c1.get_dat();
	c1.cal();
	cout<<"for body checkup press 1 and if you want to tell your disease press 2\n";
	cin>>a;
	switch (a)
	{
		case 1:
		c1.disp();
		break;
		case 2:
		cout<<"if you have normal disease press 3 and if major disease press 4";
		cin>>b;
		if(b==3)
		{
		cause c2;
		c2.disp_data();
		c2.disp_med();
		}
		else
		{
			majordisease c3;
			c3.get_disease();
			c3.check_disease();
			c3.disp_list();
			c3.get_resi();
		}
		break;
		default:
			cout<<" ";
	}

	
	
	
return 0;
}
