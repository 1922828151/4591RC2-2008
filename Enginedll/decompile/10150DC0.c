/*
 * func-name: ??1CPaster@@UAE@XZ
 * func-address: 0x10150dc0
 * callers: 0x100a2e60
 * callees: 0x100c7390, 0x101a2500
 */

void __thiscall CPaster::~CPaster(CPaster *this)
{
  void *v2; // eax

  *(_DWORD *)this = &CPaster::`vftable';
  v2 = (void *)*((_DWORD *)this + 133);
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 133) = 0;
  }
  if ( *((_DWORD *)this + 134) )
  {
    operator delete(*((void **)this + 134));
    *((_DWORD *)this + 134) = 0;
  }
  if ( *((_DWORD *)this + 135) )
  {
    operator delete(*((void **)this + 135));
    *((_DWORD *)this + 135) = 0;
  }
  std::wstring::~wstring((char *)this + 636);
  std::wstring::~wstring((char *)this + 592);
  std::wstring::~wstring((char *)this + 548);
  CREControl::~CREControl(this);
}
