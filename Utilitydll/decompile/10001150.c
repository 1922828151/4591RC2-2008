/*
 * func-name: ??0Date_Time@Utility@Outpop@@QAE@JJJJJJJJ@Z
 * func-address: 0x10001150
 * callers: none
 * callees: none
 */

Outpop::Utility::Date_Time *__thiscall Outpop::Utility::Date_Time::Date_Time(
        Outpop::Utility::Date_Time *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  Outpop::Utility::Date_Time *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  *((_DWORD *)this + 4) = a6;
  *((_DWORD *)this + 5) = a7;
  *((_DWORD *)this + 6) = a8;
  return result;
}
