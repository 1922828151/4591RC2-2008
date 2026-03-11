/*
 * func-name: ?swap@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXAAV12@@Z
 * func-address: 0x10021210
 * callers: none
 * callees: none
 */

_DWORD *__thiscall std::vector<EditorVar>::swap(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx

  result = a2;
  v3 = this[1];
  this[1] = a2[1];
  a2[1] = v3;
  v4 = this[2];
  this[2] = a2[2];
  a2[2] = v4;
  v5 = this[3];
  this[3] = a2[3];
  a2[3] = v5;
  return result;
}
