#include<stdio.h>

// ------------------------------ ADMIN SECTION -------------------
void AdminSection();

void AddLibrarian();
void RemoveLibrarian();
void ChangeLibrarianPassword();
// ------------------------------ LIBRARIAN SECTION ---------------
void LibrarianSection();

void AddMember();
void RemoveMember();
void BanMember();
void IssueBooks();
void BookReminder();
void PenaltyCalculator();
void RenewMembership();
// ------------------------------ USER SECTION --------------------
void UserSection();

void LendBook();
void ReturnBook();
void PayFines();
void ExtendTime();
// ============================== xxxxxxxxxxxxx ====================


int main(){
    printf("\t\t Project = Library Management System\n");
    printf("\t\t Developer Name = Mohd Mehdi\n");
    printf("\t\t Developer Roll Number = 21620002123\n");

    printf("1. Librarian Section\n");
    printf("2. User Section\n");
    printf("3. Admin Section\n");

    return 0;
}