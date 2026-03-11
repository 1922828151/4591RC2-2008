/*
 * func-name: ??XTime_Value@Utility@Outpop@@QAE?AV012@N@Z
 * func-address: 0x10001520
 * callers: 0x10001550, 0x10001590
 * callees: 0x100018c0, 0x10019870
 */

int __thiscall Outpop::Utility::Time_Value::operator*=(int *this, Outpop::Utility::Time_Value *a2, double a3)
{
  int v3; // ecx

  *(_DWORD *)a2 = (int)(((double)*this * 1000000.0 + (double)this[1]) * a3);
  *((_DWORD *)a2 + 1) = 0;
  Outpop::Utility::Time_Value::normalize(a2);
  return v3;
}
