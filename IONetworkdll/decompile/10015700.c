/*
 * func-name: sub_10015700
 * func-address: 0x10015700
 * callers: 0x1000f010, 0x1000f2a0, 0x10010b40
 * callees: 0x10015ae0, 0x1001b6d0, 0x1004f170
 */

int __stdcall sub_10015700(
        SOCKET *a1,
        Outpop::Utility::Ref_Object **a2,
        int a3,
        Outpop::Utility::Ref_Object *a4,
        int a5)
{
  DWORD v5; // ebp
  Outpop::Utility::Sect_Block_Allocator *v6; // eax
  Outpop::Utility::Ref_Object *v7; // esi
  int v8; // ebx
  Outpop::Utility::Ref_Object *v9; // ecx
  bool v10; // zf
  Outpop::Utility::Ref_Object *v11; // esi
  Outpop::Utility::Ref_Object **v12; // edi
  SOCKET v14; // [esp-1Ch] [ebp-1054h]
  _DWORD v15[7]; // [esp-4h] [ebp-103Ch] BYREF
  Outpop::Utility::Ref_Object *v16; // [esp+18h] [ebp-1020h] BYREF
  Outpop::Utility::Ref_Object *v17; // [esp+1Ch] [ebp-101Ch]
  DWORD NumberOfBytesSent; // [esp+20h] [ebp-1018h] BYREF
  struct _WSABUF Buffers[513]; // [esp+24h] [ebp-1014h] BYREF
  int v20; // [esp+1034h] [ebp-4h]

  v5 = 0;
  v20 = 1;
  v6 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(60);
  v7 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Sect_Block_Allocator::malloc(v6, v15[1]);
  v16 = v7;
  if ( v7 )
  {
    v17 = (Outpop::Utility::Ref_Object *)v15;
    v15[0] = a4;
    if ( a4 )
      Outpop::Utility::Ref_Object::addref(a4);
    LOBYTE(v20) = 1;
    v8 = sub_10015AE0(v7, v15[0]);
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v20) = 0;
  *(_DWORD *)(v8 + 40) = a3;
  v15[0] = a5;
  *(_DWORD *)(v8 + 32) = a5;
  v9 = *a2;
  v10 = *a2 == 0;
  v16 = (Outpop::Utility::Ref_Object *)v15;
  v15[0] = v9;
  if ( !v10 )
    Outpop::Utility::Ref_Object::addref(v9);
  LOBYTE(v20) = 0;
  sub_1001B6D0(v15[0]);
  v11 = *a2;
  v17 = v11;
  if ( v11 )
    Outpop::Utility::Ref_Object::addref(v11);
  LOBYTE(v20) = 4;
  while ( v11 )
  {
    Buffers[v5].buf = Outpop::Utility::Stream_Base::get_read_ptr(v11);
    Buffers[v5++].len = Outpop::Utility::Stream_Base::get_readable(v11);
    v12 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v11, &v16);
    LOBYTE(v20) = 5;
    Outpop::Utility::Ref_Object::release(v11);
    v11 = *v12;
    v17 = *v12;
    if ( v17 )
      Outpop::Utility::Ref_Object::addref(v11);
    LOBYTE(v20) = 4;
    if ( v16 )
      Outpop::Utility::Ref_Object::release(v16);
  }
  LOBYTE(v20) = 0;
  v15[0] = 0;
  v14 = *a1;
  NumberOfBytesSent = 0;
  if ( WSASend(v14, Buffers, v5, &NumberOfBytesSent, 0, (LPWSAOVERLAPPED)(v8 + 4), 0) != -1 || WSAGetLastError() == 997 )
  {
    v20 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release(a4);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    v20 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release(a4);
    return -1;
  }
}
