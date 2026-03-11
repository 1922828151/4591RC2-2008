/*
 * func-name: ??DUtility@Outpop@@YA?AVTime_Value@01@ABV201@N@Z
 * func-address: 0x10001590
 * callers: none
 * callees: 0x10001520
 */

Outpop::Utility::Time_Value *__cdecl Outpop::Utility::operator*(Outpop::Utility::Time_Value *a1, int *a2, double a3)
{
  int v3; // edx
  int v5[2]; // [esp+Ch] [ebp-8h] BYREF

  v3 = a2[1];
  v5[0] = *a2;
  v5[1] = v3;
  Outpop::Utility::Time_Value::operator*=(v5, a1, a3);
  return a1;
}
