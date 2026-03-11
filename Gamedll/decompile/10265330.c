/*
 * func-name: sub_10265330
 * func-address: 0x10265330
 * callers: 0x10013b97
 * callees: 0x10004ab6, 0x100056cd, 0x10008a49, 0x1000a3da, 0x1000ee26, 0x100114cd, 0x10014772, 0x10016536, 0x10019fe7, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_10265330(int *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  int v7; // edx
  char v8; // al
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  void *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  void *v20; // ebx
  int v21; // eax
  unsigned int v22; // ecx
  void *v23; // eax
  char *v24; // ecx
  int v25; // ebx
  int v26; // eax
  int v27; // [esp-Ch] [ebp-6Ch]
  int v28; // [esp-8h] [ebp-68h]
  int v29; // [esp-8h] [ebp-68h]
  int v30; // [esp-4h] [ebp-64h]
  int v31[4]; // [esp+0h] [ebp-60h] BYREF
  void *v32; // [esp+10h] [ebp-50h]
  int *v33; // [esp+14h] [ebp-4Ch]
  int v34; // [esp+18h] [ebp-48h]
  int v35; // [esp+1Ch] [ebp-44h]
  _BYTE v36[28]; // [esp+20h] [ebp-40h] BYREF
  int v37; // [esp+3Ch] [ebp-24h]
  int v38; // [esp+40h] [ebp-20h]
  int v39; // [esp+44h] [ebp-1Ch]
  char v40; // [esp+48h] [ebp-18h]
  int *v41; // [esp+50h] [ebp-10h]
  int v42; // [esp+5Ch] [ebp-4h]
  unsigned int v43; // [esp+70h] [ebp+10h]

  v41 = v31;
  v33 = this;
  std::wstring::wstring(v36, a5);
  v6 = *(_DWORD *)(a5 + 32);
  v7 = *(_DWORD *)(a5 + 36);
  v37 = *(_DWORD *)(a5 + 28);
  v8 = *(_BYTE *)(a5 + 40);
  v38 = v6;
  v39 = v7;
  v40 = v8;
  v9 = this[1];
  v10 = 0;
  v42 = 0;
  if ( v9 )
    v10 = (this[3] - v9) / 44;
  v11 = a4;
  if ( a4 )
  {
    if ( v9 )
      v12 = (this[2] - v9) / 44;
    else
      v12 = 0;
    if ( 97612893 - v12 < a4 )
      sub_10004AB6(v31[0], v31[1]);
    if ( v9 )
      v13 = (this[2] - v9) / 44;
    else
      v13 = 0;
    if ( v10 >= v11 + v13 )
    {
      v25 = this[2];
      if ( (v25 - a3) / 44 >= v11 )
      {
        v30 = this[2];
        v34 = v25 - 44 * v11;
        v35 = 44 * v11;
        this[2] = sub_100114CD(v34, v25, v30);
        sub_100056CD(a3, v34, v25);
        sub_10014772(a3, v35 + a3, (int)v36);
      }
      else
      {
        v35 = 44 * v11;
        sub_100114CD(a3, v25, a3 + 44 * v11);
        v28 = a4 - (this[2] - a3) / 44;
        v27 = this[2];
        LOBYTE(v42) = 3;
        sub_1000A3DA(v27, v28, (int)v36);
        v26 = v35;
        this[2] += v35;
        v29 = this[2] - v26;
        v42 = 0;
        sub_10014772(a3, v29, (int)v36);
      }
    }
    else
    {
      if ( 97612893 - (v10 >> 1) >= v10 )
        v14 = (v10 >> 1) + v10;
      else
        v14 = 0;
      if ( v9 )
        v15 = (this[2] - v9) / 44;
      else
        v15 = 0;
      if ( v14 < v11 + v15 )
        v14 = a4 + sub_10016536();
      v16 = (void *)sub_10019FE7(v14);
      v17 = this[1];
      LOBYTE(v34) = 0;
      v32 = v16;
      v35 = (int)v16;
      LOBYTE(v42) = 1;
      v35 = sub_1000EE26(v17, a3, (int)v16);
      v18 = sub_1000A3DA(v35, a4, (int)v36);
      v19 = this[2];
      LOBYTE(v34) = 0;
      v35 = v18;
      sub_1000EE26(a3, v19, v18);
      v20 = (void *)this[1];
      v21 = 0;
      v42 = 0;
      if ( v20 )
        v21 = (this[2] - (int)v20) / 44;
      v22 = v21 + a4;
      v43 = v21 + a4;
      if ( v20 )
      {
        sub_10008A49(v20, this[2]);
        operator delete((void *)this[1]);
        v22 = v43;
      }
      v23 = v32;
      v24 = (char *)v32 + 44 * v22;
      this[3] = (int)v32 + 44 * v14;
      this[2] = (int)v24;
      this[1] = (int)v23;
    }
  }
  v42 = -1;
  std::wstring::~wstring(v36);
}
