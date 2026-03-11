/*
 * func-name: ?GetGSeconds@@YAMXZ
 * func-address: 0x100956b0
 * callers: 0x100c5520, 0x1015b760
 * callees: 0x1007e540, 0x1007e670
 */

double __cdecl GetGSeconds()
{
  CRETimer *v0; // eax

  v0 = REGetGlobalTimer();
  return (float)CRETimer::GetAbsoluteTime(v0);
}
