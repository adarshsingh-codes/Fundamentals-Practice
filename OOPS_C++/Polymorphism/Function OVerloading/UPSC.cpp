// Ragul is the head of the UPSC (Union Public Service Commission) and he needs to schedule interviews for candidates applying for various government positions. The interview slots are divided into three available time slots: Slot A, Slot B, and Slot C. Additionally, each candidate can provide a preferred slot.
// Implement a program that takes candidate details and schedules their interviews based on the given constraints.
// Create a class called UPSCInterviewScheduler that will manage the interview scheduling process. This class will have the following methods and functionalities:
// In the UPSCInterviewScheduler class, implement function overloading for the printSlot method. Create two versions of the method:
// printSlot(const string& slot, const string& preferredSlot): This version of the method will be used to print the assigned slots as described above.
// printSlot(const string& slot): This version of the method will be used to print a regular slot without considering the preferred slot.
// Input format :
// For each candidate, The input consists of the following format:
// Three available interview slots (slot1, slot2, slot3), each as a string.
// The candidate's preferred slot (preferredSlot), a string.
// Refer to the sample input for the formatting specifications.
// Output format :
// The output displays the following format:
// For each candidate, the program should output the assigned slots as follows:
// If a slot is the preferred slot, it should be marked as "Preferred."
// If a slot is not the preferred slot, it should be marked as a regular slot.

#include<bits/stdc++.h>
using namespace std;
class UPSCInterviewScheduler{
public:
    void printSlot(const string&slot,const string&preferredslot){
        if(slot==preferredslot){
            cout<<"- "<<slot<<" (Preferred)"<<endl;
        }else{
            cout<<"- "<<slot<<endl;
        }
    }
    void printSlot(const string&slot){
        cout<<"- "<<slot<<endl;
    }
};
int main(){
    string slot[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>slot[i][j];
        }
    }
    string pref;
    cin>>pref;
    UPSCInterviewScheduler u;
    for(int i=0;i<2;i++){
        cout<<"Candidate "<<i+1<<endl;
        for(int j=0;j<3;j++){
            if(pref=="none"){
                u.printSlot(slot[i][j]);
            }else{
                u.printSlot(slot[i][j],pref);
            }
        }
    }
    return 0;
}