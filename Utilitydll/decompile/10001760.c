/*
 * func-name: ??GUtility@Outpop@@YA?AVTime_Value@01@ABV201@0@Z
 * func-address: 0x10001760
 * callers: 0x10004830, 0x10016fc0
 * callees: 0x100018c0
 */

int __cdecl Outpop::Utility::operator-(Outpop::Utility::Time_Value *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  Outpop::Utility::Time_Value *v4; // ecx
  int v5; // ecx

  v3 = a2[1] - a3[1];
  *(_DWORD *)a1 = *a2 - *a3;
  *((_DWORD *)a1 + 1) = v3;
  Outpop::Utility::Time_Value::normalize(a1);
  Outpop::Utility::Time_Value::normalize(v4);
  return v5;
}
