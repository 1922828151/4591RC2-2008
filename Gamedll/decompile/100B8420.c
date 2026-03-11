/*
 * func-name: ??0ParticleTrail@@QAE@ABV0@@Z_0
 * func-address: 0x100b8420
 * callers: 0x10010d4d
 * callees: 0x100056c8
 */

ParticleTrail *__thiscall ParticleTrail::ParticleTrail(ParticleTrail *this, const struct ParticleTrail *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &ParticleTrail::`vftable';
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  sub_100056C8((int)a2 + 184);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  std::vector<Material *>::vector<Material *>((char *)this + 204, (char *)a2 + 204);
  *((float *)this + 55) = *((float *)a2 + 55);
  *((float *)this + 56) = *((float *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_BYTE *)this + 232) = *((_BYTE *)a2 + 232);
  *((_DWORD *)this + 59) = &ObjectNodeList::`vftable';
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_BYTE *)this + 252) = *((_BYTE *)a2 + 252);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((float *)this + 65) = *((float *)a2 + 65);
  *((float *)this + 66) = *((float *)a2 + 66);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 70);
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((float *)this + 73) = *((float *)a2 + 73);
  *((float *)this + 74) = *((float *)a2 + 74);
  *((float *)this + 75) = *((float *)a2 + 75);
  *((float *)this + 76) = *((float *)a2 + 76);
  *((float *)this + 77) = *((float *)a2 + 77);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((float *)this + 79) = *((float *)a2 + 79);
  *((float *)this + 80) = *((float *)a2 + 80);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  *((float *)this + 84) = *((float *)a2 + 84);
  *((float *)this + 85) = *((float *)a2 + 85);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 86);
  *((float *)this + 87) = *((float *)a2 + 87);
  *((float *)this + 88) = *((float *)a2 + 88);
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  return this;
}
