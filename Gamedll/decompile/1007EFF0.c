/*
 * func-name: sub_1007EFF0
 * func-address: 0x1007eff0
 * callers: 0x10007cfc
 * callees: 0x1001aa87, 0x102c9d98
 */

Effect_Base *__stdcall sub_1007EFF0(struct World *a1)
{
  Effect_Base *v1; // eax

  v1 = (Effect_Base *)operator new(0x470u);
  if ( v1 )
    return Effect_Base::Effect_Base(v1, a1);
  else
    return 0;
}
