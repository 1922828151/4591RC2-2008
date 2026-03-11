/*
 * func-name: ?GetTextureNode@CREDialogResourceManager@@QAEPAURETextureNode@@H@Z
 * func-address: 0x1006c830
 * callers: none
 * callees: none
 */

struct RETextureNode *__thiscall CREDialogResourceManager::GetTextureNode(CREDialogResourceManager *this, int a2)
{
  return *(struct RETextureNode **)(*((_DWORD *)this + 2) + 4 * a2);
}
