/*
 * func-name: sub_101C30A0
 * func-address: 0x101c30a0
 * callers: 0x1000dce7
 * callees: 0x10002bb7, 0x100045d9
 */

int __thiscall sub_101C30A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v7; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+14h] [ebp-10h]
  char v9[4]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+1Ch] [ebp-8h]

  sub_10002BB7((int)&v7, (int)a2);
  v3 = v7;
  v10 = this[2];
  if ( !v7 || v7 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v8;
  if ( v8 == v10 )
  {
    v7 = (_DWORD *)*a2;
    v8 = 0;
    v5 = (_DWORD *)sub_100045D9((int)v9, (int)&v7);
    v3 = (_DWORD *)*v5;
    v4 = v5[1];
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
