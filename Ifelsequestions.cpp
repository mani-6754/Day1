// Check leap year
// int main()
// {
//     int n;
//     cin>>n;
//     if((n%4==0&&n%100!=0)||n%400==0)
//     {
//         cout<<n<<" is a leap year";
//     }
//     else
//     {
//         cout<<n<<" is not a leap year";
//     }
// }

//Grading system
// int main()
// {
//     int n;
//     cin>>n;
//     if(n<=100&&n>=90)
//     {
//         cout<<"Your grade is A";
//     }
//     else if(n<=89||n>=80)
//     {
//         cout<<"Your grade is B";
//     }
//     else if(n<=79||n>=70)
//     {
//         cout<<"Your grade is C";
//     }
//     else if(n<=69||n>=60)
//     {
//         cout<<"Your grade is D";
//     }
//     else
//     {
//         cout<<"Your grade is F";
//     }
// }

//Vowel or consonant checker
// int main()
// {
//     char a;
//     cin>>a;
//     if(a=='a'||a='e'||a='i'||a='o'||a='u'||a='A'||a='E'||a='I'||a='O'||a='U')
//     {
//         cout<<"Vowel";
//     }
//     else
//     {
//         cout<<"Consonant";
//     }
// }

//Check if character is alphabet digit or special character
int main()
{
    char a;
    cin>>a;
    if(isdigit(a))
    {
        cout<<"It is a digit";
    }
    else if(isalpha(a))
    {
        cout<<"It is an alphabet";
    }
    else
    {
        cout<<"It is a special character";
    }
}
