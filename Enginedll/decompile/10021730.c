/*
 * func-name: ?erase@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAE?AV?$_Vector_iterator@VBBox@@V?$allocator@VBBox@@@std@@@2@V32@0@Z
 * func-address: 0x10021730
 * callers: 0x100217a0, 0x1002b7b0, 0x1002b990, 0x1012fc10
 * callees: 0x1001eab0
 */

_DWORD *__thiscall std::vector<BBox>::erase(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  void (__thiscall ***v10)(_DWORD, _DWORD); // edi
  int v11; // ebx
  void (__thiscall ***i)(_DWORD, _DWORD); // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1001EAB0(a6, this[2], a4);
    v10 = (void (__thiscall ***)(_DWORD, _DWORD))this[2];
    v11 = v9;
    for ( i = (void (__thiscall ***)(_DWORD, _DWORD))v9; i != v10; i += 10 )
      (**i)(i, 0);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
