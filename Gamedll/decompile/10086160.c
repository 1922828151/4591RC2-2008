/*
 * func-name: ??0ParticleSystem@@QAE@ABV0@@Z_0
 * func-address: 0x10086160
 * callers: 0x1001a933
 * callees: 0x10007d92
 */

ParticleSystem *__thiscall ParticleSystem::ParticleSystem(ParticleSystem *this, const struct ParticleSystem *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &ParticleSystem::`vftable';
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  sub_10007D92((int)a2 + 188);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((float *)this + 52) = *((float *)a2 + 52);
  *((_BYTE *)this + 212) = *((_BYTE *)a2 + 212);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_BYTE *)this + 220) = *((_BYTE *)a2 + 220);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((float *)this + 57) = *((float *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((float *)this + 61) = *((float *)a2 + 61);
  *((float *)this + 62) = *((float *)a2 + 62);
  *((float *)this + 63) = *((float *)a2 + 63);
  *((float *)this + 64) = *((float *)a2 + 64);
  *((float *)this + 65) = *((float *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((float *)this + 69) = *((float *)a2 + 69);
  *((float *)this + 70) = *((float *)a2 + 70);
  *((float *)this + 71) = *((float *)a2 + 71);
  *((float *)this + 72) = *((float *)a2 + 72);
  *((float *)this + 73) = *((float *)a2 + 73);
  *((float *)this + 74) = *((float *)a2 + 74);
  *((float *)this + 75) = *((float *)a2 + 75);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((_BYTE *)this + 316) = *((_BYTE *)a2 + 316);
  *((_BYTE *)this + 317) = *((_BYTE *)a2 + 317);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((float *)this + 81) = *((float *)a2 + 81);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_BYTE *)this + 332) = *((_BYTE *)a2 + 332);
  *((float *)this + 84) = *((float *)a2 + 84);
  *((_BYTE *)this + 340) = *((_BYTE *)a2 + 340);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 86);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 88);
  return this;
}
