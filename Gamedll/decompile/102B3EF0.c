/*
 * func-name: sub_102B3EF0
 * func-address: 0x102b3ef0
 * callers: 0x1000959d
 * callees: 0x1001760c, 0x102c9d50
 */

void __thiscall sub_102B3EF0(int this)
{
  *(_DWORD *)this = &GameDefaultMessageHandler::`vftable';
  if ( *(_DWORD *)(this + 52) )
    operator delete(*(void **)(this + 52));
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 0;
  if ( *(_DWORD *)(this + 24) )
    operator delete(*(void **)(this + 24));
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  sub_1001760C();
  Outpop::Message::Message_Handler::~Message_Handler((Outpop::Message::Message_Handler *)this);
}
