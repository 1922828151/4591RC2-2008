/*
 * func-name: ?_Assign_n@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@IAEXIABVBBox@@@Z
 * func-address: 0x1002b990
 * callers: 0x1002edf0
 * callees: 0x10021730, 0x10025440, 0x1017a0b0
 */

int __thiscall std::vector<BBox>::_Assign_n(int *this, unsigned int a2, _DWORD *a3)
{
  int v3; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  bool v13; // cf
  bool v14; // zf
  unsigned int v15; // ebx
  unsigned int v16; // edi
  int v18; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v19[10]; // [esp+14h] [ebp-34h] BYREF
  int v20; // [esp+44h] [ebp-4h]

  v3 = a3[2];
  v19[1] = a3[1];
  v5 = a3[3];
  v19[2] = v3;
  v6 = a3[4];
  v19[3] = v5;
  v7 = a3[5];
  v19[4] = v6;
  v8 = a3[6];
  v19[5] = v7;
  v9 = a3[7];
  v19[6] = v8;
  v10 = a3[8];
  v11 = a3[9];
  v19[0] = &BBox::`vftable';
  v19[7] = v9;
  v19[8] = v10;
  v19[9] = v11;
  v12 = this[2];
  v13 = this[1] < v12;
  v14 = this[1] == v12;
  v20 = 0;
  if ( !v13 && !v14 )
    invalid_parameter_noinfo();
  v15 = this[1];
  if ( v15 > this[2] )
    invalid_parameter_noinfo();
  std::vector<BBox>::erase(this, &v18, (int)this, v15, (int)this, v12);
  v16 = this[1];
  if ( v16 > this[2] )
    invalid_parameter_noinfo();
  std::vector<BBox>::_Insert_n(this, (int)this, v16, a2, v19);
  v20 = -1;
  return sub_1017A0B0(v19);
}
