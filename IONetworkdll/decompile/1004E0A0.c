/*
 * func-name: sub_1004E0A0
 * func-address: 0x1004e0a0
 * callers: 0x1004b970
 * callees: 0x1003c410, 0x1004e630, 0x1004e98e
 */

int __stdcall sub_1004E0A0(
        SOCKET *a1,
        Outpop::Utility::Ref_Object **a2,
        DWORD NumberOfBytesRecvd,
        Outpop::Utility::Ref_Object *a4,
        Outpop::Utility::Ref_Object **a5)
{
  ULONG v5; // ebp
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // esi
  int v8; // edi
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Stream_Base *v10; // ecx
  struct sockaddr *v11; // eax
  Outpop::Utility::Ref_Object *v13[9]; // [esp-4h] [ebp-3Ch] BYREF
  struct _WSABUF Buffers; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v5 = NumberOfBytesRecvd;
  v15 = 1;
  v7 = (Outpop::Utility::Ref_Object *)operator new(92);
  v13[7] = v7;
  if ( v7 )
  {
    v13[8] = (Outpop::Utility::Ref_Object *)v13;
    v13[0] = a4;
    if ( a4 )
      Outpop::Utility::Ref_Object::addref(a4);
    LOBYTE(v15) = 1;
    v8 = sub_1004E630(v7, v13[0]);
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v15) = 0;
  v13[0] = v6;
  *(_DWORD *)(v8 + 32) = a5;
  *(_DWORD *)(v8 + 44) = v5;
  v9 = *a2;
  a5 = v13;
  v13[0] = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  LOBYTE(v15) = 0;
  sub_1003C410(v8, v13[0]);
  *(_DWORD *)(v8 + 36) = 16;
  v10 = *a2;
  NumberOfBytesRecvd = 0;
  Buffers.buf = Outpop::Utility::Stream_Base::get_write_ptr(v10);
  v13[0] = 0;
  Buffers.len = v5;
  v11 = (struct sockaddr *)(*(int (**)(void))(*(_DWORD *)(v8 + 60) + 16))();
  if ( WSARecvFrom(
         *a1,
         &Buffers,
         1u,
         &NumberOfBytesRecvd,
         (LPDWORD)(v8 + 40),
         v11,
         (LPINT)(v8 + 36),
         (LPWSAOVERLAPPED)(v8 + 4),
         (LPWSAOVERLAPPED_COMPLETION_ROUTINE)v13[0]) != -1
    || WSAGetLastError() == 997 )
  {
    v15 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release(a4);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    v15 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release(a4);
    return -1;
  }
}
