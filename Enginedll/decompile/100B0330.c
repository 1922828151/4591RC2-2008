/*
 * func-name: ?ResetFont@CREDialogResourceManager@@QAEXHM@Z
 * func-address: 0x100b0330
 * callers: none
 * callees: 0x100a9db0
 */

void __thiscall CREDialogResourceManager::ResetFont(CREDialogResourceManager *this, unsigned int a2, float a3)
{
  CREDialogResourceManager::CreateFontW(this, a2, a3);
}
