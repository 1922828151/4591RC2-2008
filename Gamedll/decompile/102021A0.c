/*
 * func-name: sub_102021A0
 * func-address: 0x102021a0
 * callers: 0x100042f0
 * callees: 0x10008d23, 0x1000de81, 0x100115f9, 0x10016cf2, 0x100184a3
 */

int __thiscall sub_102021A0(_DWORD *this, int *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax
  int v9; // [esp+0h] [ebp-138h]
  int v10; // [esp+0h] [ebp-138h]
  int v11; // [esp+0h] [ebp-138h]
  int v12; // [esp+4h] [ebp-134h]
  int v13; // [esp+4h] [ebp-134h]
  int v14; // [esp+4h] [ebp-134h]
  _DWORD *v15; // [esp+14h] [ebp-124h] BYREF
  int v16; // [esp+18h] [ebp-120h]
  char v17[4]; // [esp+1Ch] [ebp-11Ch] BYREF
  int v18; // [esp+20h] [ebp-118h]
  int v19; // [esp+28h] [ebp-110h] BYREF
  int v20; // [esp+134h] [ebp-4h]

  sub_10008D23((int)&v15, (int)a2);
  v3 = v15;
  v18 = this[2];
  if ( !v15 || v15 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v16;
  if ( v16 == v18 )
  {
    v5 = sub_1000DE81(v9, v12);
    v6 = *a2;
    v20 = 0;
    v19 = v6;
    sub_100115F9(v5);
    LOBYTE(v20) = 1;
    v7 = (_DWORD *)sub_100184A3((int)v17, (int)&v19);
    v3 = (_DWORD *)*v7;
    v4 = v7[1];
    LOBYTE(v20) = 0;
    sub_10016CF2(v10, v13);
    v20 = -1;
    sub_10016CF2(v11, v14);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 12;
}
