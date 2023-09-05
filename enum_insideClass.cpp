#include <iostream>
using namespace std;
class Year
{
public:
    enum Month
    {
        JANUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
    void setMonth(Month month)
    {
        currentMonth = month;
    }
    Month getMonth()
    {
        return currentMonth;
    }
    string getMonthString(Month month)
    {
        switch (month)
        {
        case JANUARY:
            return "JANUARY";
        case FEBRUARY:
            return "FEBRUARY";
        case MARCH:
            return "MARCH";
        case APRIL:
            return "APRIL";
        case MAY:
            return "MAY";
        case JUNE:
            return "JUNE";
        case JULY:
            return "JULY";
        case AUGUST:
            return "AUGUST";
        case SEPTEMBER:
            return "SEPTEMBER";
        case OCTOBER:
            return "OCTOBER";
        case NOVEMBER:
            return "NOVEMBER";
        case DECEMBER:
            return "DECEMBER";

        default:
            return "invalid month";
        }
    }

private:
    Month currentMonth;
};
int main(int argc, char const *argv[])
{
    Year year;
    int month;
    cin >> month;
    if (month >= 1 && month <= 12)
    {
        // Subtracting 1 from the input to match the enum values
        Year::Month selectedMonth = static_cast<Year::Month>(month - 1);
        year.setMonth(selectedMonth);

        cout << "Month: " << year.getMonthString(year.getMonth()) << endl;
    }
    else
    {
        cout << "Invalid month input" << endl;
    }

    return 0;
}
