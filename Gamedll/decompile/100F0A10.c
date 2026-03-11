/*
 * func-name: ?Initialize@HUDSystem@@QAEXXZ_0
 * func-address: 0x100f0a10
 * callers: 0x1001abcc
 * callees: 0x1000d12f, 0x102c9d98
 */

void __thiscall HUDSystem::Initialize(HUDSystem *this)
{
  int v1; // [esp+0h] [ebp-14h]
  void *v2; // [esp+4h] [ebp-10h]

  v2 = operator new(0xCu);
  if ( v2 )
    sub_1000D12F(v1, (int)v2);
}
