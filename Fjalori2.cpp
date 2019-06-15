l exists (nyje *t,string text){
	if(t==NULL){
	
	return false;
}
if(t->celes== text){
	return true;
}
bool res1 = exists (t->majte,text);
bool res2= exists (t-> djathte,text);
 return res1||res2;
}
void  paraRendore(nyje*t){
	if(t!=NULL){
		cout <<t->celes<<endl;
		paraRendore(t->majte);
		paraRendore(t->djathte);
		
	}
}
void add(nyje*tmp,string f){
	while(tmp!=NULL){
		if(tmp->majte==NULL){
			tmp->majte==newNyje(f);
			break;
		}
	else{
		tmp=tmp->majte;
	}
	if(tmp->djathte==NULL){
		tmp->djathte=newNyje(f);
		break;
	}else{
		tmp=tmp->djathte;
	}
  }
}

int main(){
	 ifstream in;
	  nyje *p = newNyje("");
	  string fjale;
	   int count =0;
	   
	   
	   
	   	in.open("denata.txt");
	if(in.is_open()){
		while (!in.eof()){
			in>>fjale;
			if(exists(p,fjale)==false){
				add(p,fjale);
				count++;
			}
		}
		paraRendore(p);
		cout<<count<<"fjale te ndryshme."<<endl;
		
	}
	else{
		cout<<"Error";
	}
	in.close();
	return 0;
} 
