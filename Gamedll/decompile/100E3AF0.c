/*
 * func-name: sub_100E3AF0
 * func-address: 0x100e3af0
 * callers: 0x10006e38
 * callees: 0x1000164a, 0x10007351, 0x1000bd61, 0x1000cca2, 0x1000d16b, 0x1000d684, 0x1000f12d, 0x10010622, 0x10011b26, 0x100123c3, 0x100154a6, 0x100184d5, 0x102c9d50, 0x102c9d86
 */

int __thiscall sub_100E3AF0(int this, char a2, int a3, int a4, void *a5, int a6, int a7, int a8)
{
  int result; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  void *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  char *v25; // edi
  void *v26; // ebx
  int v27; // ebx
  int v28; // edi
  int v29; // eax
  void *v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // esi
  int v35; // [esp-4h] [ebp-40h]
  int v36[4]; // [esp+0h] [ebp-3Ch] BYREF
  char v37[8]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v38; // [esp+18h] [ebp-24h]
  int v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+20h] [ebp-1Ch] BYREF
  void *v41; // [esp+24h] [ebp-18h]
  int v42; // [esp+28h] [ebp-14h]
  int *v43; // [esp+2Ch] [ebp-10h]
  int v44; // [esp+38h] [ebp-4h]

  v43 = v36;
  v39 = this;
  if ( !a6 || a6 != a4 )
    _invalid_parameter_noinfo();
  result = -1307163959 * (a7 - (_DWORD)a5);
  v10 = *(_DWORD *)(this + 4);
  v11 = (a7 - (int)a5) / 92;
  v38 = v11;
  if ( v10 )
  {
    result = -1307163959 * (*(_DWORD *)(this + 12) - v10);
    v12 = (int)(*(_DWORD *)(this + 12) - v10) / 92;
  }
  else
  {
    v12 = 0;
  }
  if ( v11 )
  {
    if ( v10 )
    {
      v41 = (void *)(*(_DWORD *)(this + 8) - v10);
      v13 = (int)v41 / 92;
    }
    else
    {
      v13 = 0;
    }
    if ( 46684427 - v13 < v11 )
      sub_1000F12D(v36[0], v36[1]);
    if ( v10 )
    {
      v41 = (void *)(*(_DWORD *)(this + 8) - v10);
      v14 = (int)v41 / 92;
    }
    else
    {
      v14 = 0;
    }
    if ( v12 >= v11 + v14 )
    {
      v26 = *(void **)(this + 8);
      if ( v10 > (unsigned int)v26 )
        _invalid_parameter_noinfo();
      v40 = this;
      v41 = v26;
      if ( sub_10010622((int)&a2) >= v11 )
      {
        v33 = *(_DWORD *)(this + 8);
        v38 = v33 - 92 * v11;
        *(_DWORD *)(this + 8) = sub_10007351(v38, v33, v33);
        v34 = a3;
        sub_10011B26(a3, v38, v33);
        return sub_1000D16B(a4, (int)a5, a6, a7, v34);
      }
      else
      {
        v27 = a3;
        v28 = 92 * v11;
        sub_10007351(a3, *(_DWORD *)(this + 8), v28 + a3);
        v40 = a4;
        v41 = a5;
        sub_1000164A((int)v37);
        v29 = sub_10010622((int)&a2);
        sub_100123C3((int)&v40, v29);
        v35 = *(_DWORD *)(this + 8);
        v44 = 2;
        sub_100184D5(v40, (int)v41, a6, a7, v35);
        v30 = v41;
        v31 = v40;
        v32 = (int)a5;
        *(_DWORD *)(this + 8) += v28;
        v44 = -1;
        return sub_1000D16B(a4, v32, v31, (int)v30, v27);
      }
    }
    else
    {
      if ( 46684427 - (v12 >> 1) >= v12 )
        v15 = (v12 >> 1) + v12;
      else
        v15 = 0;
      if ( v10 )
      {
        v41 = (void *)(*(_DWORD *)(this + 8) - v10);
        v16 = (int)v41 / 92;
      }
      else
      {
        v16 = 0;
      }
      if ( v15 < v11 + v16 )
        v15 = v11 + sub_1000CCA2();
      v17 = (void *)sub_1000D684(v15);
      v18 = *(_DWORD *)(this + 4);
      LOBYTE(v38) = 0;
      v41 = v17;
      v42 = (int)v17;
      v44 = 0;
      v19 = sub_100154A6(v18, a3, (int)v17);
      LOBYTE(v38) = 0;
      v42 = v19;
      v20 = sub_100154A6((int)a5, a7, v19);
      v21 = *(_DWORD *)(this + 8);
      LOBYTE(a5) = 0;
      v42 = v20;
      sub_100154A6(a3, v21, v20);
      v22 = *(_DWORD *)(this + 4);
      v44 = -1;
      if ( v22 )
        v22 = (*(_DWORD *)(this + 8) - v22) / 92;
      v23 = v22 + v11;
      v24 = *(_DWORD *)(this + 4);
      if ( v24 )
      {
        sub_1000BD61(v24, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      result = (int)v41;
      v25 = (char *)v41 + 92 * v23;
      *(_DWORD *)(this + 12) = (char *)v41 + 92 * v15;
      *(_DWORD *)(this + 8) = v25;
      *(_DWORD *)(this + 4) = result;
    }
  }
  return result;
}
