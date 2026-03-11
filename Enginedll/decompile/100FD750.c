/*
 * func-name: sub_100FD750
 * func-address: 0x100fd750
 * callers: 0x100eaad0
 * callees: 0x100f9c40, 0x100fa700, 0x100faa40, 0x100fb120, 0x100fb800, 0x100fc250, 0x100fccd0, 0x100fe390
 */

char __thiscall sub_100FD750(
        int this,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v12; // edi
  int v13; // ebx
  _DWORD *v14; // ebp
  bool v15; // zf
  float v16; // ebx
  float v17; // ebp
  int *v18; // edi
  int i; // [esp+0h] [ebp-14h] BYREF
  _DWORD *v21; // [esp+4h] [ebp-10h]
  float v22; // [esp+10h] [ebp-4h]

  *(float *)this = a5;
  *(_DWORD *)(this + 16) = a10;
  *(float *)(this + 4) = a6;
  *(float *)(this + 8) = a7;
  *(float *)(this + 12) = a8;
  if ( a11 == 1 )
    sub_100FAA40((_DWORD *)this, a2, a3, a4);
  sub_100FB120((float *)this, a2, a3, a4, a9);
  v12 = **(_DWORD ***)(this + 40);
  v13 = this + 36;
  v21 = v12;
  for ( i = this + 36; ; v13 = i )
  {
    v14 = *(_DWORD **)(this + 40);
    if ( !v13 || v13 != this + 36 )
      invalid_parameter_noinfo();
    if ( v12 == v14 )
      break;
    if ( !v13 )
      invalid_parameter_noinfo();
    if ( v12 == *(_DWORD **)(v13 + 4) )
      invalid_parameter_noinfo();
    v15 = v12 == *(_DWORD **)(i + 4);
    v16 = *((float *)v12 + 3);
    v17 = *((float *)v12 + 4);
    v22 = *((float *)v12 + 5);
    if ( v15 )
      invalid_parameter_noinfo();
    v18 = v12 + 6;
    if ( a9 == 1 )
      sub_100FB800((_DWORD *)this, v18, a2, (int)a4, v16, v17, v22);
    sub_100FC250((_DWORD *)this, v18, a2, (int)a4, v16, v17, v22);
    sub_100FCCD0((_DWORD *)this, v18, a2, (int)a4, v16, v17, v22);
    sub_100FE390(&i);
    v12 = v21;
  }
  sub_100FA700((_DWORD *)this, (int)a3);
  sub_100F9C40((int)a2);
  return 1;
}
