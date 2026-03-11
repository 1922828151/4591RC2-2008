/*
 * func-name: sub_100F6BC0
 * func-address: 0x100f6bc0
 * callers: 0x100f7610
 * callees: 0x1001b350, 0x1001e620, 0x1003e2d0, 0x1003e3d0, 0x100f5700, 0x100f5d90, 0x100f5f30, 0x101a2500, 0x101a2522
 */

_DWORD *__thiscall sub_100F6BC0(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  _DWORD *result; // eax
  unsigned int v10; // ebx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edi
  char *v22; // eax
  int v23; // ecx
  char *v24; // edi
  _DWORD *v25; // [esp-20h] [ebp-4Ch]
  _DWORD *v26; // [esp-Ch] [ebp-38h]
  int v27; // [esp-8h] [ebp-34h]
  int v28; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v29[5]; // [esp+Ch] [ebp-20h] BYREF
  int v30; // [esp+28h] [ebp-4h]
  int v31; // [esp+3Ch] [ebp+10h]
  _DWORD *v32; // [esp+40h] [ebp+14h]
  char *v33; // [esp+40h] [ebp+14h]

  v5 = a5[1];
  v29[0] = *a5;
  v7 = a5[2];
  v29[1] = v5;
  v8 = a5[3];
  result = *(_DWORD **)(this + 4);
  v29[4] = &v28;
  v29[2] = v7;
  v29[3] = v8;
  if ( result )
    v10 = (*(_DWORD *)(this + 12) - (int)result) >> 4;
  else
    v10 = 0;
  if ( a4 )
  {
    if ( result )
      v12 = (*(_DWORD *)(this + 8) - (int)result) >> 4;
    else
      v12 = 0;
    if ( 0xFFFFFFF - v12 < a4 )
      sub_100F5700();
    if ( result )
      v13 = (*(_DWORD *)(this + 8) - (int)result) >> 4;
    else
      v13 = 0;
    if ( v10 >= a4 + v13 )
    {
      v22 = *(char **)(this + 8);
      v31 = (int)v22;
      if ( (v22 - a3) >> 4 >= a4 )
      {
        v23 = 16 * a4;
        v24 = &v22[-16 * a4];
        v33 = (char *)v23;
        *(_DWORD *)(this + 8) = sub_1003E3D0(v24, v22, v22);
        sub_100F5D90(a3, v24, v31);
        return sub_1003E2D0(a3, &v33[(_DWORD)a3], v29);
      }
      else
      {
        sub_1003E3D0(a3, v22, &a3[16 * a4]);
        v27 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 4);
        v26 = *(_DWORD **)(this + 8);
        v30 = 2;
        sub_100F5F30(v26, v27, v29);
        *(_DWORD *)(this + 8) += 16 * a4;
        return sub_1003E2D0(a3, (_DWORD *)(*(_DWORD *)(this + 8) - 16 * a4), v29);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v10 >> 1) >= v10 )
        v14 = (v10 >> 1) + v10;
      else
        v14 = 0;
      if ( result )
        v15 = (*(_DWORD *)(this + 8) - (int)result) >> 4;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
      {
        if ( result )
          v16 = (*(_DWORD *)(this + 8) - (int)result) >> 4;
        else
          v16 = 0;
        v14 = a4 + v16;
      }
      v32 = sub_1001B350(v14);
      v25 = *(_DWORD **)(this + 4);
      v30 = 0;
      v17 = sub_1001E620(v25, a3, v32);
      v18 = sub_100F5F30(v17, a4, v29);
      sub_1001E620(a3, *(_DWORD **)(this + 8), v18);
      v19 = *(_DWORD *)(this + 4);
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) >> 4;
      else
        v20 = 0;
      v21 = v20 + a4;
      if ( v19 )
        operator delete(*(void **)(this + 4));
      result = v32;
      *(_DWORD *)(this + 12) = &v32[4 * v14];
      *(_DWORD *)(this + 8) = &v32[4 * v21];
      *(_DWORD *)(this + 4) = v32;
    }
  }
  return result;
}
