#include <Windows.h>
#include <Psapi.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void showArgs(int argc,char *argv[]){
    for(int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n",i,argv[i]);
    }
}
int exec_command(int argc,char *argv[]){
    CHAR CommandLine[MAX_PATH];
    STARTUPINFO StartupInfo;
    PROCESS_INFORMATION ProcessInfo;
    PROCESS_MEMORY_COUNTERS ProcessMemoryCounters;
    LARGE_INTEGER StartingTime, EndingTime, Frequency;
    DWORD ReturnValue;
    STARTUPINFO StartupInfo2;
    PROCESS_INFORMATION ProcessInfo2;
    PROCESS_MEMORY_COUNTERS ProcessMemoryCounters2;
    LARGE_INTEGER StartingTime2, EndingTime2, Frequency2;
    DWORD ReturnValue2;
    if(argc == 2){
        sprintf(CommandLine, "%s",argv[1]);
    }
    if(argc == 3){
        if(strstr(argv[2],"input.txt")){
            sprintf(CommandLine, "%s   <  %s ",argv[1],argv[2]);
            freopen(argv[2], "r", stdin);
        }else{
            printf("ʹ�÷���:\n\n Pauser <����ָ��> <�����ļ�>\n");
            return showArgs(argc, argv) , getch(), -1;
        }
    }
    if(argc == 4){
        sprintf(CommandLine, "%s  <  %s",argv[1],argv[2]);
        freopen(argv[argc-2], "r", stdin);
    }
    SetConsoleTitle(CommandLine);
    memset(&ProcessInfo, 0, sizeof(ProcessInfo));
    memset(&StartupInfo, 0, sizeof(StartupInfo));
    StartupInfo.cb = sizeof(StartupInfo);
    if (!CreateProcess(NULL, CommandLine, NULL, 
    NULL, TRUE, 0, NULL, NULL,
     &StartupInfo, &ProcessInfo))
        return printf("\n�޷���������: %s\n�밴��������� . . . ", CommandLine), getch(), 0;
    QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&StartingTime);
    WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
    QueryPerformanceCounter(&EndingTime);
    GetProcessMemoryInfo(ProcessInfo.hProcess, &ProcessMemoryCounters, sizeof(ProcessMemoryCounters));
    GetExitCodeProcess(ProcessInfo.hProcess, &ReturnValue);
    LONGLONG ExecutionTime = (EndingTime.QuadPart - StartingTime.QuadPart) * 1000000 / Frequency.QuadPart;
    printf("\n\n���򷵻�״̬:  %ld (0x%lX)", ReturnValue, ReturnValue);
    printf("\n�������к�ʱ:  %lld.%lld ms", ExecutionTime / 1000, ExecutionTime % 1000);
    unsigned mem = ProcessMemoryCounters. PeakWorkingSetSize;
    unsigned vmem = ProcessMemoryCounters.PeakPagefileUsage ;
    printf("\n����ʹ���ڴ�:  %.4lf MB  / %.4lf KB ", ((mem + vmem) /( 1024.0 * 1024.0)), ((mem + vmem) /(1024.0)));
    return 0;
}
int main(int argc, char *argv[]){
    return exec_command(argc, argv);
}