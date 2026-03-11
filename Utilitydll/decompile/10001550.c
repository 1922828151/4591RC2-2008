/*
 * func-name: ??DUtility@Outpop@@YA?AVTime_Value@01@NABV201@@Z
 * func-address: 0x10001550
 * callers: none
 * callees: 0x10001520
 */

Outpop::Utility::Time_Value *__cdecl Outpop::Utility::operator*(Outpop::Utility::Time_Value *a1, double a2, int *a3)
{
  int v3; // edx
  int v5[2]; // [esp+Ch] [ebp-8h] BYREF

  v3 = a3[1];
  v5[0] = *a3;
  v5[1] = v3;
  Outpop::Utility::Time_Value::operator*=(v5, a1, a2);
  return a1;
}
