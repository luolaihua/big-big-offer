/**
 * @file func.h
 * @author LuoLaihua (laihualuo96@163.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once
void show();

/**
 * @brief 
 * 
 * @param string 
 * @param length 
 */
void RePlaceBlank(char string[], int length);
/**
 * @brief 字符串比较
 * =0 s1与s2完全相同
 * >0 按照字典序，s1大于s2
 * <0 按照字典序，s1小于s2
 * @param s1 
 * @param s2 
 * @return int 
 */
int myStrCmp(char *s1, char* s2);