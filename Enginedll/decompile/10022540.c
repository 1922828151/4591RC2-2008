/*
 * func-name: ?_Insert_n@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@IAEXV?$_Vector_iterator@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@2@IABUAttributeRange@@@Z
 * func-address: 0x10022540
 * callers: 0x10025f50, 0x10026030, 0x100260e0, 0x10026100
 * callees: 0x1001a060, 0x1001eb70, 0x10020410, 0x1006c4d0, 0x100a1af0, 0x100a1c50, 0x100a1cd0, 0x100a1d70, 0x101a2500, 0x101a2522
 */

int __thiscall std::vector<AttributeRange>::_Insert_n(int this, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  char *v21; // ecx
  int v22; // edi
  int v23; // [esp-20h] [ebp-50h]
  _DWORD *v24; // [esp-Ch] [ebp-3Ch]
  int v25; // [esp-8h] [ebp-38h]
  int v26; // [esp+0h] [ebp-30h] BYREF
  _DWORD v27[6]; // [esp+Ch] [ebp-24h] BYREF
  int v28; // [esp+2Ch] [ebp-4h]
  int v29; // [esp+40h] [ebp+10h]
  char *v30; // [esp+44h] [ebp+14h]
  void *v31; // [esp+44h] [ebp+14h]

  v5 = a5[1];
  v27[0] = *a5;
  v7 = a5[2];
  v27[1] = v5;
  v8 = a5[3];
  result = a5[4];
  v27[2] = v7;
  v10 = *(_DWORD *)(this + 4);
  v27[5] = &v26;
  v27[3] = v8;
  v27[4] = result;
  if ( v10 )
  {
    result = 1717986919 * (*(_DWORD *)(this + 12) - v10);
    v11 = (*(_DWORD *)(this + 12) - v10) / 20;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    if ( v10 )
      v12 = (*(_DWORD *)(this + 8) - v10) / 20;
    else
      v12 = 0;
    if ( 214748364 - v12 < a4 )
      std::vector<AttributeRange>::_Xlen();
    if ( v10 )
      v13 = (*(_DWORD *)(this + 8) - v10) / 20;
    else
      v13 = 0;
    if ( v11 >= a4 + v13 )
    {
      v21 = *(char **)(this + 8);
      v31 = v21;
      if ( (int)&v21[-a3] / 20 >= a4 )
      {
        v22 = 20 * a4;
        v29 = (int)&v21[-20 * a4];
        *(_DWORD *)(this + 8) = sub_100A1D70(&v21[-v22], v21, v21);
        sub_1001EB70(a3, v29, (int)v31);
        return sub_100A1C50(a3, a3 + v22, v27);
      }
      else
      {
        sub_100A1D70(a3, v21, a3 + 20 * a4);
        v25 = a4 - (*(_DWORD *)(this + 8) - a3) / 20;
        v24 = *(_DWORD **)(this + 8);
        v28 = 2;
        std::vector<AttributeRange>::_Ufill(v24, v25, v27);
        *(_DWORD *)(this + 8) += 20 * a4;
        return sub_100A1C50(a3, *(_DWORD *)(this + 8) - 20 * a4, v27);
      }
    }
    else
    {
      if ( 214748364 - (v11 >> 1) >= v11 )
        v14 = (v11 >> 1) + v11;
      else
        v14 = 0;
      if ( v10 )
        v15 = (*(_DWORD *)(this + 8) - v10) / 20;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
        v14 = a4 + std::vector<AttributeRange>::size(this);
      v30 = (char *)sub_1006C4D0(v14);
      v23 = *(_DWORD *)(this + 4);
      v28 = 0;
      v16 = (_DWORD *)sub_100A1CD0(v23, a3, v30);
      v17 = std::vector<AttributeRange>::_Ufill(v16, a4, v27);
      sub_100A1CD0(a3, *(_DWORD *)(this + 8), v17);
      v18 = *(_DWORD *)(this + 4);
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - v18) / 20;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        operator delete(*(void **)(this + 4));
      result = (int)v30;
      *(_DWORD *)(this + 12) = &v30[20 * v14];
      *(_DWORD *)(this + 8) = &v30[20 * v20];
      *(_DWORD *)(this + 4) = v30;
    }
  }
  return result;
}
