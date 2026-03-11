/*
 * func-name: ?PostAccept@Stream_Acceptor@IONetwork@Outpop@@QAEHH@Z
 * func-address: 0x10017670
 * callers: 0x10016f50, 0x10017730
 * callees: 0x1001aac0
 */

int __thiscall Outpop::IONetwork::Stream_Acceptor::PostAccept(Outpop::IONetwork::Stream_Acceptor *this, int a2)
{
  int v3; // ebx
  Outpop::Utility::Sect_Block_Allocator *v4; // eax
  void *v5; // edi
  Outpop::Utility::Sect_Block_Allocator *v6; // eax
  int v8; // [esp-14h] [ebp-38h]
  _DWORD v9[7]; // [esp-4h] [ebp-28h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v3 = a2;
  v4 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(a2 + 64);
  v5 = Outpop::Utility::Sect_Block_Allocator::malloc(v4, v9[1]);
  a2 = 0;
  v9[6] = v9;
  v9[0] = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref(this);
  v10 = 0;
  v8 = *((_DWORD *)this + 47);
  v10 = -1;
  if ( sub_1001AAC0(v8, v5, v3, (LPDWORD)&a2, v9[0]) != -1 )
    return 0;
  v6 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(v5);
  Outpop::Utility::Sect_Block_Allocator::free(v6);
  return -1;
}
