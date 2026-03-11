/*
 * func-name: ?erase@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QAE?AV?$_Vector_iterator@PAVModel@@V?$allocator@PAVModel@@@std@@@2@V32@0@Z
 * func-address: 0x100a1d10
 * callers: 0x10005230, 0x100085f0, 0x10008c60, 0x10012400, 0x10012840, 0x1001fde0, 0x1002aac0, 0x1002aba0, 0x1002ac80, 0x1002adf0, 0x1002aed0, 0x1002b040, 0x1002b120, 0x1002b290, 0x1002b370, 0x1002b4e0, 0x1002b5c0, 0x1002b6a0, 0x1002c930, 0x1003af90, 0x100477a0, 0x10055500, 0x100566a0, 0x10057ee0, 0x10059bd0, 0x10059d20, 0x1005a150, 0x1006db60, 0x1006dbf0, 0x100a1da0, 0x100c5d60, 0x100dca50, 0x100df380, 0x100e8100, 0x100e81c0, 0x100eef10, 0x100f6560, 0x10103770, 0x1010a350, 0x1011f7a0, 0x1011f860, 0x1012b890, 0x1013f070, 0x1013f550, 0x1013f610, 0x10161790, 0x1016b010, 0x1016b160, 0x1016b220, 0x1016b8e0
 * callees: none
 */

_DWORD *__thiscall std::vector<Model *>::erase(
        _DWORD *this,
        _DWORD *a2,
        int a3,
        char *Destination,
        int a5,
        char *Source)
{
  int v7; // eax
  char *v8; // ebx
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( Destination != Source )
  {
    v7 = (this[2] - (int)Source) >> 2;
    v8 = &Destination[4 * v7];
    if ( v7 > 0 )
      memmove_s(Destination, 4 * v7, Source, 4 * v7);
    this[2] = v8;
  }
  result = a2;
  a2[1] = Destination;
  *a2 = a3;
  return result;
}
