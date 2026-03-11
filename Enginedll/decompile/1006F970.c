/*
 * func-name: sub_1006F970
 * func-address: 0x1006f970
 * callers: 0x1006ff40, 0x100710d0, 0x10071140, 0x100d46f0
 * callees: 0x1006f820, 0x101a2500
 */

int __thiscall sub_1006F970(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_1006F820(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
