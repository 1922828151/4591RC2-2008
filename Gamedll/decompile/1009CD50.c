/*
 * func-name: sub_1009CD50
 * func-address: 0x1009cd50
 * callers: 0x1000dd0f
 * callees: 0x10003634, 0x102c9d98
 */

Effect_TraceLineSystem *__stdcall sub_1009CD50(struct World *a1)
{
  Effect_TraceLineSystem *v1; // eax

  v1 = (Effect_TraceLineSystem *)operator new(0x4D0u);
  if ( v1 )
    return Effect_TraceLineSystem::Effect_TraceLineSystem(v1, a1);
  else
    return 0;
}
