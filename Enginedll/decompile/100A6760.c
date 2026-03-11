/*
 * func-name: ?GetBGTextureFilename@CRETextBox@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x100a6760
 * callers: none
 * callees: none
 */

int __thiscall CRETextBox::GetBGTextureFilename(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[174];
  if ( v2 )
    std::string::string(a2, v2 + 100);
  else
    std::string::string(a2, &unk_101C4777);
  return a2;
}
