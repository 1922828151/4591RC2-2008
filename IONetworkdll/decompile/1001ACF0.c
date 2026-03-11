/*
 * func-name: sub_1001ACF0
 * func-address: 0x1001acf0
 * callers: 0x10019660
 * callees: 0x1001b470, 0x1001b880
 */

int __stdcall sub_1001ACF0(
        SOCKET *a1,
        Outpop::Utility::Ref_Object **a2,
        DWORD NumberOfBytesRecvd,
        LPDWORD lpFlags,
        Outpop::Utility::Ref_Object *a5,
        _DWORD *a6)
{
  ULONG v6; // ebp
  Outpop::Utility::Sect_Block_Allocator *v7; // eax
  int v8; // ecx
  void *v9; // esi
  int v10; // edi
  Outpop::Utility::Ref_Object *v11; // ecx
  bool v12; // zf
  Outpop::Utility::Stream_Base *v13; // ecx
  CHAR *v14; // eax
  SOCKET v16; // [esp-1Ch] [ebp-4Ch]
  _DWORD v17[8]; // [esp-4h] [ebp-34h] BYREF
  struct _WSABUF Buffers; // [esp+1Ch] [ebp-14h] BYREF
  int v19; // [esp+2Ch] [ebp-4h]

  v6 = NumberOfBytesRecvd;
  v19 = 1;
  v7 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(56);
  v9 = Outpop::Utility::Sect_Block_Allocator::malloc(v7, v17[1]);
  v17[6] = v9;
  if ( v9 )
  {
    v17[7] = v17;
    v17[0] = a5;
    if ( a5 )
      Outpop::Utility::Ref_Object::addref(a5);
    LOBYTE(v19) = 1;
    v10 = sub_1001B470(v9, v17[0]);
  }
  else
  {
    v10 = 0;
  }
  LOBYTE(v19) = 0;
  *(_DWORD *)(v10 + 32) = a6;
  v17[0] = v8;
  *(_DWORD *)(v10 + 36) = v6;
  v11 = *a2;
  v12 = *a2 == 0;
  a6 = v17;
  v17[0] = v11;
  if ( !v12 )
    Outpop::Utility::Ref_Object::addref(v11);
  LOBYTE(v19) = 0;
  sub_1001B880(v17[0]);
  v13 = *a2;
  NumberOfBytesRecvd = 0;
  v14 = Outpop::Utility::Stream_Base::get_write_ptr(v13);
  v17[0] = 0;
  Buffers.buf = v14;
  v16 = *a1;
  Buffers.len = v6;
  if ( WSARecv(v16, &Buffers, 1u, &NumberOfBytesRecvd, lpFlags, (LPWSAOVERLAPPED)(v10 + 4), 0) != -1
    || WSAGetLastError() == 997 )
  {
    v19 = -1;
    if ( a5 )
      Outpop::Utility::Ref_Object::release(a5);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    v19 = -1;
    if ( a5 )
      Outpop::Utility::Ref_Object::release(a5);
    return -1;
  }
}
