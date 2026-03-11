/*
 * func-name: ?SetToBottom@CTYDialog@@QAEXXZ
 * func-address: 0x100a7a00
 * callers: none
 * callees: 0x100d6d20
 */

void __thiscall CTYDialog::SetToBottom(CTYDialog *this)
{
  struct GUISystem *v2; // eax
  int v3; // esi
  struct GUISystem *v4; // eax

  v2 = GUISystem::Instance();
  v3 = (*(int (__thiscall **)(struct GUISystem *, CTYDialog *))(*(_DWORD *)v2 + 76))(v2, this);
  if ( v3 )
  {
    v4 = GUISystem::Instance();
    (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v4 + 64))(v4, v3);
  }
}
