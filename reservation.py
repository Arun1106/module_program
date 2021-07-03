import random
slots=[]
for i in range(0,10):
    slots.append(0)
def random_num():
    y=random.randint(1,10)
    if slots[y]==0:
        return y
    else:
        index=slots.index(0)
        return index
class Vehiclestand:
    def __init__(self,vehiclenumber):
        self.vehiclenumber=vehiclenumber
    def check_slot(self):
        if slots.count(0)>0:
            x=random_num()
            if slots[x]==0:
                print("Your parking slot is:",x+1)
                slots[x]=self.vehiclenumber
                main_menu()
        else:
            print("Sorry slot is full :( !")
            main_menu()


def bookticket():
    print("Hi!Welcome\n")
    print("Select\n'1' for Car and Bike")
    ticket_choice=int(input())
    if ticket_choice==1:
        vehiclenumber=int(input("Enter Vehicle No!"))
        if vehiclenumber>0:
            book=Vehiclestand(vehiclenumber)
            book.check_slot()
        else:
            print("please provide valid vehicle number\n")
            bookticket()
    else:
        print("Not availble\nChoose again\n")
        bookticket()
def cancellation():
    slot_number=int(input("Enter slot number"))
    if slots[slot_number-1]!=0:
        vehicle_num=int(input("Enter vehicle number"))
        if slots[slot_number-1]==vehicle_num:
            slots[slot_number-1]=0
            print("Yeah you may leave now!")
            main_menu()
        else:
            print("Sorry Try Again!")
            cancellation()
    else:
         print("Sorry Try Again!")
         cancellation()



def main_menu():
    print("Hello only",slots.count(0),"slots available Hurry up!")
    print("Choose the option\n")
    print("1-Book a ticket\n")
    print("2-Cancel a ticket\n")
    choice=int(input())
    if choice>=1 and choice <=2:
        if choice ==1:
            bookticket()
        elif choice==2:
            cancellation()
    else:
        print("Not availble\nChoose again\n")
        main_menu()

main_menu()