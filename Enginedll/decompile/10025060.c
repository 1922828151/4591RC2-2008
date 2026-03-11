/*
 * func-name: ?_Construct_n@?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@QAEXIABQAVMaterial@@@Z
 * func-address: 0x10025060
 * callers: 0x1002b550, 0x1002b580, 0x1002b5a0
 * callees: 0x1000a1e0, 0x100dd410
 */

void __thiscall std::vector<Material *>::_Construct_n(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // edx

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFF )
      std::vector<Material *>::_Xlen();
    v4 = (_DWORD *)sub_100DD410(a2);
    this[3] = &v4[a2];
    this[1] = v4;
    this[2] = v4;
    v5 = a2;
    v6 = v4;
    do
    {
      *v6 = *a3;
      --v5;
      ++v6;
    }
    while ( v5 );
    this[2] = &v4[a2];
  }
}
