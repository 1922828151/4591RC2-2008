/*
 * func-name: sub_101A0380
 * func-address: 0x101a0380
 * callers: 0x1000e985
 * callees: none
 */

bool __thiscall sub_101A0380(int this)
{
  return *(_DWORD *)(this + 8) == -1 || *(float *)(this + 60) < *(float *)&GSeconds - *(float *)(this + 56);
}
