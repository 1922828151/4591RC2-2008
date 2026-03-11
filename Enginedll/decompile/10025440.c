/*
 * func-name: ?_Insert_n@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@IAEXV?$_Vector_iterator@VBBox@@V?$allocator@VBBox@@@std@@@2@IABVBBox@@@Z
 * func-address: 0x10025440
 * callers: 0x1002b7b0, 0x1002b8c0, 0x1002b970, 0x1002b990
 * callees: 0x10019d00, 0x1001c710, 0x1001e450, 0x10020390, 0x10020870, 0x100217e0, 0x10023d30, 0x1006c470, 0x101190c0, 0x1017a0b0, 0x101a2500, 0x101a2522
 */

int __thiscall std::vector<BBox>::_Insert_n(int *this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  char *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // ecx
  int (__thiscall ***v25)(_DWORD, _DWORD); // ecx
  int v26; // eax
  unsigned int v27; // ebx
  _DWORD *v28; // ecx
  int v29; // ebx
  _DWORD *v30; // eax
  _DWORD *v32; // [esp-Ch] [ebp-58h]
  int v33; // [esp-8h] [ebp-54h]
  int v34; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD v35[10]; // [esp+Ch] [ebp-40h] BYREF
  int v36; // [esp+34h] [ebp-18h]
  int *v37; // [esp+38h] [ebp-14h]
  int *v38; // [esp+3Ch] [ebp-10h]
  int v39; // [esp+48h] [ebp-4h]
  int v40; // [esp+5Ch] [ebp+10h]
  char *v41; // [esp+60h] [ebp+14h]
  void *v42; // [esp+60h] [ebp+14h]

  v38 = &v34;
  v37 = this;
  v6 = a5[2];
  v35[1] = a5[1];
  v7 = a5[3];
  v35[2] = v6;
  v8 = a5[4];
  v35[3] = v7;
  v9 = a5[5];
  v35[4] = v8;
  v10 = a5[6];
  v35[5] = v9;
  v11 = a5[7];
  v35[6] = v10;
  v12 = a5[8];
  v13 = a5[9];
  v35[0] = &BBox::`vftable';
  v35[7] = v11;
  v35[8] = v12;
  v35[9] = v13;
  v14 = v37[1];
  v15 = 0;
  v39 = 0;
  if ( v14 )
    v15 = (this[3] - v14) / 40;
  if ( a4 )
  {
    if ( v14 )
      v16 = (this[2] - v14) / 40;
    else
      v16 = 0;
    if ( 107374182 - v16 < a4 )
      std::vector<BBox>::_Xlen();
    if ( v14 )
      v17 = (this[2] - v14) / 40;
    else
      v17 = 0;
    if ( v15 >= a4 + v17 )
    {
      v28 = (_DWORD *)this[2];
      v42 = v28;
      if ( ((int)v28 - a3) / 40 >= a4 )
      {
        v29 = 40 * a4;
        v40 = (int)&v28[-10 * a4];
        this[2] = (int)sub_10023D30((int)&v28[v29 / 0xFFFFFFFC], (int)v28, v28);
        v30 = (_DWORD *)sub_10020870(a3, v40, (int)v42);
        sub_1001C710(v30, a3, a3 + v29, v35);
      }
      else
      {
        sub_10023D30(a3, (int)v28, (_DWORD *)(a3 + 40 * a4));
        v33 = a4 - (this[2] - a3) / 40;
        v32 = (_DWORD *)this[2];
        LOBYTE(v39) = 3;
        std::vector<BBox>::_Ufill(v32, v33, v35);
        this[2] += 40 * a4;
        sub_1001C710((_DWORD *)(40 * a4), a3, this[2] - 40 * a4, v35);
      }
    }
    else
    {
      if ( 107374182 - (v15 >> 1) >= v15 )
        v18 = (v15 >> 1) + v15;
      else
        v18 = 0;
      if ( v14 )
        v19 = (this[2] - v14) / 40;
      else
        v19 = 0;
      if ( v18 < a4 + v19 )
        v18 = a4 + std::vector<BBox>::size(this);
      v20 = (char *)sub_1006C470(v18);
      v21 = this[1];
      LOBYTE(v36) = 0;
      v41 = v20;
      LOBYTE(v39) = 1;
      v22 = sub_1001E450(v21, a3, v20);
      v23 = std::vector<BBox>::_Ufill(v22, a4, v35);
      v24 = this[2];
      LOBYTE(v36) = 0;
      sub_1001E450(a3, v24, v23);
      v25 = (int (__thiscall ***)(_DWORD, _DWORD))this[1];
      v26 = 0;
      v39 = 0;
      if ( v25 )
        v26 = (this[2] - (int)v25) / 40;
      v27 = v26 + a4;
      if ( v25 )
      {
        std::vector<BBox>::_Destroy(v25, (int (__thiscall ***)(_DWORD, _DWORD))this[2]);
        operator delete((void *)this[1]);
      }
      this[3] = (int)&v41[40 * v18];
      this[2] = (int)&v41[40 * v27];
      this[1] = (int)v41;
    }
  }
  v39 = -1;
  return sub_1017A0B0(v35);
}
