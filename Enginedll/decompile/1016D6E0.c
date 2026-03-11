/*
 * func-name: sub_1016D6E0
 * func-address: 0x1016d6e0
 * callers: 0x1006c7d0, 0x10074d60, 0x1016e550, 0x1016e600
 * callees: 0x10118a60
 */

void __thiscall sub_1016D6E0(RenderBase *this)
{
  int v2; // eax
  int v3; // eax

  *(_DWORD *)this = &TCameraFrame::`vftable';
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 6) = 0;
  }
  v3 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 7));
    *((_DWORD *)this + 7) = 0;
  }
  RenderBase::~RenderBase(this);
}
