#include <iostream>

using namespace std; 

int main () 
{
    int switch1; // switch1 of activity it is
    int switch2; // switch1 of switch2 that is going to be used
    int switch3; // final switch before result 

    cout << "Switch1 prompt" << endl; 
    cin >> switch1;

    switch (switch1) // determins which switch2 is appropriate for your switch1
    {
        case 1:
        cout << "Switch2 prompt1" << endl; 
        cin >> switch2; 

            switch (switch2) // determins which switch3 is appropriate for your switch2
        {
            case 1:
            cout << "Switch3 prompt" << endl;
            cin >> switch3; 

                switch (switch3) 
            {
                case 1:
                cout << "result 1-1-1" << endl; 
                break;

                case 2:
                cout << "result 1-1-2" << endl; 
                break; 

                case 3: 
                cout << "result 1-1-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }

            break;

            case 2:
            cout << "Switch3 prompt2" << endl;
            cin >> switch3; 

                switch (switch3)
            {
                case 1:
                cout << "result 1-2-1" << endl; 
                break;

                case 2:
                cout << "result 1-2-2" << endl; 
                break; 

                case 3: 
                cout << "result 1-2-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }

            break;

            case 3:
            cout << "Switch3 prompt3" << endl;
            cin >> switch3; 

                switch (switch3)
            {
                case 1:
                cout << "result 1-3-1" << endl; 
                break;

                case 2:
                cout << "result 1-3-2" << endl; 
                break; 

                case 3: 
                cout << "result 1-3-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            default: // protection for non-compliant inputs 
            cout << "Invalid Input.";
            break;
        }
        break;

        case 2: 
        cout << "Switch2 prompt2" << endl; 
        cin >> switch2;

            switch (switch2) // determins which switch3 is appropriate for your switch2
        {
            case 1:
            cout << "Switch3 prompt4" << endl;
            cin >> switch3; 

                switch (switch3)
            {
                case 1:
                cout << "result 2-1-1" << endl; 
                break;

                case 2:
                cout << "result 2-1-2" << endl; 
                break; 

                case 3: 
                cout << "result 2-1-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            case 2:
            cout << "Switch3 prompt5" << endl;
            cin >> switch3;

                switch (switch3)
            {
                case 1:
                cout << "result 2-2-1" << endl; 
                break;

                case 2:
                cout << "result 2-2-2" << endl; 
                break; 

                case 3: 
                cout << "result 2-2-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            case 3:
            cout << "Switch3 prompt6" << endl;
            cin >> switch3;

                switch (switch3)
            {
                case 1:
                cout << "result 2-3-1" << endl; 
                break;

                case 2:
                cout << "result 2-3-2" << endl; 
                break; 

                case 3: 
                cout << "result 2-3-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            default: // protection for non-compliant inputs 
            cout << "Invalid Input.";
            break;
        }
        break;

        case 3:
        cout << "Switch2 prompt3" << endl; 
        cin >> switch2;

            switch (switch2) // determins which switch3 is appropriate for your switch2
        {
            case 1:
            cout << "Switch3 prompt7" << endl;
            cin >> switch3; 

                switch (switch3)
            {
                case 1:
                cout << "result 3-1-1" << endl; 
                break;

                case 2:
                cout << "result 3-1-2" << endl; 
                break; 

                case 3: 
                cout << "result 3-1-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            case 2:
            cout << "Switch3 prompt8" << endl;
            cin >> switch3; 

                switch (switch3)
            {
                case 1:
                cout << "result 3-2-1" << endl; 
                break;

                case 2:
                cout << "result 3-2-2" << endl; 
                break; 

                case 3: 
                cout << "result 3-2-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            case 3:
            cout << "Switch3 prompt9" << endl;
            cin >> switch3; 

            
                switch (switch3)
            {
                case 1:
                cout << "result 3-3-1" << endl; 
                break;

                case 2:
                cout << "result 3-3-2" << endl; 
                break; 

                case 3: 
                cout << "result 3-3-3" << endl; 
                break; 

                default: // protection for non-compliant inputs 
                cout << "Invalid Input.";
                break;
            }
            break;

            default: // protection for non-compliant inputs 
            cout << "Invalid Input.";
            break;
        }

        break;

        default: // protection for non-compliant inputs 
        cout << "Invalid Input.";
        break;
    }

    return 0; 
}