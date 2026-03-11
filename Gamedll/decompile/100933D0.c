/*
 * func-name: ?Clone@Effect_Precipitation@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100933d0
 * callers: 0x100033cd
 * callees: 0x1000eb24
 */

void __thiscall Effect_Precipitation::Clone(Effect_Precipitation *this, struct Actor *a2, bool a3)
{
  Effect_ParticleSystem::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1356) = *((_BYTE *)this + 1356);
  *((float *)a2 + 340) = *((float *)this + 340);
  *((_DWORD *)a2 + 341) = *((_DWORD *)this + 341);
  *((_BYTE *)a2 + 1368) = *((_BYTE *)this + 1368);
  *((float *)a2 + 343) = *((float *)this + 343);
  *((float *)a2 + 344) = *((float *)this + 344);
  std::string::operator=((char *)a2 + 1300, (char *)this + 1300);
  std::string::operator=(*((_DWORD *)a2 + 350) + 100, *((_DWORD *)this + 350) + 100);
}
