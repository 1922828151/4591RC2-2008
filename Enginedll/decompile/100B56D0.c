/*
 * func-name: ?AddTexture@CREDialog@@UAEHPB_W@Z
 * func-address: 0x100b56d0
 * callers: none
 * callees: 0x100af9f0, 0x100b5280, 0x100ce8d0
 */

int __thiscall CREDialog::AddTexture(CREDialog *this, wchar_t *String2)
{
  CREDialogResourceManager *v3; // eax
  const wchar_t *v4; // eax
  int v5; // edi
  wchar_t *v7; // [esp-4h] [ebp-Ch]

  v7 = String2;
  v3 = REGetGlobalDialogResourceManager();
  v4 = (const wchar_t *)CREDialogResourceManager::AddTexture(v3, v7);
  v5 = *((_DWORD *)this + 186);
  String2 = (wchar_t *)v4;
  sub_100CE8D0(v5, &String2);
  return v5;
}
