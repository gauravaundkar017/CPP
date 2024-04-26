#include <iostream>
#include <fstream>

using namespace std;
void display(){
    cout<<"1. Create new file. "<<endl;
    cout<<"2. Write data into file. "<<endl;
    cout<<"3. Read data from file. "<<endl;
    cout<<"4. Append to the file. "<<endl;
    cout<<"5. Make copy of file. "<<endl;
    cout<<"6. Exit\n "<<endl;
    cout<<"Enter your choice : ";

}
void createFile(){
    string fileName ;
    cout<<"Enter file name : ";
    cin>>fileName;
    ofstream file(fileName);

    cout<<"\n-----------File created successfully------------\n";

}

void writeFile(){
    string fileName, content ;
    cout<<"Enter file name : ";
    cin>>fileName;
    ofstream file(fileName);
    cout<<"Enter the content and enter x to close file : ";
    while (getline(cin,content))
    {
        if (content == "x")
        {
            break;
        }
        
        file<<content<<endl;
    }
    file.close();
    cout<<"--------------Content added in file-------------\n ";
}

void readFile(){
    string fileName, data ;
    cout<<"Enter file name : ";
    cin>>fileName;
    ifstream file(fileName);
    if (file.is_open()){
        cout << "Data is : ";
        while (getline(file, data))
        {
            cout<< data <<endl;
        }
        file.close();
    }else{
        cout<<"Unable to open file"<<endl;
    }
    cout<<"\n-----------File Readed successfully------------\n";

}

void appendFile(){
    string fileName, content;
    cout<<"Enter file name : ";
    cin>>fileName; 
    ofstream file(fileName , ios::app);
    cout<<"Enter the content and enter x to close file : ";
    while (getline(cin,content))
    {
        if (content == "x")
        {
            break;
        }
        
        file<<content<<endl;
    }
    file.close();
    cout<<"--------------Content added in file-------------\n ";

}


void createCopyOfFile(){
    string sourceFileName, destinationFileName, data;
    cout<<"Enter Source File name : ";
    cin>>sourceFileName;
    cout<<"Enter Destination File name : ";
    cin>>destinationFileName;

    ifstream sourceFile(sourceFileName);
    ofstream destinationFile(destinationFileName);

    if (sourceFile.is_open() && destinationFile.is_open())
    {
        while (getline(sourceFile, data))
        {
            destinationFile<<data<<endl;
        }
        cout<<"File copied sucessfully. "<<endl;
        
        sourceFile.close();
        destinationFile.close();
    }else{
        cout<<"Unable to open file. Please try again. "<<endl;
    }
    

}

int main(){
    int choice ;

    do
    {
        display();
        cin>>choice;
        switch (choice)
        {
        case 1 :
            createFile();
            break;
        
        case 2 :
            writeFile();
            break;
        
        case 3 :
            readFile();
            break;
        
        case 4 :
            appendFile();
            break;
        
        case 5 :
            createCopyOfFile();
            break;
        
        case 6 :
            cout<<"Exit."<<endl;
            break;
        
        default:
            break;
        }

        
    } while (choice != 6);
    

    return 0;
}