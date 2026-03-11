/*
 * func-name: sub_101371E0
 * func-address: 0x101371e0
 * callers: 0x1000f745
 * callees: 0x10013b4c, 0x102c9d98
 */

HookEsbStore *__stdcall sub_101371E0(struct World *a1)
{
  HookEsbStore *v1; // eax

  v1 = (HookEsbStore *)operator new(0x474u);
  if ( v1 )
    return HookEsbStore::HookEsbStore(v1, a1);
  else
    return 0;
}
