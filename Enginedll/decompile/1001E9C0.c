/*
 * func-name: ?erase@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QAE?AV?$_Vector_iterator@PAVModel@@V?$allocator@PAVModel@@@std@@@2@V32@@Z
 * func-address: 0x1001e9c0
 * callers: 0x1001fd50, 0x10055990, 0x100b49b0, 0x100b4e90, 0x100c6a80, 0x10155480
 * callees: none
 */

_DWORD *__thiscall std::vector<Model *>::erase(_DWORD *this, _DWORD *a2, int a3, char *Destination)
{
  int v5; // eax
  _DWORD *result; // eax

  v5 = (this[2] - (int)(Destination + 4)) >> 2;
  if ( v5 > 0 )
    memmove_s(Destination, 4 * v5, Destination + 4, 4 * v5);
  result = a2;
  this[2] -= 4;
  a2[1] = Destination;
  *a2 = a3;
  return result;
}
