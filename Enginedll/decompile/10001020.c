/*
 * func-name: ?RegisterWithHash@FXSystem@@QAEXXZ
 * func-address: 0x10001020
 * callers: none
 * callees: 0x100a01c0, 0x100a1210
 */

void __thiscall FXSystem::RegisterWithHash(FXSystem *this)
{
  FXManager *v1; // eax

  v1 = FXManager::Instance();
  FXManager::AddFXSystemToHash(v1, this);
}
