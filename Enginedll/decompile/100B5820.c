/*
 * func-name: ?GetTexture@CREDialog@@QAEPAURETextureNode@@I@Z
 * func-address: 0x100b5820
 * callers: 0x100bb130, 0x100bf9b0, 0x100c0ad0, 0x100c14d0, 0x100c33b0, 0x100c4500, 0x10150260, 0x10150470, 0x10150580, 0x10150600, 0x101507a0, 0x10151200, 0x10151350, 0x101514a0, 0x10153f50, 0x101543d0, 0x10155030, 0x10156140
 * callees: 0x100b5280
 */

struct RETextureNode *__thiscall CREDialog::GetTexture(CREDialog *this, unsigned int a2)
{
  struct RETextureNode *result; // eax
  int v4; // esi

  result = REGetGlobalDialogResourceManager();
  if ( result )
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 185) + 4 * a2);
    return *(struct RETextureNode **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v4);
  }
  return result;
}
