/*
 * func-name: ??1CProgressBar@@UAE@XZ
 * func-address: 0x101500f0
 * callers: 0x100a2a30
 * callees: 0x10069fa0, 0x10109eb0, 0x101a2500
 */

void __thiscall CProgressBar::~CProgressBar(CProgressBar *this)
{
  void *v2; // eax

  *(_DWORD *)this = &CProgressBar::`vftable';
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
  if ( *((_DWORD *)this + 183) )
    Precacher::PurgeSound((struct Sound **)this + 183);
  CREStatic::~CREStatic(this);
}
