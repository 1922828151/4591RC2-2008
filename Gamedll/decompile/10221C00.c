/*
 * func-name: sub_10221C00
 * func-address: 0x10221c00
 * callers: 0x1000a515
 * callees: 0x100074c3, 0x10007f8b, 0x100082b5, 0x1000e5ed, 0x1000f6fa
 */

int __thiscall sub_10221C00(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  void *v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  int v9; // [esp+0h] [ebp-1A0h]
  int v10; // [esp+0h] [ebp-1A0h]
  int v11; // [esp+0h] [ebp-1A0h]
  int v12; // [esp+4h] [ebp-19Ch]
  int v13; // [esp+4h] [ebp-19Ch]
  int v14; // [esp+4h] [ebp-19Ch]
  _DWORD *v15; // [esp+14h] [ebp-18Ch] BYREF
  int v16; // [esp+18h] [ebp-188h]
  char v17[4]; // [esp+1Ch] [ebp-184h] BYREF
  int v18; // [esp+20h] [ebp-180h]
  int v19; // [esp+28h] [ebp-178h] BYREF
  int v20; // [esp+19Ch] [ebp-4h]

  sub_1000F6FA((int)&v15, (int)a2);
  v3 = v15;
  v18 = this[2];
  if ( !v15 || v15 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v16;
  if ( v16 == v18 )
  {
    v5 = (void *)sub_1000E5ED(v9, v12);
    v6 = *a2;
    v20 = 0;
    v19 = v6;
    sub_10007F8B(v5);
    LOBYTE(v20) = 1;
    v7 = (_DWORD *)sub_100082B5((int)v17, (int)&v19);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v20) = 0;
    sub_100074C3(v10, v13);
    v20 = -1;
    sub_100074C3(v11, v14);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
