/*
 * func-name: ?DeserializationComplete@Effect_Precipitation@@UAEXXZ_0
 * func-address: 0x10093330
 * callers: 0x1000e660
 * callees: 0x10008080
 */

void __thiscall Effect_Precipitation::DeserializationComplete(Effect_Precipitation *this)
{
  void *v2; // eax
  _DWORD v3[9]; // [esp-1Ch] [ebp-24h] BYREF

  Effect_ParticleSystem::DeserializationComplete(this);
  v2 = (void *)(*((_DWORD *)this + 350) + 100);
  v3[8] = v3;
  std::string::string(v3, v2);
  Precacher::UpdateTexture(*((_DWORD *)this + 350));
}
