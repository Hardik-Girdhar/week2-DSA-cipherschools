#include <iostream>
using namespace std;

void printmaxclassesattend(int start[], int end[], int class - id[])
{
    cout << "the classes which you should attend to cover maximum of them (hopefully you do): " << endl;
    cout << class_id[0];
}
int i ,end_of_class_cureently_attending;

end_of_class_cureently_attending=end[0];
for (i = 1; i < 9; i++)
{
    if (start[i] > end_of_class_cureently_attending)
    {
        cout << class_id[i];
        end_of_class_cureently_attending = end[i];
    }
}
int main()
{
    int start[] = {2, 2, 4, 1, 5, 8, 9, 11, 13};
    int end[] = {3, 5, 7, 8, 9, 10, 11, 14, 16};
    int class_id[] = {4, 2, 3, 1, 5, 6, 7, 8, 9};

    printmaxclassesattend(start, end, class_id);
    return 0;
}