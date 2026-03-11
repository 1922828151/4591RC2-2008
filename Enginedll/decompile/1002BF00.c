/*
 * func-name: ?push_back@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXABUAttributeRange@@@Z
 * func-address: 0x1002bf00
 * callers: 0x100eaad0, 0x100eb8b0, 0x1011b870, 0x1011d270
 * callees: 0x1001dde0, 0x10026030
 */

void __thiscall std::vector<AttributeRange>::push_back(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 20;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 20 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_1001DDE0(v5, 1, a2);
    this[2] = v5 + 5;
  }
  else
  {
    v6 = this[2];
    if ( v3 > v6 )
      invalid_parameter_noinfo();
    std::vector<AttributeRange>::insert(this, &v7, this, v6, a2);
  }
}
