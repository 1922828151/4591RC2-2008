/*
 * func-name: sub_100242E0
 * func-address: 0x100242e0
 * callers: 0x100247c0, 0x10024900
 * callees: 0x10013150, 0x100131a0, 0x10013370, 0x100133e0, 0x1001e1d0, 0x1001e350, 0x1001e3c0, 0x10024030, 0x10024570, 0x1002b5a0, 0x1002b5c0, 0x1002b810, 0x1002e520
 */

char __thiscall sub_100242E0(int this, int a2, int a3)
{
  float *v5; // eax
  float *v6; // ebp
  int v7; // ebx
  _DWORD v8[2]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v9[2]; // [esp+24h] [ebp-28h] BYREF
  _BYTE v10[12]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v11[2]; // [esp+38h] [ebp-14h] BYREF
  _BOOL2 v12; // [esp+40h] [ebp-Ch]

  LOBYTE(v8[0]) = NxPlatformMismatch();
  if ( !sub_100133E0(67, 86, 88, 77, dword_1005678C, v8[0], a2) )
    return 0;
  sub_10013150(0, v8[0], a2);
  sub_1001E1D0(v11, this + 156);
  v9[0] = &StreamSave::`vftable';
  v9[1] = a2;
  v12 = a3 != 0;
  if ( !sub_1001E350(v11, (int)v9) )
  {
    v9[0] = &IceCore::Stream::`vftable';
    sub_1001E3C0(v11);
    return 0;
  }
  sub_1002E520(this + 8, v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 152)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 136)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 140)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 144)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 148)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 112)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 116)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 120)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 124)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 128)), v8[0], a2);
  sub_100131A0(COERCE_INT(*(float *)(this + 132)), v8[0], a2);
  v5 = sub_10024030(this);
  v6 = v5;
  if ( v5 )
  {
    sub_100131A0(COERCE_INT(*v5), v8[0], a2);
    sub_10013370(v6 + 1, 9, v8[0], a2);
    sub_10013370(v6 + 10, 3, v8[0], a2);
  }
  else
  {
    sub_100131A0(COERCE_INT(-1.0), v8[0], a2);
  }
  v7 = *(_DWORD *)(this + 288);
  if ( v7 )
  {
    sub_1002B5A0(v7);
    v8[0] = &StreamSave::`vftable';
    v8[1] = a2;
    sub_1002B810(v8);
    v8[0] = &IceCore::Stream::`vftable';
    sub_1002B5C0(v10);
  }
  v9[0] = &IceCore::Stream::`vftable';
  sub_1001E3C0(v11);
  return 1;
}
