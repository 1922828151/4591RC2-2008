/*
 * func-name: ?update@Date_Time@Utility@Outpop@@QAEXABVTime_Value@23@@Z
 * func-address: 0x100011c0
 * callers: 0x100010c0, 0x100010f0, 0x10001130, 0x10001190, 0x10016070
 * callees: 0x10019720
 */

void __thiscall Outpop::Utility::Date_Time::update(
        Outpop::Utility::Date_Time *this,
        const struct Outpop::Utility::Time_Value *a2)
{
  __int64 v2; // rax
  DWORD v4; // edi
  int wMonth; // edx
  int wYear; // eax
  int wMilliseconds; // ecx
  int wMinute; // edx
  int wSecond; // eax
  int wDayOfWeek; // edx
  FILETIME FileTime; // [esp+10h] [ebp-20h] BYREF
  struct _FILETIME LocalFileTime; // [esp+18h] [ebp-18h] BYREF
  _SYSTEMTIME SystemTime; // [esp+20h] [ebp-10h] BYREF

  v2 = *(int *)a2 + 3054539008LL;
  HIDWORD(v2) += 2;
  v4 = (unsigned __int64)(10 * *((_DWORD *)a2 + 1) + 10000000 * v2) >> 32;
  FileTime.dwLowDateTime = 10 * *((_DWORD *)a2 + 1) + 10000000 * (*(_DWORD *)a2 - 1240428288);
  FileTime.dwHighDateTime = v4;
  FileTimeToLocalFileTime(&FileTime, &LocalFileTime);
  FileTimeToSystemTime(&LocalFileTime, &SystemTime);
  wMonth = SystemTime.wMonth;
  wYear = SystemTime.wYear;
  *(_DWORD *)this = SystemTime.wDay;
  *((_DWORD *)this + 3) = SystemTime.wHour;
  wMilliseconds = SystemTime.wMilliseconds;
  *((_DWORD *)this + 1) = wMonth;
  wMinute = SystemTime.wMinute;
  *((_DWORD *)this + 2) = wYear;
  wSecond = SystemTime.wSecond;
  *((_DWORD *)this + 4) = wMinute;
  wDayOfWeek = SystemTime.wDayOfWeek;
  *((_DWORD *)this + 5) = wSecond;
  *((_DWORD *)this + 6) = 1000 * wMilliseconds;
  *((_DWORD *)this + 7) = wDayOfWeek;
}
