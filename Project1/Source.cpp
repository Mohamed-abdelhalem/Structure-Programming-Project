#include <iostream>
#include <cstring>
#define max_number 10000
using namespace std;

int number_of_Items = 1, number_of_Id = 1, numberOfgategory, number_OF_PeopleID = 1, numberITEM = 1, peopleID;
int item_price, number_Item, number_people, day, month, feedback, num;
char choise5, choise6, choise7, choise8;
char ok;

struct members /// Data For people who enter the system.
{
    int id[max_number], password[max_number], phone_number[max_number], points[max_number];
    string Name[max_number], e_mail[max_number], delivery_address[max_number], list_of_items[max_number];
} people;

struct items  /// Data for the items which the sell enter it.
{
    int number_item[max_number], month_of_available[max_number], month_of_unavailable[max_number], day_of_available[max_number];
    float price[max_number];
    int model[max_number], numGATEGORY[max_number], day_of_unavailable[max_number], category[6];
    string type[max_number], condition[max_number], gategory[max_number];
    bool is_sold[max_number];
} require;

void email(string first_name, string last_name)
{
    cout << first_name << last_name << "@gmail.com" << endl;
}

void buying(int number_Item)
{
    for (int numberITEM = 1; numberITEM <= max_number; numberITEM++)
    {
        if ((month <= require.month_of_unavailable[number_Item] && month >= require.month_of_available[number_Item]) &&

            (day >= require.day_of_available[number_Item] && day <= require.day_of_unavailable[number_Item]))
            cout << " ";
        else
        {
            cout << "This Item Is No Longer Available" << endl;
            cout << "Please Choose Another Item is Available" << endl;
            break;
        }
        cout << "To The Seller ,the Item Number " << number_Item << " " << "Required" << endl;
        cout << "Are you Agree ? " << endl;
        cout << "Enter (Y/y) for yes or (n/N) for No" << endl;
        char responed;
        cin >> responed;
        if (responed == 'y' || responed == 'Y')
        {
            cout << "What Is your Feed back about The Buyer" << endl;
            cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
            cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
            cout << "He was Excellent : Enter 5" << endl;
            cin >> feedback;
            cout << "Enter His Id " << endl;
            cin >> peopleID;
            for (int num13 = peopleID; num13 < number_OF_PeopleID; num13++)
            {
                if (feedback >= 3)
                {
                    people.points[num13]++;
                    break;
                }
                else
                    break;
            }
            require.is_sold[numberITEM] = true;
            cout << "I Agree To buy it" << endl;

        } /// End IF
        else
        {
            cout << "What Is your Feed back about The Buyer" << endl;
            cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
            cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
            cout << "He was Excellent : Enter 5" << endl;
            cin >> feedback;
            cout << "Enter His Id " << endl;
            cin >> peopleID;
            for (int num14 = peopleID; num14 < number_OF_PeopleID; num14++)
            {
                if (feedback >= 3)
                {
                    people.points[num14]++;
                    break;
                }
                else
                    break;
            }
            cout << "I Disagree To buy it" << endl;
            require.is_sold[numberITEM] = false;

        } /// End Else
        break;
    } ///End FOR LOOB
} ///End function


void buying_with_price(int item_price, int number_Item)
{
    for (int num15 = 1; num15 <= 3; num15++)
    {
        if ((month <= require.month_of_unavailable[number_Item] && month >= require.month_of_available[number_Item]) &&
            (day >= require.day_of_available[number_Item] && day <= require.day_of_unavailable[number_Item]))
            cout << " ";
        else
        {
            cout << "This Item Is No Longer Available" << endl;
            cout << "Please Choose Another Item is Available" << endl;
            break;
        }
    }
    cout << "To The Seller , the Item Number " << number_Item << " " << "Required with Price" << " " << item_price << endl;
    cout << "Are you Agree ? " << endl;
    cout << "Enter (Y/y) for yes or (n/N) for No" << endl;
    char responed2;
    cin >> responed2;
    if (responed2 == 'y' || responed2 == 'Y')
    {
        cout << "What Is your Feed back about The Buyer" << endl;
        cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
        cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
        cout << "He was Excellent : Enter 5" << endl;
        cin >> feedback;
        cout << "Enter His Id " << endl;
        cin >> peopleID;
        for (int num16 = peopleID; num16 < number_OF_PeopleID; num16++)
        {
            if (feedback >= 3)
            {
                people.points[num16]++;
                break;
            }
            else
                break;
            require.is_sold[number_Item] = true;
            cout << "I Agree To buy it" << endl;
        }
    } ///END IF
    else
    {
        cout << "What Is your Feed back about The Buyer" << endl;
        cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
        cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
        cout << "He was Excellent : Enter 5" << endl;
        cin >> feedback;
        cout << "Enter His Id " << endl;
        cin >> peopleID;
        for (int num17 = peopleID; num17 < number_OF_PeopleID; num17++)
        {
            if (feedback >= 3)
            {
                people.points[num17]++;
                break;
            }
            else
                break;
            require.is_sold[number_Item] = false;
            cout << "I Disagree To buy it" << endl;
        }
    } /// END ELSE
} /// End FUNCTION


void SEE_GATEBORY_WITH_PRICE(int numberOfgategory)
{
    for (int num18 = 1; num18 <= 6; num18++)
    {
        int again;
        cout << "Confirm Your Gategory" << endl;
        cin >> again;
        if (again == numberOfgategory)
        {
            for (int num19 = 1; num19 <= number_of_Items; num19++)
            {
                if (item_price == require.price[num19])
                {
                    cout << "This is the Gategory of Item" << endl;
                    cout << require.gategory[num19] << endl;
                    cout << "This is the Number Of Gategory" << endl;
                    cout << require.numGATEGORY[num19] << endl;
                    cout << "This is the Number of Item" << endl;
                    cout << require.number_item[num19] << endl;
                    cout << "This is the Condition of Item" << endl;
                    cout << require.condition[num19] << endl;
                    cout << "This is the Type of Item" << endl;
                    cout << require.type[num19] << endl;
                    cout << "This is the Model of Item" << endl;
                    cout << require.model[num19] << endl;
                    cout << "This is the Item Date Of Available" << endl;
                    cout << "The Month" << endl;
                    cout << require.month_of_available[num19] << endl;
                    cout << "The Day" << endl;
                    cout << require.day_of_available[num19] << endl;
                    cout << "This is the Item Date Of unavailable" << endl;
                    cout << "The Month" << endl;
                    cout << require.month_of_unavailable[num19] << endl;
                    cout << "The Day" << endl;
                    cout << require.day_of_unavailable[num19] << endl;
                }
            }
            cout << "to buy any Item enter (y/Y) for yes , else .. enter (n/N) for No" << endl;
            cin >> choise5;
            if (choise5 == 'y' || choise5 == 'Y')
            {
                cout << "Are you agree about the price of item" << endl;
                cout << "enter (y/Y) for yes .. enter (n/N) for No" << endl;
                cin >> choise6;
                if (choise6 == 'y' || choise6 == 'Y')
                {
                    cout << "Inter Number of Item " << endl;
                    cin >> number_Item;
                    cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                    cin >> day >> month;
                    if (day > 31)
                    {
                        cout << "You must enter valid day , please " << endl;
                        cin >> day;
                    }
                    if (month > 12)
                    {
                        cout << "You must enter valid month , please " << endl;
                        cin >> month;
                    }
                    cout << "Your Request Will arrive To the Seller soon" << endl;
                    buying(number_Item);
                    cout << "What Is your Feed back about The Seller" << endl;
                    cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                    cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                    cout << "He was Excellent : Enter 5" << endl;
                    cin >> feedback;
                    cout << "Enter His Id " << endl;
                    cin >> peopleID;
                    for (int num20 = peopleID; num20 < number_OF_PeopleID; num20++)
                    {
                        if (feedback >= 3)
                        {
                            people.points[num20]++;
                            break;
                        }
                        else
                            break;
                    }
                    break;

                }
                else
                {
                    cout << "Enter your Price and number of Item " << endl;
                    cin >> item_price >> number_Item;
                    cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                    cin >> day >> month;
                    cin >> day >> month;
                    if (day > 31)
                    {
                        cout << "You must enter valid day , please " << endl;
                        cin >> day;
                    }
                    if (month > 12)
                    {
                        cout << "You must enter valid month , please " << endl;
                        cin >> month;
                    }
                    cout << "Your Request Will arrive to the seller  soon" << endl;
                    buying_with_price(item_price, number_Item);
                    cout << "What Is your Feed back about The Seller" << endl;
                    cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                    cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                    cout << "He was Excellent : Enter 5" << endl;
                    cin >> feedback;
                    cout << "Enter His Id " << endl;
                    cin >> peopleID;
                    for (int num21 = peopleID; num21 < number_OF_PeopleID; num21++)
                    {
                        if (feedback >= 3)
                        {
                            people.points[num21]++;
                            break;
                        }
                        else
                            break;
                    }
                    break;
                }
            } ///END IF
            else
                break;
        } /// END IF
        else
            break;
    } ///END FOR
} ///END FUNCTION

void SEE_GATEGORY(int numberOfgategory)
{
    int confirm_gategory;
    cout << "Enter Number of Gategory To Confirm " << endl;
    cin >> confirm_gategory;
    for (int num22 = 1; num22 <= number_of_Items - 1; num22++)
    {
        if (require.numGATEGORY[num22] == confirm_gategory)
        {
            cout << "This is the Gategory of Item" << endl;
            cout << require.gategory[num22] << endl;
            cout << "This is the Number of Item" << endl;
            cout << require.number_item[num22] << endl;
            cout << "This is the Condition of Item" << endl;
            cout << require.condition[num22] << endl;
            cout << "This is the Type of Item" << endl;
            cout << require.type[num22] << endl;
            cout << "This is the Model of Item" << endl;
            cout << require.model[num22] << endl;
            cout << "This is the Item Date Of Available" << endl;
            cout << "The Month" << endl;
            cout << require.month_of_available[num22] << endl;
            cout << "The Day" << endl;
            cout << require.day_of_available[num22] << endl;
            cout << "This is the Item Date Of unavailable" << endl;
            cout << "The Month" << endl;
            cout << require.month_of_unavailable[num22] << endl;
            cout << "The Day" << endl;
            cout << require.day_of_unavailable[num22] << endl;
            cout << "-------------------------------------------" << endl;
        }
    } ///END FOR
} /// END FUNCTION

void  TOP_CATEGORY(char ok)
{
    int car = 0, watch = 0, phone = 0, antica = 0, modern = 0, camera = 0, month2;
    for (int num24 = 1; num24 <= 1; num24++)
    {
        cout << "Do you want to see Top category which sold in the month" << endl;
        cout << "Enter (y/Y) for yes or (n/N) for no" << endl;
        cin >> ok;
        if (ok == 'y' || ok == ' Y')
        {
            cout << "Enter The Number Of the Month which You Want to See The Top category in this Month sold : " << endl;
            cin >> month2;
            for (int num12 = 1; num12 <= number_Item; num12++)
            {
                if (require.is_sold[num12] == true && require.month_of_unavailable[num12] == month2)
                {
                    if (require.numGATEGORY[num12] == 1)
                        car++;
                    else if (require.numGATEGORY[num12] == 2)
                        watch++;
                    else if (require.numGATEGORY[num12] == 3)
                        phone++;
                    else if (require.numGATEGORY[num12] == 4)
                        antica++;
                    else if (require.numGATEGORY[num12] == 5)
                        camera++;
                    else if (require.numGATEGORY[num12] == 6)
                        modern++;
                }
            }
            if (car >= watch && car >= phone && car >= antica && car >= camera && car >= modern)
                cout << "The cars are the top category in this month " << endl;
            else if (watch >= car && watch >= phone && watch >= antica && watch >= camera && watch >= modern)
                cout << "The Watches are the top category in this month " << endl;
            else if (phone >= watch && phone >= car && phone >= antica && phone >= camera && phone >= modern)
                cout << "The Mobile Phone is the top category in this month " << endl;
            else if (antica >= watch && antica >= phone && antica >= car && antica >= camera && antica >= modern)
                cout << "The Antics are the top category in this month " << endl;
            else if (camera >= watch && camera >= phone && camera >= car && camera >= antica && camera >= modern)
                cout << "The Cameras are the top category in this month " << endl;
            else if (modern >= watch && modern >= phone && modern >= car && modern >= camera && modern >= antica)
                cout << "The Moderns are the top category in this month " << endl;
        } /// END IF

        else
            continue;
    } /// END FOR
} /// END FUNCTION



int main()
{
    string first, last;
    char  choise1, choise2, choise3, choise4, choise5;
    int answer1, number_Item, number_people, temp1, temp2, numbers, answer2;

    for (int num1 = 1; num1 <= max_number; num1++)
    {
        cout << "Are you Seller Or Buyer ?" << endl << "Please tell 1 for(Seller) or 2 for(Buyer)" << endl;
        cin >> answer1;
        if (answer1 == 1)
        {
            for (int num2 = 1; num2 <= max_number; num2++)
            {
                cout << "Please Enter Your First Name :" << endl;
                cin >> people.Name[num2];
                for (int num3 = 1; num3 <= max_number; num3++)
                {
                    cout << "Your Id is :" << endl;
                    cout << number_of_Id << endl;
                    people.id[num2] = number_of_Id;
                    number_of_Id++;
                    temp2 = num2++;
                    break;
                }
                cout << "Enter The Date (Firstly day Then Month)" << endl;
                cin >> day >> month;
                if (day > 31)
                {
                    cout << "You must enter valid day , please " << endl;
                    cin >> day;
                }
                if (month > 12)
                {
                    cout << "You must enter valid month , please " << endl;
                    cin >> month;
                }
                cout << "Are you have an google Account ?" << endl << "Please Tell y for (Yes) or N for (No)" << endl;
                cout << "If You Have Account and Want to create New one Tell N for (No) , also" << endl;
                cin >> choise1;
                if (choise1 == 'y' || choise1 == 'Y')
                {
                    cout << "please Enter Your E_mail :" << endl;
                    cin >> people.e_mail[num2];
                    cout << "Please Enter Your Password :" << endl;
                    cin >> people.password[num2];
                }
                else
                {
                    cout << "Please Enter Your First  Name :" << endl;
                    cin >> first;
                    cout << "Please Enter Your  Last Name :" << endl;
                    cin >> last;
                    cout << "Enter Your Password " << endl << "Your password must be contain numbers only" << endl;
                    cin >> people.password[num2];
                    cout << "Now Your E_mail is :" << endl;
                    email(first, last);
                    cout << "Please Enter Your New Account :" << endl;
                    cin >> people.e_mail[num2];
                    cout << "Please Enter Your New password :" << endl;
                    cin >> people.password[num2];
                }
                cout << "Enter Your Phone Number To Communicate With You" << endl;
                cin >> people.phone_number[num2];
                cout << "How many items do you want to sell ?" << endl;

                cin >> numbers;
                cout << "What is Your New items ?" << endl;
                for (int num4 = 1; num4 <= numbers; num4++)
                {
                    cout << "Enter A Number of Gategory" << endl;
                    cout << "(1) for Cars , (2) for Watches , (3) for mobile phone ,";
                    cout << "(4) for Antics , (5) for camera , (6) for moderns " << endl;
                    cin >> num;
                    cout << "Enter Your" << " " << num4 << " " << " item" << endl;
                    cin >> people.list_of_items[number_of_Items];
                    cout << "Enter  Your Id :" << endl;
                    cout << number_OF_PeopleID << endl;
                    people.id[number_of_Items] = number_OF_PeopleID;
                    cout << "which Category this Item Belong?" << endl;
                    cin >> require.gategory[number_of_Items];
                    cout << "Enter Number Of The Gategory" << endl;
                    cin >> require.numGATEGORY[number_of_Items];
                    cout << "Enter Item Number" << endl;
                    for (int num6 = 1; num6 <= max_number; num6++)
                    {
                        cout << numberITEM << endl;
                        require.number_item[number_of_Items] = numberITEM;
                        numberITEM++;
                        break;
                    }
                    cout << "Enter Item condition" << endl;
                    cin >> require.condition[number_of_Items];
                    cout << "Enter Item Price" << endl;
                    cin >> require.price[number_of_Items];
                    cout << "Enter Item Type" << endl;
                    cin >> require.type[number_of_Items];
                    cout << "Enter Item Model" << endl;
                    cin >> require.model[number_of_Items];
                    cout << "Enter Item Date Of Available" << endl;
                    cout << "Enter The Month" << endl;
                    cin >> require.month_of_available[number_of_Items];
                    if (require.month_of_available[number_of_Items] > 12)
                    {
                        cout << "You must enter valid month , please " << endl;
                        cin >> require.month_of_available[number_of_Items];
                    }
                    cout << "Enter The Day" << endl;
                    cin >> require.day_of_available[number_of_Items];
                    if (require.day_of_available[number_of_Items] > 31)
                    {
                        cout << "You must enter valid day , please " << endl;
                        cin >> require.day_of_available[number_of_Items];
                    }
                    cout << "Enter Item Date Of Unavailable" << endl;
                    cout << "Enter The Month" << endl;
                    cin >> require.month_of_unavailable[number_of_Items];
                    if (require.month_of_unavailable[number_of_Items] > 12)
                    {
                        cout << "You must enter valid month , please " << endl;
                        cin >> require.month_of_unavailable[number_of_Items];
                    }
                    cout << "Enter The Day" << endl;
                    cin >> require.day_of_unavailable[number_of_Items];
                    if (require.day_of_unavailable[number_of_Items] > 31)
                    {
                        cout << "You must enter valid day , please " << endl;
                        cin >> require.day_of_unavailable[number_of_Items];
                    }
                    number_of_Items++;
                } /// END FOR WHICH RUNNIG TO TAKE THE ITEMS
                number_OF_PeopleID++;
                temp1 = num2++;
                break;
            } /// END FOR LOOB IN THE Member is SELLER
        } /// END IF (THE member is SELLER)

        else
        {
            for (int num7 = temp1; num7 <= max_number; num7++)
            {
                cout << "Please Enter Your First Name :" << endl;
                cin >> people.Name[num7];
                for (int num8 = temp2; num8 < max_number; num8++)
                {
                    cout << "Your Id is :" << endl;
                    cout << number_of_Id << endl;
                    people.id[num8] = number_of_Id;
                    temp2 = num8++;
                    number_of_Id++;
                    break;
                }
                cout << "Enter The Date (Firstly day Then Month)" << endl;
                cin >> day >> month;
                if (day > 31)
                {
                    cout << "You must enter valid day , please " << endl;
                    cin >> day;
                }
                if (month > 12)
                {
                    cout << "You must enter valid month , please " << endl;
                    cin >> month;
                }
                cout << "Are you have an google Account ?" << endl << "Please Tell y for (Yes) or N for (No)" << endl;
                cout << "If You Have Account and Want to create New one Tell N for (No) , also" << endl;
                cin >> choise1;
                if (choise1 == 'y' || choise1 == 'Y')
                {
                    cout << "please Enter Your E_mail :" << endl;
                    cin >> people.e_mail[num7];
                    cout << "Please Enter Your Password :" << endl;
                    cin >> people.password[num7];
                }
                else
                {
                    cout << "Please Enter Your First  Name :" << endl;
                    cin >> first;
                    cout << "Please Enter Your  Last Name :" << endl;
                    cin >> last;
                    cout << "Now Your E_mail is :" << endl;
                    email(first, last);
                    cout << "Please Enter Your New Account :" << endl;
                    cin >> people.e_mail[num7];
                    cout << "Please Enter Your New password :" << endl;
                    cin >> people.password[num7];
                }
                cout << "Enter Your Phone Number To Communicate With You" << endl;
                cin >> people.phone_number[num7];
                cout << "Do you want to deliver which you buy to your home ?" << endl << "Please Tell y for (Yes) or N for (No)" << endl;

                cin >> choise2;
                if (choise2 == 'Y' || choise2 == 'y')
                {
                    cout << "Please Enter your address in details" << endl;
                    cin >> people.delivery_address[num7];
                }
                else
                {
                    cout << "Ok" << endl;
                }
                cout << "Which way do you want to search about your product ?" << endl;
                cout << "You can search by Price&gategory (1) Or by gategory only (2)" << endl;

                cin >> answer2;
                cout << "(1) for Cars , (2) for Watches , (3) for mobile phone ,";
                cout << "(4) for Antics , (5) for camera , (6) for moderns " << endl;
                if (answer2 == 1)
                {
                    cout << "Enter number of Gategory firstly and the price which you want" << endl;
                    cin >> numberOfgategory >> item_price;
                    SEE_GATEBORY_WITH_PRICE(numberOfgategory);
                    while (true)
                    {
                        if (numberOfgategory != 1 && numberOfgategory != 2 && numberOfgategory != 3
                            && numberOfgategory != 4 && numberOfgategory != 5 && numberOfgategory != 6)
                        {
                            cout << "Please Enter Correct Number" << endl;
                            cout << "sorry , You will Enter Your Information Again" << endl;
                            continue;
                        }
                        else
                            break;
                    }
                    while (true)
                    {
                        cout << "Do you want to see all Item to buy more items" << endl;
                        cout << "Enter (y/Y) for yes or (n/N) for no" << endl;

                        cin >> choise3;
                        if (choise3 == 'y' || choise3 == 'Y')
                        {
                            for (int num9 = 1; num9 <= number_of_Items - 1; num9++)
                            {
                                cout << "This is the Gategory of Item" << " ";
                                cout << require.gategory[num9] << endl;
                                cout << "This is the Number Of Gategory" << endl;
                                cout << require.numGATEGORY[num9] << endl;
                                cout << "This is the Price of Item " << " ";
                                cout << require.price[num9];
                                cout << "This is the Number of Item" << " ";
                                cout << require.number_item[num9] << endl;
                                cout << "This is the Condition of Item" << " ";
                                cout << require.condition[num9] << endl;
                                cout << "This is the Type of Item" << " ";
                                cout << require.type[num9] << endl;
                                cout << "This is the Model of Item" << " ";
                                cout << require.model[num9] << endl;
                                cout << "This is the Item Date Of Available" << endl;
                                cout << "The Month" << endl;
                                cout << require.month_of_available[num9] << endl;
                                cout << "The Day" << endl;
                                cout << require.day_of_available[num9] << endl;
                                cout << "This is the Item Date Of unavailable" << endl;
                                cout << "The Month" << endl;
                                cout << require.month_of_unavailable[num9] << endl;
                                cout << "The Day" << endl;
                                cout << require.day_of_unavailable[num9] << endl;
                                cout << "---------------------------------------" << endl;
                            }
                            cout << "These all Items in the marketplace" << endl;
                            cout << "to buy any Item enter (y/Y) for yes , else .. enter (n/N) for No" << endl;

                            cin >> choise4;
                            if (choise4 == 'y' || choise4 == 'Y')
                            {
                                cout << "Are you agree about the price of item" << endl;
                                cout << "enter (y/Y) for yes .. enter (n/N) for No";

                                cin >> choise5;
                                if (choise5 == 'y' || choise5 == 'Y')
                                {
                                    cout << "Inter Number of Item " << endl;
                                    cin >> number_Item;
                                    cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                                    cin >> day >> month;
                                    if (day > 31)
                                    {
                                        cout << "You must enter valid day , please " << endl;
                                        cin >> day;
                                    }
                                    if (month > 12)
                                    {
                                        cout << "You must enter valid month , please " << endl;
                                        cin >> month;
                                    }
                                    cout << "Your Request Will arrive To the Seller soon" << endl;
                                    buying(number_Item);
                                    cout << "What Is your Feed back about The Seller" << endl;
                                    cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                                    cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                                    cout << "He was Excellent : Enter 5" << endl;
                                    cin >> feedback;
                                    cout << "Enter His Id " << endl;
                                    cin >> peopleID;
                                    for (int num10 = peopleID; num10 < number_OF_PeopleID; num10++)
                                    {
                                        if (feedback >= 3)
                                        {
                                            people.points[num10]++;
                                            break;
                                        }
                                        else
                                            break;
                                    }
                                    continue;
                                }
                                else
                                {
                                    cout << "Enter your Price and number of Item " << endl;
                                    cin >> item_price >> number_Item;
                                    cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                                    cin >> day >> month;
                                    if (day > 31)
                                    {
                                        cout << "You must enter valid day , please " << endl;
                                        cin >> day;
                                    }
                                    if (month > 12)
                                    {
                                        cout << "You must enter valid month , please " << endl;
                                        cin >> month;
                                    }
                                    cout << "Your Request Will arrive To the Seller soon" << endl;
                                    buying_with_price(item_price, number_Item);
                                    cout << "What Is your Feed back about The Seller" << endl;
                                    cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                                    cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                                    cout << "He was Excellent : Enter 5" << endl;
                                    cin >> feedback;
                                    cout << "Enter His Id " << endl;
                                    cin >> peopleID;
                                    for (int num11 = peopleID; num11 < number_OF_PeopleID; num11++)
                                    {
                                        if (feedback >= 3)
                                        {
                                            people.points[num11]++;
                                            break;
                                        }
                                        else
                                            break;
                                    }
                                    continue;
                                }
                            }
                            else
                                continue;
                        }
                        else
                            break;
                    } /// END WHILE

                } ///  END IF (ANSWER =1)
                else
                {
                    cout << "Enter Number of Gategory" << endl;
                    cin >> numberOfgategory;
                    cout << "Enter Your choise (Y/y)" << endl;
                    cin >> choise8;
                    SEE_GATEGORY(numberOfgategory);
                    cout << "Do yo Want to buy any thing from this Gategory" << endl;
                    cout << "Enter (Y/y) for Yes or (N/n) for No .. else to see another gategory" << endl;
                    cin >> choise7;
                    if (choise7 == 'y' || choise7 == 'Y')
                    {
                        cout << "Are you agree about the price of item" << endl;
                        cout << "enter (y/Y) for yes .. enter (n/N) for No" << endl;
                        cin >> choise8;
                        if (choise8 == 'y' || choise8 == 'Y')
                        {
                            cout << "Inter Number of Item" << endl;
                            cin >> number_Item;
                            cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                            cin >> day >> month;
                            if (day > 31)
                            {
                                cout << "You must enter valid day , please " << endl;
                                cin >> day;
                            }
                            if (month > 12)
                            {
                                cout << "You must enter valid month , please " << endl;
                                cin >> month;
                            }
                            cout << "Your Request Will arrive TO the Seller soon" << endl;
                            buying(number_Item);
                            cout << "What Is your Feed back about The Seller" << endl;
                            cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                            cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                            cout << "He was Excellent : Enter 5" << endl;
                            cin >> feedback;
                            cout << "Enter His Id " << endl;
                            cin >> peopleID;
                            for (int num23 = peopleID; num23 < number_OF_PeopleID; num23++)
                            {
                                if (feedback >= 3)
                                {
                                    people.points[num23]++;
                                    break;
                                }
                                else
                                    choise8 = 'N';
                                break;
                            }
                        }
                    }
                    else if ((choise8 == 'n' || choise8 == 'N'))
                    {
                        cout << "Enter your Price and number of Item" << endl;
                        cin >> item_price >> number_Item;
                        cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                        cin >> day >> month;
                        if (day > 31)
                        {
                            cout << "You must enter valid day , please " << endl;
                            cin >> day;
                        }
                        if (month > 12)
                        {
                            cout << "You must enter valid month , please " << endl;
                            cin >> month;
                        }
                        cout << "Your Request Will arrive TO the Seller soon" << endl;
                        buying_with_price(item_price, number_Item);
                        cout << "What Is your Feed back about The Seller" << endl;
                        cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                        cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                        cout << "He was Excellent : Enter 5" << endl;
                        cin >> feedback;
                        cout << "Enter His Id " << endl;
                        cin >> peopleID;
                        for (int num24 = peopleID; num24 < number_OF_PeopleID; num24++)
                        {
                            if (feedback >= 3)
                            {
                                people.points[num24]++;
                                break;
                            }
                            else
                                break;
                        }
                    }
                    else if ((choise8 != 'y' || choise8 != 'Y') && (choise8 != 'n' || choise8 != 'N'))
                    {
                        cout << "Do you want to see another Gategory" << endl;
                        cout << "Enter (Y/y) for Yes or (N/n) for no" << endl;
                        cin >> choise5;
                        if (choise5 == 'y' || choise5 == 'Y')
                        {
                            cout << "Enter Number Of the Gategory which You want" << endl;
                            cin >> numberOfgategory;
                            cout << "Enter choise (Y) To Continue" << endl;
                            cin >> choise5;
                            SEE_GATEGORY(numberOfgategory);
                            cout << "Do yo Want to buy any thing from this Gategory" << endl;
                            cout << "Enter (Y/y) for Yes or (N/n) for No " << endl;
                            cin >> choise7;
                            if (choise7 == 'y' || choise7 == 'Y')
                            {
                                cout << "Are you agree about the price of item" << endl;
                                cout << "enter (y/Y) for yes .. enter (n/N) for No" << endl;
                                cin >> choise8;
                                if (choise8 == 'y' || choise8 == 'Y')
                                {
                                    cout << "Inter Number of Item" << endl;
                                    cin >> number_Item;
                                    cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                                    cin >> day >> month;
                                    if (day > 31)
                                    {
                                        cout << "You must enter valid day , please " << endl;
                                        cin >> day;
                                    }
                                    if (month > 12)
                                    {
                                        cout << "You must enter valid month , please " << endl;
                                        cin >> month;
                                    }
                                    cout << "Your Request Will arrive the the seller soon" << endl;
                                    buying(number_Item);
                                    cout << "What Is your Feed back about The Seller" << endl;
                                    cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                                    cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                                    cout << "He was Excellent : Enter 5" << endl;
                                    cin >> feedback;
                                    cout << "Enter His Id " << endl;
                                    cin >> peopleID;
                                    for (int num23 = peopleID; num23 < number_OF_PeopleID; num23++)
                                    {
                                        if (feedback >= 3)
                                        {
                                            people.points[num23]++;
                                            break;
                                        }
                                        else
                                            choise8 = 'N';
                                        break;
                                    }
                                }
                            }
                            else if ((choise8 == 'n' || choise8 == 'N'))
                            {
                                cout << "Enter your Price and number of Item" << endl;
                                cin >> item_price >> number_Item;
                                cout << "Enter The Date of Today(DAY then MONTH)" << endl;
                                cin >> day >> month;
                                if (day > 31)
                                {
                                    cout << "You must enter valid day , please " << endl;
                                    cin >> day;
                                }
                                if (month > 12)
                                {
                                    cout << "You must enter valid month , please " << endl;
                                    cin >> month;
                                }
                                cout << "Your Request Will arrive To the seller soon" << endl;
                                buying_with_price(item_price, number_Item);
                                cout << "What Is your Feed back about The Seller" << endl;
                                cout << "He was So bad : Enter 1" << endl << "He Was bad : Enter 2 " << endl;
                                cout << "He was Good : Enter 3" << endl << "He was Very Good : Enter 4" << endl;
                                cout << "He was Excellent : Enter 5" << endl;
                                cin >> feedback;
                                cout << "Enter His Id " << endl;
                                cin >> peopleID;
                                for (int num24 = peopleID; num24 < number_OF_PeopleID; num24++)
                                {
                                    if (feedback >= 3)
                                    {
                                        people.points[num24]++;
                                        break;
                                    }
                                    else
                                        break;
                                }
                            }
                        }
                        else
                            choise8 = 'n';
                    }
                } /// END ELSE (THE BUYER WANT TO SEARCH WITH CATEGORY ONLY)

                number_OF_PeopleID++;

                break;
            } /// END FOR LOOB IN THE Member is buyer

        } /// END ELSE (THE Member is buyer)

        
        TOP_CATEGORY(ok);
    }  ///END THE MAIN LOOOOP
    return 0;
}
