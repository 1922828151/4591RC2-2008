/*
 * func-name: sub_101A0590
 * func-address: 0x101a0590
 * callers: 0x100083e6
 * callees: none
 */

bool __thiscall sub_101A0590(int this)
{
  return *(_DWORD *)(this + 8) == -1 || *(float *)(this + 60) < *(float *)&GSeconds - *(float *)(this + 56);
}
