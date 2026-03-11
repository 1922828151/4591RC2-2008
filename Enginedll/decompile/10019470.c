/*
 * func-name: ??A?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QBEABQAVModel@@I@Z
 * func-address: 0x10019470
 * callers: 0x10055990, 0x1005b6b0, 0x1005cb50, 0x10088cd0, 0x1008c3e0, 0x1008ce00, 0x100ae4a0, 0x100c2500, 0x100c2cc0, 0x100c46c0, 0x100c5fd0, 0x100c95f0, 0x100d64b0, 0x100e1e90, 0x100e4db0, 0x100efe90, 0x100f04f0, 0x10116ff0, 0x10139150, 0x10143e00, 0x101484b0, 0x10152470, 0x10152c10, 0x10153480, 0x101611e0, 0x10162ce0
 * callees: none
 */

int __thiscall std::vector<Model *>::operator[](_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 2 )
    invalid_parameter_noinfo();
  return this[1] + 4 * a2;
}
