/*
 * func-name: ??1Model@@UAE@XZ
 * func-address: 0x1002ffd0
 * callers: 0x10030090, 0x1005ddc0, 0x1012fc10, 0x1012ffd0
 * callees: 0x100901e0, 0x100ef850, 0x101a2500
 */

void __thiscall Model::~Model(Model *this)
{
  void *v2; // eax

  *(_DWORD *)this = &Model::`vftable';
  v2 = (void *)*((_DWORD *)this + 107);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  sub_100901E0((char *)this + 412);
  operator delete(*((void **)this + 104));
  *((_DWORD *)this + 104) = 0;
  if ( *((_DWORD *)this + 96) )
    operator delete(*((void **)this + 96));
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  StaticModel::~StaticModel(this);
}
