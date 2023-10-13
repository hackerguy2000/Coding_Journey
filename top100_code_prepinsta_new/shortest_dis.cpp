#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Utility function for converting degrees to radians
long double toRadians(const long double degree)
{
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}

long double distance(long double lat1, long double long1,
                     long double lat2, long double long2)
{
    // Convert the latitudes and longitudes from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2);
    ans = 2 * asin(sqrt(ans));

    // Radius of Earth in Kilometers, R = 6371
    // Use R = 3956 for miles
    long double R = 6371;

    // Calculate the result
    ans = ans * R;

    return ans;
}
/* EXTRA FUNCTION TO FIND INDEX WITHOUT ITERATOR
int findindex(long double arr[], int len, int find)
{
    for (int j = 0; j < len; j++)
    {
        if (arr[j] == find)
        {
            return j;
        }
    }
    return 0;
}
*/

// Driver Code
int main()
{
    string Hospitals[] = {"Apollo Hospital", "Boston Hospital", "Capital Hospital", "Dipak Hospital", "Enriched Hospital"};
    long double lat1 = 53.0001111111111;      // MY latitude by gps module
    long double long1 = -0.6997222222222223;  // MY longitude by gps module
    long double lat2 = 43.31861111251211;     // lat of nearby hospital A
    long double long2 = -5.6997454552222223;  // long of nearby hospital A
    long double lat3 = 53.32055555555556;     // lat of nearby hospital B
    long double long3 = -1.7297222222222221;  // long of nearby hospital B
    long double lat4 = 13.31861111111111;     // lat of nearby hospital C
    long double long4 = -2.6997896322222223;  // long of nearby hospital C
    long double lat5 = 53.31861111111111;     // lat of nearby hospital D
    long double long5 = -1.6997222222222223;  // long of nearby hospital D
    long double lat6 = 13.31861111251211;     // lat of nearby hospital E
    long double long6 = -25.6997454552222223; // long of nearby hospital E
    // call the distance function
    cout << setprecision(15) << fixed;
    long double D1 = distance(lat1, long1, lat2, long2);
    cout << D1 << "  is the distance from Hospital A in KM" << endl;
    long double D2 = distance(lat1, long1, lat3, long3);
    cout << D2 << "  is the distance from Hospital B in KM" << endl;
    long double D3 = distance(lat1, long1, lat4, long4);
    cout << D3 << "  is the distance from Hospital C in KM" << endl;
    long double D4 = distance(lat1, long1, lat5, long5);
    cout << D4 << "  is the distance from Hospital D in KM" << endl;
    long double D5 = distance(lat1, long1, lat6, long6);
    cout << D5 << "  is the distance from Hospital E in KM" << endl
         << endl;

    long double distance_arr[] = {D1, D2, D3, D4, D5};
    int n = 5; // number of array
               // sort(distance_arr, distance_arr + n);
               // cout<<"All distance_arrs of hospital in an order"<<endl;
    long double mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (distance_arr[i] < mini)
        {
            mini = distance_arr[i];
        }
    }
    cout << "The shortest Hospital distance_arr from my location is::  " << mini << endl
         << endl;
    long double target = mini;
    int index = 0;
    auto it = find(begin(distance_arr), end(distance_arr), target);
    if (it != end(distance_arr))
    {
        index = distance(distance_arr, it);
        cout << "Distance found at index " << index << endl;
    }
    else
    {
        cout << "Distance not found" << endl;
    }
    cout << "The nearest Hospital name is ::" << Hospitals[index];

    return 0;
}