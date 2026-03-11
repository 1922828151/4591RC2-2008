/*
 * func-name: ?BringToTop@CTYDialog@@QAEXXZ
 * func-address: 0x100a79d0
 * callers: 0x10150d40
 * callees: 0x100d6d20
 */

void __thiscall CTYDialog::BringToTop(CTYDialog *this)
{
  struct GUISystem *v2; // eax
  int v3; // esi
  struct GUISystem *v4; // eax

  v2 = GUISystem::Instance();
  v3 = (*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v2 + 76))(v2, this);
  if ( v3 )
  {
    v4 = GUISystem::Instance();
    (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v4 + 60))(v4, v3);
  }
}
