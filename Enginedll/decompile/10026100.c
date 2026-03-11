/*
 * func-name: ?_Assign_n@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@IAEXIABUAttributeRange@@@Z
 * func-address: 0x10026100
 * callers: 0x1002bfb0
 * callees: 0x10022540, 0x1006d030
 */

int __thiscall std::vector<AttributeRange>::_Assign_n(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  int v3; // edx
  unsigned int v5; // edi
  bool v6; // cc
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  _DWORD v13[5]; // [esp+Ch] [ebp-14h] BYREF

  v3 = a3[1];
  v5 = this[2];
  v6 = this[1] <= v5;
  v13[0] = *a3;
  v7 = a3[2];
  v13[1] = v3;
  v8 = a3[3];
  v9 = a3[4];
  v13[2] = v7;
  v13[3] = v8;
  v13[4] = v9;
  if ( !v6 )
    invalid_parameter_noinfo();
  v10 = this[1];
  if ( v10 > this[2] )
    invalid_parameter_noinfo();
  if ( v10 != v5 )
    this[2] = sub_1006D030(v5, this[2], v10);
  v11 = this[1];
  if ( v11 > this[2] )
    invalid_parameter_noinfo();
  return std::vector<AttributeRange>::_Insert_n((int)this, (int)this, v11, a2, v13);
}
