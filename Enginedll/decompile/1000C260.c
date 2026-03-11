/*
 * func-name: ?_Buy@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@IAE_NI@Z
 * func-address: 0x1000c260
 * callers: 0x1002bc70
 * callees: 0x1000a2a0, 0x1000a7e0
 */

char __thiscall std::vector<EditorVar>::_Buy(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x2AAAAAA )
    std::vector<EditorVar>::_Xlen();
  v4 = (char *)sub_1000A7E0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[96 * a2];
  return 1;
}
