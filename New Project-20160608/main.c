#include <stdio.h>
#include <string.h>

typedef struct MenuData {
	char message[30];
}menuData;

enum{
	MenuOpt,
	Department,
	Employe,
	PayRoll,
	CreateRecord,
	RetrieveRecord,
	UpdateRecord,
	DeleteRecord
	
};
int DisplayMenu(struct MenuData []);
int DisplayCount(struct MenuData []);
void DepartmentMenu();
void Employee();
void DisplayMessages(struct MenuData *, int opt);
void MainMenu();
void SwitchOpts(int,int);

int main(void) {
	MainMenu();
	return 0;
}

void MainMenu(){
    menuData display[4];
	int choice;
	DisplayMessages(display,MenuOpt);
	choice = DisplayMenu(display);
	SwitchOpts(choice,MenuOpt);
}
int DisplayMenu(struct MenuData display[]){
	int messageCount ,i ,choice=-1;
	messageCount = sizeof(display);
	
	for(i =0; i <messageCount; i++){
		printf("%s\n", display[i].message);
	}
	scanf("%d",&choice);
	return choice;
}

void SwitchOpts(int choice, int opt){
    
    if(MenuOpt == opt){
        switch(choice){
            case 1:
                DepartmentMenu();
                break;
            default:
                printf("Default of MenuOpt\n");
        }
    }else if (Department == opt){
         switch(choice){
            case 1:
                printf("Choice One of Department\n");
                break;
            default:
                printf("Choice Defualt of Department\n");
        }  
    }
}

void DepartmentMenu(){
    menuData display[4];
	int choice;
    strcpy( display[0].message, "1:Create Record");
	strcpy( display[1].message, "2:Retrieve Record");
	strcpy( display[2].message, "3:Update Record");
	strcpy( display[3].message, "3:Delete Record");
	choice = DisplayMenu(display);
	SwitchOpts(choice,Department);
	
}

void Employee(){
    
}

void DisplayMessages(struct MenuData *display, int opt){
    switch (opt){
        case MenuOpt:
            	strcpy( display[0].message, "1:Department");
	            strcpy( display[1].message, "2:Employee");
	            strcpy( display[2].message, "3:PayRoll");
	            break;
	   case Department:
	   case Employe:
	            strcpy( display[0].message, "1:Create Record");
	            strcpy( display[1].message, "2:Retrieve Record");
	            strcpy( display[2].message, "3:Update Record");
	            strcpy( display[2].message, "3:Delete Record");
	           break;
	   case PayRoll:
	            strcpy( display[0].message, "1:Create PayRoll");
	            strcpy( display[1].message, "2:Retrieve PayRoll");
	            strcpy( display[2].message, "3:Update PayRoll");
	            strcpy( display[2].message, "3:Delete PayRoll");
    }
}