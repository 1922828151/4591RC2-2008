/*
 * func-name: sub_1029D200
 * func-address: 0x1029d200
 * callers: 0x10013d4f
 * callees: 0x102c9d50
 */

void __thiscall sub_1029D200(int this)
{
  *(_DWORD *)this = &CSystemConfigUI::`vftable';
  if ( *(_DWORD *)(this + 3948) )
    operator delete(*(void **)(this + 3948));
  *(_DWORD *)(this + 3948) = 0;
  *(_DWORD *)(this + 3952) = 0;
  *(_DWORD *)(this + 3956) = 0;
  if ( *(_DWORD *)(this + 3932) )
    operator delete(*(void **)(this + 3932));
  *(_DWORD *)(this + 3932) = 0;
  *(_DWORD *)(this + 3936) = 0;
  *(_DWORD *)(this + 3940) = 0;
  if ( *(_DWORD *)(this + 3916) )
    operator delete(*(void **)(this + 3916));
  *(_DWORD *)(this + 3916) = 0;
  *(_DWORD *)(this + 3920) = 0;
  *(_DWORD *)(this + 3924) = 0;
  if ( *(_DWORD *)(this + 3900) )
    operator delete(*(void **)(this + 3900));
  *(_DWORD *)(this + 3900) = 0;
  *(_DWORD *)(this + 3904) = 0;
  *(_DWORD *)(this + 3908) = 0;
  CTYDialog::~CTYDialog((CTYDialog *)this);
}
