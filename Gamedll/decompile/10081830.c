/*
 * func-name: ?StopSpawningNow@ParticleSystem@@UAEXXZ_0
 * func-address: 0x10081830
 * callers: 0x10008a85
 * callees: none
 */

void __thiscall ParticleSystem::StopSpawningNow(ParticleSystem *this)
{
  *((_BYTE *)this + 212) = 1;
}
