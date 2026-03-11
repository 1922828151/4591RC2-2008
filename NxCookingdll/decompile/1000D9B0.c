/*
 * func-name: sub_1000D9B0
 * func-address: 0x1000d9b0
 * callers: none
 * callees: none
 */

int __thiscall sub_1000D9B0(void *this, _DWORD *a2)
{
  int result; // eax

  a2[6] = 0;
  *a2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 48))(this);
  a2[1] = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
  a2[4] = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this);
  a2[5] = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 56))(this);
  result = 1;
  a2[2] = 12;
  a2[3] = 12;
  return result;
}
