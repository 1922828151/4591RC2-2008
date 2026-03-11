/*
 * func-name: sub_100090A0
 * func-address: 0x100090a0
 * callers: 0x10009500
 * callees: none
 */

unsigned int __thiscall sub_100090A0(int *this)
{
  unsigned int result; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax

  result = this[3];
  if ( this[2] + 1 > result )
  {
    v3 = ((((result + 1) >> 1) | (result + 1)) >> 2) | ((result + 1) >> 1) | (result + 1);
    v4 = (((v3 >> 4) | v3) >> 8) | (v3 >> 4) | v3;
    v5 = *this;
    v6 = (v4 | HIWORD(v4)) + 1;
    v7 = this[1];
    this[3] = v6;
    v8 = 4 * v6;
    if ( v7 )
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 16))(v5, v7, v8);
    else
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v8, 0);
    this[1] = result;
  }
  return result;
}
