#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minuteToWinIt function below.
int minuteToWinIt(vector<int> a, int k) {
    // Return the minimum amount of time in minutes.
    vector<int>b=a;
    vector<int>l=a;
    int count1=0;
    int count2=0;
    for(int i=1;i<a.size();i++){
        if(a[i]-a[i-1]!=k)
        {
            a[i]=a[i-1]+k;
            count1++;
        }
    }
    for(int i=b.size()-1;i>=1;i--){
        if(b[i]-b[i-1]!=k)
        {
            b[i-1]=b[i]-k;
            count2++;
        }
    }
    int p=0;
    vector<int>size;
    for(int i=1;i<l.size();i++){
        if(l[i]-l[i-1]==k)
        {
            p++;
        }
        else{
            size.push_back(p+1);
            p=0;
        }

    }
    int count=*max_element(size.begin(),size.end());
    int count3=l.size()-count;
    cout<<"count : "<<count<<endl;
    //cout<<"count1: "<<count1<<" "<<"count2: "<<count2<<endl;
    int count4=min(count1,count2);
return min(count4,count3);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = minuteToWinIt(a, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
