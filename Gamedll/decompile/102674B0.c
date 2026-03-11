/*
 * func-name: sub_102674B0
 * func-address: 0x102674b0
 * callers: 0x10018c82
 * callees: 0x1001431c, 0x102c9d50
 */

void __thiscall sub_102674B0(int this)
{
  int v2; // edi
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+4h] [ebp-18h]

  *(_DWORD *)this = &CDeadMessage::`vftable';
  v2 = this + 560;
  sub_1001431C(v3, v4);
  operator delete(*(void **)(v2 + 4));
  *(_DWORD *)(v2 + 4) = 0;
  CREEditBox::CUniBuffer::~CUniBuffer((CREEditBox::CUniBuffer *)(this + 536));
  CREControl::~CREControl((CREControl *)this);
}
