/*
 * func-name: sub_1015E3E0
 * func-address: 0x1015e3e0
 * callers: 0x10019e6b
 * callees: 0x10001ded, 0x10005c09, 0x100090e8, 0x100096a1, 0x1000c8e7, 0x1000e71e, 0x100102cb, 0x100118d8, 0x10011a72, 0x10014c86, 0x1001562c, 0x10016d51, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_1015E3E0(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  void *v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  int v21; // ebx
  int v22; // eax
  void *v24; // [esp-Ch] [ebp-3Ch]
  int v25; // [esp-8h] [ebp-38h]
  int v26; // [esp-8h] [ebp-38h]
  void *v27; // [esp-4h] [ebp-34h]
  int v28; // [esp+0h] [ebp-30h] BYREF
  int v29; // [esp+4h] [ebp-2Ch]
  void *v30; // [esp+10h] [ebp-20h]
  int v31; // [esp+14h] [ebp-1Ch]
  int v32; // [esp+18h] [ebp-18h]
  void *v33; // [esp+1Ch] [ebp-14h]
  int *v34; // [esp+20h] [ebp-10h]
  int v35; // [esp+2Ch] [ebp-4h]
  _BYTE v36[148]; // [esp+30h] [ebp+0h] BYREF
  int v37; // [esp+D8h] [ebp+A8h]

  v34 = &v28;
  v31 = this;
  sub_10016D51(a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v35 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 148;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 148;
    else
      v8 = 0;
    if ( 29020049 - v8 < a4 )
      sub_10005C09(v28, v29);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 148;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = *(_DWORD *)(this + 8);
      if ( (v21 - (int)a3) / 148 >= a4 )
      {
        v27 = *(void **)(this + 8);
        v33 = (void *)(v21 - 148 * a4);
        v32 = 148 * a4;
        *(_DWORD *)(this + 8) = sub_100090E8(v33, v21, v27);
        sub_100118D8((int)a3, (int)v33, v21);
        sub_1000C8E7((int)a3, (int)&a3[v32], (int)v36);
      }
      else
      {
        v32 = 148 * a4;
        sub_100090E8(a3, v21, &a3[148 * a4]);
        v25 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 148;
        v24 = *(void **)(this + 8);
        LOBYTE(v35) = 3;
        sub_1000E71E(v24, v25, v36);
        v22 = v32;
        *(_DWORD *)(this + 8) += v32;
        v26 = *(_DWORD *)(this + 8) - v22;
        v35 = 0;
        sub_1000C8E7((int)a3, v26, (int)v36);
      }
    }
    else
    {
      if ( 29020049 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 148;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10014C86();
      v12 = (void *)sub_1001562C(v10);
      v13 = *(void **)(this + 4);
      LOBYTE(v33) = 0;
      v30 = v12;
      v32 = (int)v12;
      LOBYTE(v35) = 1;
      v32 = sub_10001DED(v13, (int)a3, v12);
      v14 = (void *)sub_1000E71E((void *)v32, a4, v36);
      v15 = *(_DWORD *)(this + 8);
      LOBYTE(v33) = 0;
      v32 = (int)v14;
      sub_10001DED(a3, v15, v14);
      v16 = *(_DWORD *)(this + 4);
      v17 = 0;
      v35 = 0;
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) / 148;
      v18 = v17 + a4;
      v37 = v17 + a4;
      if ( v16 )
      {
        sub_10011A72();
        operator delete(*(void **)(this + 4));
        v18 = v37;
      }
      v19 = v30;
      v20 = (char *)v30 + 148 * v18;
      *(_DWORD *)(this + 12) = (char *)v30 + 148 * v10;
      *(_DWORD *)(this + 8) = v20;
      *(_DWORD *)(this + 4) = v19;
    }
  }
  v35 = -1;
  return sub_100102CB(v28, v29);
}
