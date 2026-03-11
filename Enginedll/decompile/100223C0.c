/*
 * func-name: ?reserve@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXI@Z
 * func-address: 0x100223c0
 * callers: none
 * callees: 0x1001a060, 0x1006c4d0, 0x100a1cd0, 0x101a2500, 0x101a2522
 */

unsigned int __thiscall std::vector<AttributeRange>::reserve(unsigned int *this, unsigned int a2)
{
  unsigned int result; // eax
  void *v4; // eax
  unsigned int v5; // ebx
  bool v6; // cc
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // edi
  _BYTE v10[16]; // [esp+0h] [ebp-24h] BYREF
  void *v11; // [esp+10h] [ebp-14h]
  _BYTE *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v12 = v10;
  if ( a2 > 0xCCCCCCC )
    std::vector<AttributeRange>::_Xlen();
  result = this[1];
  if ( result )
    result = (int)(this[3] - result) / 20;
  if ( result < a2 )
  {
    v4 = (void *)sub_1006C4D0(a2);
    v5 = this[2];
    v6 = this[1] <= v5;
    v11 = v4;
    v13 = 0;
    if ( !v6 )
      invalid_parameter_noinfo();
    v7 = this[1];
    if ( v7 > this[2] )
      invalid_parameter_noinfo();
    v10[12] = 0;
    sub_100A1CD0(v7, v5, v11);
    v8 = this[1];
    if ( v8 )
      v9 = (int)(this[2] - v8) / 20;
    else
      v9 = 0;
    if ( v8 )
      operator delete((void *)this[1]);
    result = (unsigned int)v11;
    this[3] = (unsigned int)v11 + 20 * a2;
    this[2] = result + 20 * v9;
    this[1] = result;
  }
  return result;
}
