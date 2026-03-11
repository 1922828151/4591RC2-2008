/*
 * func-name: ??0Effect_Precipitation@@QAE@ABV0@@Z_0
 * func-address: 0x100965d0
 * callers: 0x10009093
 * callees: 0x1000e403, 0x1000e7aa
 */

Effect_Precipitation *__thiscall Effect_Precipitation::Effect_Precipitation(
        Effect_Precipitation *this,
        const struct Effect_Precipitation *a2)
{
  Effect_Precipitation *result; // eax

  Effect_ParticleSystem::Effect_ParticleSystem(this, a2);
  *(_DWORD *)this = &Effect_Precipitation::`vftable';
  sub_1000E7AA((int)a2 + 1280);
  *((_DWORD *)this + 324) = *((_DWORD *)a2 + 324);
  std::string::string((char *)this + 1300, (char *)a2 + 1300);
  std::string::string((char *)this + 1328, (char *)a2 + 1328);
  *((_BYTE *)this + 1356) = *((_BYTE *)a2 + 1356);
  *((float *)this + 340) = *((float *)a2 + 340);
  *((_DWORD *)this + 341) = *((_DWORD *)a2 + 341);
  *((_BYTE *)this + 1368) = *((_BYTE *)a2 + 1368);
  *((float *)this + 343) = *((float *)a2 + 343);
  *((float *)this + 344) = *((float *)a2 + 344);
  *((_DWORD *)this + 345) = *((_DWORD *)a2 + 345);
  *((_DWORD *)this + 346) = *((_DWORD *)a2 + 346);
  *((_DWORD *)this + 347) = *((_DWORD *)a2 + 347);
  *((float *)this + 348) = *((float *)a2 + 348);
  *((_DWORD *)this + 349) = *((_DWORD *)a2 + 349);
  *((_DWORD *)this + 350) = *((_DWORD *)a2 + 350);
  *((_BYTE *)this + 1404) = *((_BYTE *)a2 + 1404);
  result = this;
  *((float *)this + 352) = *((float *)a2 + 352);
  *((float *)this + 353) = *((float *)a2 + 353);
  return result;
}
