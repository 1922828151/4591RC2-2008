/*
 * func-name: ??0SkyController@@QAE@ABV0@@Z
 * func-address: 0x1005ddc0
 * callers: none
 * callees: 0x10029dd0, 0x10031290, 0x1005b2d0, 0x1005b360, 0x101a27ab
 */

SkyController *__thiscall SkyController::SkyController(SkyController *this, const struct SkyController *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SkyController::`vftable';
  *((_BYTE *)this + 1052) = *((_BYTE *)a2 + 1052);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  qmemcpy((char *)this + 1064, (char *)a2 + 1064, 0xA1u);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 309);
  *((_DWORD *)this + 310) = *((_DWORD *)a2 + 310);
  sub_1005B2D0((_DWORD *)this + 311, (int)a2 + 1244);
  sub_1005B360((_DWORD *)this + 314, (int)a2 + 1256);
  sub_1005B360((_DWORD *)this + 317, (int)a2 + 1268);
  sub_1005B360((_DWORD *)this + 320, (int)a2 + 1280);
  sub_1005B2D0((_DWORD *)this + 323, (int)a2 + 1292);
  sub_1005B360((_DWORD *)this + 326, (int)a2 + 1304);
  sub_1005B360((_DWORD *)this + 329, (int)a2 + 1316);
  *((_BYTE *)this + 1328) = *((_BYTE *)a2 + 1328);
  Model::Model((SkyController *)((char *)this + 1332), (const struct SkyController *)((char *)a2 + 1332));
  *((_DWORD *)this + 447) = *((_DWORD *)a2 + 447);
  *((_DWORD *)this + 448) = *((_DWORD *)a2 + 448);
  *((_DWORD *)this + 449) = *((_DWORD *)a2 + 449);
  `eh vector copy constructor iterator'(
    (char *)this + 1800,
    (char *)a2 + 1800,
    0x9Cu,
    4,
    (void (__thiscall *)(void *, void *))Texture::Texture,
    (void (__thiscall *)(void *))Texture::~Texture);
  `eh vector copy constructor iterator'(
    (char *)this + 2424,
    (char *)a2 + 2424,
    0x118u,
    4,
    (void (__thiscall *)(void *, void *))ShaderVar::ShaderVar,
    (void (__thiscall *)(void *))ShaderVar::~ShaderVar);
  *((_DWORD *)this + 886) = *((_DWORD *)a2 + 886);
  *((_DWORD *)this + 887) = *((_DWORD *)a2 + 887);
  *((_DWORD *)this + 888) = *((_DWORD *)a2 + 888);
  *((_DWORD *)this + 889) = *((_DWORD *)a2 + 889);
  *((_DWORD *)this + 890) = *((_DWORD *)a2 + 890);
  *((_DWORD *)this + 891) = *((_DWORD *)a2 + 891);
  *((_DWORD *)this + 892) = *((_DWORD *)a2 + 892);
  *((_DWORD *)this + 893) = *((_DWORD *)a2 + 893);
  qmemcpy((char *)this + 3576, (char *)a2 + 3576, 0x48u);
  qmemcpy((char *)this + 3648, (char *)a2 + 3648, 0x4Du);
  *((float *)this + 932) = *((float *)a2 + 932);
  *((float *)this + 933) = *((float *)a2 + 933);
  *((float *)this + 934) = *((float *)a2 + 934);
  *((float *)this + 935) = *((float *)a2 + 935);
  *((float *)this + 936) = *((float *)a2 + 936);
  *((float *)this + 937) = *((float *)a2 + 937);
  *((float *)this + 938) = *((float *)a2 + 938);
  *((float *)this + 939) = *((float *)a2 + 939);
  *((float *)this + 940) = *((float *)a2 + 940);
  *((float *)this + 941) = *((float *)a2 + 941);
  *((float *)this + 942) = *((float *)a2 + 942);
  *((float *)this + 943) = *((float *)a2 + 943);
  *((float *)this + 944) = *((float *)a2 + 944);
  *((float *)this + 945) = *((float *)a2 + 945);
  *((float *)this + 946) = *((float *)a2 + 946);
  *((float *)this + 947) = *((float *)a2 + 947);
  *((float *)this + 948) = *((float *)a2 + 948);
  qmemcpy((char *)this + 3796, (char *)a2 + 3796, 0x24u);
  qmemcpy((char *)this + 3832, (char *)a2 + 3832, 0x250u);
  return this;
}
