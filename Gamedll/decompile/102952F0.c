/*
 * func-name: sub_102952F0
 * func-address: 0x102952f0
 * callers: 0x10003355
 * callees: 0x100174b3, 0x102c9d50
 */

void __thiscall sub_102952F0(int this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  *(_DWORD *)this = &CStockList::`vftable';
  v2 = *(_DWORD *)(this + 572);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  v3 = *(_DWORD *)(this + 576);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
  v4 = *(_DWORD *)(this + 580);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  CREEditBox::CUniBuffer::~CUniBuffer((CREEditBox::CUniBuffer *)(this + 548));
  if ( *(_DWORD *)(this + 536) )
  {
    sub_100174B3();
    operator delete(*(void **)(this + 536));
  }
  *(_DWORD *)(this + 536) = 0;
  *(_DWORD *)(this + 540) = 0;
  *(_DWORD *)(this + 544) = 0;
  CREControl::~CREControl((CREControl *)this);
}
