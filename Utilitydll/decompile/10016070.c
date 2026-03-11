/*
 * func-name: sub_10016070
 * func-address: 0x10016070
 * callers: 0x10016580, 0x10016820
 * callees: 0x100011c0, 0x10001940, 0x100021d0, 0x10002410, 0x100179f0, 0x10018c31, 0x10018cf2
 */

int __thiscall sub_10016070(void *this)
{
  int v2; // eax
  char v3; // bl
  int result; // eax
  Outpop::Utility::Time_Value *v5; // eax
  const char *v6; // eax
  const CHAR *v7; // eax
  wchar_t *v8; // esi
  struct Outpop::Utility::Logger *v9; // eax
  char v10; // [esp+34h] [ebp-29Ch]
  char v11; // [esp+35h] [ebp-29Bh]
  char v12; // [esp+36h] [ebp-29Ah]
  char v13; // [esp+37h] [ebp-299h]
  char v14; // [esp+38h] [ebp-298h]
  char v15; // [esp+39h] [ebp-297h]
  char v16; // [esp+3Ah] [ebp-296h]
  char v17; // [esp+3Bh] [ebp-295h]
  _DWORD v18[8]; // [esp+3Ch] [ebp-294h] BYREF
  wchar_t *v19; // [esp+5Ch] [ebp-274h] BYREF
  int v20; // [esp+64h] [ebp-26Ch] BYREF
  LPCCH lpMultiByteStr[6]; // [esp+68h] [ebp-268h] BYREF
  _BYTE v22[4]; // [esp+80h] [ebp-250h] BYREF
  _DWORD v23[6]; // [esp+84h] [ebp-24Ch] BYREF
  char v24[28]; // [esp+9Ch] [ebp-234h] BYREF
  char Buffer[516]; // [esp+B8h] [ebp-218h] BYREF
  int v26; // [esp+2CCh] [ebp-4h]

  v2 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 4))(this, v18);
  v26 = 0;
  v3 = std::operator==<char>(v2, "Log");
  v26 = -1;
  result = std::string::~string(v18);
  if ( v3 )
  {
    std::string::string(&v20, "Path");
    v26 = 1;
    (*(void (__thiscall **)(void *, char *, int *))(*(_DWORD *)this + 12))(this, v24, &v20);
    LOBYTE(v26) = 3;
    std::string::~string(&v20);
    if ( (unsigned __int8)std::operator==<char>(v24, Locale) )
      std::string::operator=(v24, ".\\");
    std::string::string(&v20, "FileName");
    LOBYTE(v26) = 4;
    (*(void (__thiscall **)(void *, _BYTE *, int *))(*(_DWORD *)this + 12))(this, v22, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    if ( (unsigned __int8)std::operator==<char>(v22, Locale) )
      std::string::operator=(v22, "log_default");
    std::string::string(&v20, "EnableTime");
    LOBYTE(v26) = 7;
    v14 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogDisplay");
    LOBYTE(v26) = 8;
    v12 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogFile");
    LOBYTE(v26) = 9;
    v16 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogError");
    LOBYTE(v26) = 10;
    v17 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogInfo");
    LOBYTE(v26) = 11;
    v15 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogDebug");
    LOBYTE(v26) = 12;
    v13 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogWarring");
    LOBYTE(v26) = 13;
    v10 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    std::string::string(&v20, "LogFatal");
    LOBYTE(v26) = 14;
    v11 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 100))(this, &v20);
    LOBYTE(v26) = 6;
    std::string::~string(&v20);
    if ( v14 )
    {
      v5 = Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)&v19);
      Outpop::Utility::Date_Time::update((Outpop::Utility::Date_Time *)v18, v5);
      v6 = (const char *)v23[0];
      if ( v23[5] < 0x10u )
        v6 = (const char *)v23;
      sprintf(Buffer, "%s_%d_%d_%d_%d_%d_%d.log", v6, v18[2], v18[1], v18[0], v18[3], v18[4], v18[5]);
      std::string::operator=(v22, Buffer);
    }
    else
    {
      std::string::operator+=(v22, ".log");
    }
    if ( v12 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 136) = 1;
    if ( v16 )
    {
      std::operator+<char>(&v20, v24, v22);
      LOBYTE(v26) = 15;
      v7 = lpMultiByteStr[0];
      if ( lpMultiByteStr[5] < (LPCCH)0x10 )
        v7 = (const CHAR *)lpMultiByteStr;
      v8 = Outpop::Utility::Ascii_To_Wide::convert(v7);
      v19 = v8;
      LOBYTE(v26) = 16;
      std::wstring::wstring(v18, v8);
      LOBYTE(v26) = 17;
      v9 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::enable_file((int)v9, (int)v18);
      LOBYTE(v26) = 16;
      std::wstring::~wstring(v18);
      LOBYTE(v26) = 15;
      operator delete(v8);
      LOBYTE(v26) = 6;
      std::string::~string(&v20);
    }
    if ( v17 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 140) = 1;
    if ( v15 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 141) = 1;
    if ( v13 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 138) = 1;
    if ( v10 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 139) = 1;
    if ( v11 )
      *((_BYTE *)Outpop::Utility::Logger::instance() + 142) = 1;
    LOBYTE(v26) = 3;
    std::string::~string(v22);
    v26 = -1;
    return std::string::~string(v24);
  }
  return result;
}
