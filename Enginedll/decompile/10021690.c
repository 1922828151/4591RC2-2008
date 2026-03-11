/*
 * func-name: ?pop_back@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXXZ
 * func-address: 0x10021690
 * callers: none
 * callees: none
 */

int __thiscall std::vector<BBox>::pop_back(_DWORD *this)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD, _DWORD); // edi
  int (__thiscall ***v4)(_DWORD, _DWORD); // esi

  result = this[1];
  if ( result )
  {
    v3 = (int (__thiscall ***)(_DWORD, _DWORD))this[2];
    result = ((int)v3 - result) / 40;
    if ( result )
    {
      v4 = v3 - 10;
      do
      {
        result = (**v4)(v4, 0);
        v4 += 10;
      }
      while ( v4 != v3 );
      this[2] -= 40;
    }
  }
  return result;
}
