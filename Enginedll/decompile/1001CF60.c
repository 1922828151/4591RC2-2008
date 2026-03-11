/*
 * func-name: ?at@?$vector@PAVEditorVar@@V?$allocator@PAVEditorVar@@@std@@@std@@QBEABQAVEditorVar@@I@Z
 * func-address: 0x1001cf60
 * callers: none
 * callees: 0x10019ac0
 */

unsigned int __thiscall std::vector<EditorVar *>::at(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // esi

  v3 = this[1];
  if ( !v3 || (v4 = this[2], (int)(this[2] - v3) >> 2 <= a2) )
    std::vector<EditorVar *>::_Xran();
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  v5 = v3 + 4 * a2;
  if ( v5 > this[2] || v5 < this[1] )
    invalid_parameter_noinfo();
  if ( v5 >= this[2] )
    invalid_parameter_noinfo();
  return v5;
}
