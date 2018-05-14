//
//  main.cpp
//  base8-1
//
//  Created by suchao on 5/14/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <string>

#define MAX 100

using namespace std;

void sort(int n, int num[], string name[], double score[]){
    for(int i=0; i<n; i++){
        double max = score[0];
        int max_j = 0;
        for(int j=0; j<n; j++){
            if(score[j] > max){
                max = score[j];
                max_j = j;
            }
        }
        
        cout << num[max_j] << " " << name[max_j] << " "<< score[max_j] << endl;
        score[max_j] = 0;
        
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input the number of students:\n";
    int n;
    cin >> n;
    
    int num[MAX];
    string name[MAX];
    double score[MAX];
    cout << "intput the data:\n";
    for(int i=0; i<n; i++){
        cin >> num[i] >> name[i];
        double sum =0;
        double tmp;
        for(int j=0; j<8; j++){
            cin >> tmp;
            sum += tmp;
        }
        score[i] = sum / 8;
    }
    
    
    sort(n, num, name, score);
    
    
    return 0;
}
