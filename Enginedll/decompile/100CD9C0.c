/*
 * func-name: ??1CREListCtrl@@UAE@XZ
 * func-address: 0x100cd9c0
 * callers: 0x1006b520
 * callees: 0x10069fa0, 0x1006f9e0, 0x10075f50, 0x101a2500
 */

void __thiscall CREListCtrl::~CREListCtrl(CREListCtrl *this)
{
  void *v2; // eax
  int v3; // eax

  *(_DWORD *)this = &CREListCtrl::`vftable';
  v2 = (void *)*((_DWORD *)this + 174);
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 174) = 0;
  }
  if ( *((_DWORD *)this + 175) )
  {
    operator delete(*((void **)this + 175));
    *((_DWORD *)this + 175) = 0;
  }
  v3 = *((_DWORD *)this + 191);
  if ( v3 )
  {
    sub_10075F50(v3, *((_DWORD *)this + 192));
    operator delete(*((void **)this + 191));
  }
  *((_DWORD *)this + 191) = 0;
  *((_DWORD *)this + 192) = 0;
  *((_DWORD *)this + 193) = 0;
  sub_1006F9E0((int)this + 744);
  CREStatic::~CREStatic(this);
}
