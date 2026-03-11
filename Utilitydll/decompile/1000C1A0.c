/*
 * func-name: ??0Barrier@Utility@Outpop@@QAE@W4barrier_type@12@HPBD@Z
 * func-address: 0x1000c1a0
 * callers: none
 * callees: none
 */

HANDLE *__thiscall Outpop::Utility::Barrier::Barrier(HANDLE *this, void *a2, void *a3, const CHAR *lpName)
{
  this[6] = a2;
  this[2] = 0;
  this[5] = 0;
  this[1] = a3;
  *this = CreateEventA(0, 1, 0, lpName);
  return this;
}
