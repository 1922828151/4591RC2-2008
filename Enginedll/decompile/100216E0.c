/*
 * func-name: ?erase@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAE?AV?$_Vector_iterator@VBBox@@V?$allocator@VBBox@@@std@@@2@V32@@Z
 * func-address: 0x100216e0
 * callers: none
 * callees: 0x1001eab0
 */

_DWORD *__thiscall std::vector<BBox>::erase(int *this, _DWORD *a2, int a3, int a4)
{
  void (__thiscall ***v5)(_DWORD, _DWORD); // edi
  void (__thiscall ***v6)(_DWORD, _DWORD); // esi
  _DWORD *result; // eax

  sub_1001EAB0(a4 + 40, this[2], a4);
  v5 = (void (__thiscall ***)(_DWORD, _DWORD))this[2];
  v6 = v5 - 10;
  do
  {
    (**v6)(v6, 0);
    v6 += 10;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 40;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
