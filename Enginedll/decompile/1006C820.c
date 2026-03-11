/*
 * func-name: ?GetFontNode@CREDialogResourceManager@@QAEPAUREFontNode@@H@Z
 * func-address: 0x1006c820
 * callers: none
 * callees: none
 */

struct REFontNode *__thiscall CREDialogResourceManager::GetFontNode(CREDialogResourceManager *this, int a2)
{
  return *(struct REFontNode **)(*((_DWORD *)this + 5) + 4 * a2);
}
