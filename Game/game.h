#pragma once
#define R 10//����
#define C 10//����
#define M 10//��������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ini(char MF[R][C]);
void load(char HMF[R][C]);
void print(char MF[R][C]);
void chain1(char HMF[R][C], char DMF[R][C]);
int play(char HMF[R][C], char DMF[R][C]);
int judge(char HMF[R][C], char DMF[R][C]);