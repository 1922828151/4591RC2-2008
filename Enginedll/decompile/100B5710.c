/*
 * func-name: ?RemoveTexture@CREDialog@@QAEXI@Z
 * func-address: 0x100b5710
 * callers: 0x100bf690, 0x100c3910
 * callees: 0x100a9980, 0x100b5280
 */

void __thiscall CREDialog::RemoveTexture(CREDialog *this, signed int a2)
{
  CREDialogResourceManager *v3; // eax
  int v4; // [esp-4h] [ebp-Ch]

  if ( (unsigned int)a2 < *((_DWORD *)this + 186) && *(_DWORD *)(*((_DWORD *)this + 185) + 4 * a2) != -1 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 185) + 4 * a2);
    v3 = REGetGlobalDialogResourceManager();
    CREDialogResourceManager::RemoveTexture(v3, v4);
    if ( a2 >= 0 && a2 < *((_DWORD *)this + 186) )
      *(_DWORD *)(*((_DWORD *)this + 185) + 4 * a2) = -1;
  }
}
