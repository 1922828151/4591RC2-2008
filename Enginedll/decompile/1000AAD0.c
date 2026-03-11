/*
 * func-name: ?Tick@FXSystem@@UAEXXZ
 * func-address: 0x1000aad0
 * callers: none
 * callees: none
 */

void __thiscall FXSystem::Tick(FXSystem *this)
{
  float v1; // [esp+0h] [ebp-Ch]
  float v2; // [esp+4h] [ebp-8h]
  float v3; // [esp+8h] [ebp-4h]

  v1 = *((float *)this + 8) * GDeltaTime;
  v2 = *((float *)this + 9) * GDeltaTime;
  v3 = GDeltaTime * *((float *)this + 10);
  *((float *)this + 5) = *((float *)this + 5) + v1;
  *((float *)this + 6) = *((float *)this + 6) + v2;
  *((float *)this + 7) = *((float *)this + 7) + v3;
}
