/*
 * func-name: ?push_back@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXABVBBox@@@Z
 * func-address: 0x1002ed40
 * callers: 0x1009f270
 * callees: 0x1001ecd0, 0x1002b8c0
 */

void __thiscall std::vector<BBox>::push_back(int *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 40;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 40 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v7) = 0;
    sub_1001ECD0(v5, 1, a2);
    this[2] = (int)(v5 + 10);
  }
  else
  {
    v6 = this[2];
    if ( v3 > v6 )
      invalid_parameter_noinfo();
    std::vector<BBox>::insert(this, (int **)&v7, this, v6, a2);
  }
}
