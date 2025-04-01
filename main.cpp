#include <vector>
#include <algorithm>
#include "PC.h"
using namespace std;

int main(){
    vector<PC> arr;
    arr.push_back(PC("Old PC", 2.4, 6, true, 7999.99));
    arr.push_back(PC("Medium PC", 4.6, 16, false, 29999.99));
    arr.push_back(PC("Video-editor PC", 4.4, 32, true, 34999.99));
    arr.push_back(PC("Old Laptop", 2.2, 4, true, 5999.99));

    for(auto item:arr){
        item.showInfo();
    }
    cout << "1------------------------------------------1\n";
    cout << "P.S. не работает(((\n";
    string stmp;
    cout << "Введите название компьютера: " << endl;
    auto it = find_if(arr.begin(), arr.end(), [stmp](PC item){return item.getName() == stmp;});
    if (it == arr.end()){
        cout << "X\n";
    }else{
        it->showInfo();
    }
    
    cout << "2------------------------------------------2\n";
    it = min_element(arr.begin(), arr.end(), [](PC a, PC b){return a.getFreq()<b.getFreq();});
    arr.erase(it);
    cout << "Удалён\n";

    for(auto item:arr){
        item.showInfo();
    }

    cout << "3------------------------------------------3\n";
    int c = count_if(arr.begin(), arr.end(), [](PC a){return a.getDVD();});
    cout << "Компьютеров с наличием DVD привода " << c << " штуки." << endl;
    cout << "4------------------------------------------4\n";

    for_each(arr.begin(),arr.end(), [](PC &pc){
        if(pc.getRAM() >= 16){
            pc.setPrice(pc.getPrice()*1.25);
        }
    });

    for(auto item:arr){
        item.showInfo();
    }

    cout << "5------------------------------------------5\n";

    cout << "От большего\n";
    sort(arr.begin(),arr.end(), [](PC a, PC b){return a.getPrice()>b.getPrice();});
    for(auto item:arr){
            item.showInfo();
        }
    cout << "От меньшего\n";
    sort(arr.begin(),arr.end(), [](PC a, PC b){return a.getPrice()<b.getPrice();});
    for(auto item:arr){
            item.showInfo();
        }


    /*for(auto item:Kharkiv){
        item.showInfo();
    }cout << "------------------------------------------\n";
    int num = 0;
    cout << "Enter number: " << endl; cin >> num;
    auto it = find_if(Kharkiv.begin(), Kharkiv.end(), [num](Path item){return item.getNumber() == num;});
    if (it == Kharkiv.end()){
        cout << "X";
    }else{
        Kharkiv.erase(it);
        cout << "Removed\n";
    }for(auto item:Kharkiv){
        item.showInfo();
    }cout << "------------------------------------------\n";
    it = max_element(Kharkiv.begin(), Kharkiv.end(), [](Path a, Path b){return a.getLen()<b.getLen();});
    it->showInfo();
    cout << "------------------------------------------\n";
    float limit;
    cout << "Enter limit: " << endl; cin >> limit;
    for_each(Kharkiv.begin(),Kharkiv.end(), [limit](Path& item){
        if(item.getLen() > limit){
            item.setPrice((item.getPrice() * 1.15));
        }});for(auto item:Kharkiv){
        item.showInfo();
    }cout << "------------------------------------------\n";*/

    return 0;
}