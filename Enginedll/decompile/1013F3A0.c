/*
 * func-name: sub_1013F3A0
 * func-address: 0x1013f3a0
 * callers: 0x1013a9b0
 * callees: 0x10101240, 0x1010ec50, 0x101189f0, 0x10118b80, 0x1013f190
 */

RenderBase *__thiscall sub_1013F3A0(RenderBase *this)
{
  RenderBase::RenderBase(this);
  *(_DWORD *)this = &OcclusionCulling::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 19) = sub_1010EC50();
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  sub_1013F190((int)this + 100);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  if ( RenderDevice::Instance() && *((_DWORD *)RenderDevice::Instance() + 427) )
    sub_10101240(this);
  return this;
}
