#pragma once

class CBufferString
{
public:
    void Insert(int a3, const char* szString, int a5, int a6);
    void AppendFormat(const char* szString, ...);
};