#include <stdio.h>
#include "myhead.h"

#define MAX_STUDENT 100

int main() {
    // 創建並初始化學生實例
    SRecord srecords[MAX_STUDENT];
    int numSRecords = readSRecordsFromCSV("records.csv", srecords, MAX_STUDENT);

    // 打印學生成績信息
    printSRecords(srecords, numSRecords);

    // 按照學生學號排序
    sortSRecords(srecords, numSRecords, "sid");
    printf("\n\nAfter sorting by sid:\n");
    printSRecords(srecords, numSRecords);

    return 0;
}
