/*
 * func-name: ??1StaticModel@@UAE@XZ
 * func-address: 0x100ef850
 * callers: 0x100179b0, 0x1002ffd0, 0x10031290, 0x100f2ca0
 * callees: 0x1000db00, 0x100ef290, 0x1017a0b0, 0x101a2500
 */

void __thiscall StaticModel::~StaticModel(StaticModel *this)
{
  *(_DWORD *)this = &StaticModel::`vftable';
  StaticModel::Destroy(this);
  std::string::~string((char *)this + 348);
  std::string::~string((char *)this + 320);
  if ( *((_DWORD *)this + 73) )
    operator delete(*((void **)this + 73));
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  if ( *((_DWORD *)this + 31) )
    operator delete(*((void **)this + 31));
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  sub_1000DB00((int *)this + 26);
  sub_1017A0B0((char *)this + 60);
  sub_1017A0B0((char *)this + 12);
}
