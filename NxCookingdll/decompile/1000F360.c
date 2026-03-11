/*
 * func-name: sub_1000F360
 * func-address: 0x1000f360
 * callers: 0x10020740, 0x10030940
 * callees: 0x1000e540, 0x1000e560, 0x1000ee20, 0x1000ef70, 0x1000f160, 0x10014910
 */

char __thiscall sub_1000F360(unsigned int *this, int a2)
{
  float v2; // edi
  int (__thiscall ***v5)(_DWORD, int, int); // eax
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebp
  int (__thiscall ***v10)(_DWORD, int, int); // eax
  int v11; // ecx
  int *v12; // eax
  unsigned int v13; // edx
  _DWORD *v14; // ebx
  bool v15; // zf
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // eax
  float v28; // ecx
  float v29; // edx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  _DWORD *v34; // ecx
  int v35; // [esp+10h] [ebp-40h]
  int i; // [esp+14h] [ebp-3Ch]
  unsigned int v37; // [esp+18h] [ebp-38h] BYREF
  _DWORD *v38; // [esp+1Ch] [ebp-34h]
  float v39[3]; // [esp+20h] [ebp-30h] BYREF
  char v40; // [esp+2Ch] [ebp-24h]
  char v41; // [esp+2Dh] [ebp-23h]
  int v42; // [esp+30h] [ebp-20h]
  float v43; // [esp+34h] [ebp-1Ch]
  unsigned int v44[3]; // [esp+38h] [ebp-18h] BYREF
  int v45; // [esp+44h] [ebp-Ch]
  char v46; // [esp+54h] [ebp+4h]

  v2 = *(float *)a2;
  if ( !*(_DWORD *)a2 )
    return 0;
  *(float *)this = v2;
  v5 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v6 = (12 * (unsigned __int64)LODWORD(v2)) >> 32 != 0 ? -1 : 12 * LODWORD(v2);
  v7 = (_DWORD *)(**v5)(v5, __CFADD__(v6, 4) ? -1 : v6 + 4, 15);
  if ( v7 )
  {
    *(float *)v7 = v2;
    v8 = v7 + 1;
  }
  else
  {
    v8 = 0;
  }
  this[1] = (unsigned int)v8;
  if ( !v8 )
    return 0;
  v9 = 3 * *this;
  v10 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v11 = (12 * (unsigned __int64)(unsigned int)v9) >> 32 != 0 ? -1 : 12 * v9;
  v12 = (int *)(**v10)(v10, __CFADD__(v11, 4) ? -1 : v11 + 4, 1);
  v13 = 0;
  if ( !v12 )
    return 0;
  v14 = v12 + 1;
  *v12 = v9;
  v38 = v12 + 1;
  if ( v12 == (int *)-4 )
    return 0;
  v15 = *this == 0;
  v37 = 0;
  if ( !v15 )
  {
    v17 = 0;
    v35 = 0;
    for ( i = 0; ; v17 = i )
    {
      v18 = *(_DWORD *)(a2 + 4);
      if ( v18 )
      {
        v19 = *(_DWORD *)(v17 + v18);
      }
      else
      {
        v20 = *(_DWORD *)(a2 + 8);
        v19 = v20 ? *(unsigned __int16 *)(v35 + v20) : 0;
      }
      if ( v18 )
      {
        v21 = *(_DWORD *)(v17 + v18 + 4);
      }
      else
      {
        v22 = *(_DWORD *)(a2 + 8);
        if ( v22 )
        {
          v21 = *(unsigned __int16 *)(v35 + v22 + 2);
          v17 = i;
        }
        else
        {
          v21 = 1;
        }
      }
      if ( v18 )
      {
        v23 = *(_DWORD *)(v17 + v18 + 8);
      }
      else
      {
        v24 = *(_DWORD *)(a2 + 8);
        v23 = v24 ? *(unsigned __int16 *)(v35 + v24 + 4) : 2;
      }
      v14 = v38;
      sub_1000EF70(&v37, v13, (int)v38, v19, v21, v23, this[1]);
      i += 12;
      v35 += 6;
      v13 = v25 + 1;
      if ( v13 >= *this )
        break;
    }
  }
  v46 = sub_1000F160(v37, this[1], v14);
  v26 = sub_10014910();
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 12))(v26, v14 - 1);
  if ( v46 )
  {
    v27 = *(_DWORD *)(a2 + 12);
    if ( v27 )
    {
      v28 = *(float *)a2;
      v29 = *(float *)(a2 + 4);
      v43 = *(float *)(a2 + 16);
      v39[0] = v28;
      v39[2] = *(float *)(a2 + 8);
      v41 = 0;
      v39[1] = v29;
      v40 = 1;
      v42 = v27;
      sub_1000E540(v44);
      if ( sub_1000EE20(v44, a2, (int)v39) )
      {
        v30 = 0;
        if ( *this )
        {
          v31 = 0;
          do
          {
            v32 = v31 + v45;
            v33 = this[1];
            if ( *(int *)(v31 + v45) >= 0 )
              *(_DWORD *)(v31 + v33) &= ~0x20000000u;
            else
              *(_DWORD *)(v31 + v33) |= 0x20000000u;
            v34 = (_DWORD *)(v31 + this[1] + 4);
            if ( *(int *)(v32 + 8) >= 0 )
              *v34 &= ~0x20000000u;
            else
              *v34 |= 0x20000000u;
            if ( *(int *)(v32 + 4) >= 0 )
              *(_DWORD *)(v31 + this[1] + 8) &= ~0x20000000u;
            else
              *(_DWORD *)(v31 + this[1] + 8) |= 0x20000000u;
            ++v30;
            v31 += 12;
          }
          while ( v30 < *this );
        }
      }
      sub_1000E560(v44);
    }
  }
  return v46;
}
