/*
 * func-name: ?_Tidy@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@IAEXXZ
 * func-address: 0x1000f7e0
 * callers: 0x10006780, 0x100080a0, 0x10025760, 0x10025860, 0x10029240, 0x100292f0, 0x100295d0, 0x100296d0, 0x10029dd0, 0x1002e7f0, 0x100300f0, 0x10030270, 0x10050b80, 0x10050e70, 0x100511a0, 0x100e40e0, 0x100e42b0, 0x100e4420, 0x100e8d80, 0x1013a9b0, 0x1013df40
 * callees: 0x1000cc00, 0x101a2500
 */

void __thiscall std::vector<EditorVar>::_Tidy(int *this)
{
  int v2; // eax

  v2 = this[1];
  if ( v2 )
  {
    sub_1000CC00(v2, this[2]);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
