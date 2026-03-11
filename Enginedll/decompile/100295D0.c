/*
 * func-name: ??1Mesh@@UAE@XZ
 * func-address: 0x100295d0
 * callers: 0x10029900
 * callees: 0x1000cc00, 0x100203c0, 0x10029240, 0x1017a0b0, 0x101a2500
 */

void __thiscall Mesh::~Mesh(Mesh *this)
{
  void *v2; // eax
  int v3; // eax

  *(_DWORD *)this = &Mesh::`vftable';
  v2 = (void *)*((_DWORD *)this + 620);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 620) = 0;
  *((_DWORD *)this + 621) = 0;
  *((_DWORD *)this + 622) = 0;
  if ( *((_DWORD *)this + 616) )
    operator delete(*((void **)this + 616));
  *((_DWORD *)this + 616) = 0;
  *((_DWORD *)this + 617) = 0;
  *((_DWORD *)this + 618) = 0;
  sub_1017A0B0((char *)this + 2420);
  PRTSettings::~PRTSettings((Mesh *)((char *)this + 120));
  v3 = *((_DWORD *)this + 18);
  if ( v3 )
  {
    sub_1000CC00(v3, *((_DWORD *)this + 19));
    operator delete(*((void **)this + 18));
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  std::vector<BBox>::_Tidy((int)this + 52);
  if ( *((_DWORD *)this + 10) )
    operator delete(*((void **)this + 10));
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
}
