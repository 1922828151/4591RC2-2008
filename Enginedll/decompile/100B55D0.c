/*
 * func-name: ?GetFont@CREDialog@@QAEPAUREFontNode@@I@Z
 * func-address: 0x100b55d0
 * callers: 0x100bdfc0, 0x100be440, 0x100c0490, 0x100c0c50, 0x100c21a0, 0x100c3250, 0x100c33b0, 0x100c5fd0, 0x100c8fd0, 0x10154210, 0x10154c10, 0x10156140, 0x10157440, 0x10157630, 0x10157870
 * callees: 0x100b5280
 */

struct REFontNode *__thiscall CREDialog::GetFont(CREDialog *this, unsigned int a2)
{
  struct REFontNode *result; // eax
  int v4; // esi

  result = REGetGlobalDialogResourceManager();
  if ( result )
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 188) + 4 * a2);
    return *(struct REFontNode **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v4);
  }
  return result;
}
