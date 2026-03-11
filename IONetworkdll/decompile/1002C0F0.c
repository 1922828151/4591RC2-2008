/*
 * func-name: sub_1002C0F0
 * func-address: 0x1002c0f0
 * callers: 0x10027810
 * callees: 0x1002c520, 0x1003c410, 0x1004e98e
 */

int __stdcall sub_1002C0F0(
        SOCKET *a1,
        void (__stdcall **a2)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        DWORD NumberOfBytesRecvd,
        void (__stdcall *a4)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        LPWSAOVERLAPPED_COMPLETION_ROUTINE *a5)
{
  ULONG v5; // ebp
  void (__stdcall *v6)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ecx
  void (__stdcall *v7)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // esi
  int v8; // edi
  void (__stdcall *v9)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ecx
  Outpop::Utility::Stream_Base *v10; // ecx
  struct sockaddr *v11; // eax
  LPWSAOVERLAPPED_COMPLETION_ROUTINE v13[9]; // [esp-4h] [ebp-3Ch] BYREF
  struct _WSABUF Buffers; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v5 = NumberOfBytesRecvd;
  v15 = 1;
  v7 = (void (__stdcall *)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD))operator new(92);
  v13[7] = v7;
  if ( v7 )
  {
    v13[8] = (LPWSAOVERLAPPED_COMPLETION_ROUTINE)v13;
    v13[0] = a4;
    if ( a4 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a4);
    LOBYTE(v15) = 1;
    v8 = sub_1002C520(v7, v13[0]);
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
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  LOBYTE(v15) = 0;
  sub_1003C410(v13[0]);
  *(_DWORD *)(v8 + 36) = 16;
  v10 = (Outpop::Utility::Stream_Base *)*a2;
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
         v13[0]) != -1
    || WSAGetLastError() == 997 )
  {
    v15 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a4);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    v15 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a4);
    return -1;
  }
}
