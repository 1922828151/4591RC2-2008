/*
 * func-name: ?GetProgressPic@CProgressBar@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ
 * func-address: 0x10150470
 * callers: none
 * callees: 0x100b5820
 */

int __thiscall CProgressBar::GetProgressPic(int this, int a2)
{
  unsigned int *v2; // eax
  struct RETextureNode *Texture; // eax

  v2 = *(unsigned int **)(this + 700);
  if ( v2 && (Texture = CREDialog::GetTexture(*(CREDialog **)(this + 112), *v2)) != 0 )
  {
    std::wstring::wstring(a2, Texture);
    return a2;
  }
  else
  {
    std::wstring::wstring(a2, &unk_101CD480);
    return a2;
  }
}
