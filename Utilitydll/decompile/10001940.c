/*
 * func-name: ?gettimeofday@Time_Value@Utility@Outpop@@SA?AV123@XZ
 * func-address: 0x10001940
 * callers: 0x100010c0, 0x10001190, 0x10004190, 0x10004430, 0x10004830, 0x10016070, 0x10016fc0
 * callees: 0x100018c0, 0x10019760, 0x100197d0
 */

Outpop::Utility::Time_Value *__cdecl Outpop::Utility::Time_Value::gettimeofday(Outpop::Utility::Time_Value *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // [esp-10h] [ebp-20h]
  struct _FILETIME SystemTimeAsFileTime; // [esp+8h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v1 = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) / 0x989680uLL;
  v3 = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) % 0x989680uLL;
  SystemTimeAsFileTime.dwHighDateTime = HIDWORD(v1);
  *(_DWORD *)a1 = v1;
  *((_DWORD *)a1 + 1) = v3 / 0xA;
  Outpop::Utility::Time_Value::normalize(a1);
  return a1;
}
