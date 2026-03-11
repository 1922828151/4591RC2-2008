/*
 * func-name: sub_1003C0F0
 * func-address: 0x1003c0f0
 * callers: 0x10038d30
 * callees: 0x1003c370, 0x1003c410, 0x1004e98e
 */

int __stdcall sub_1003C0F0(
        SOCKET *a1,
        void (__stdcall **NumberOfBytesRecvd)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        void (__stdcall *a3)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        LPWSAOVERLAPPED_COMPLETION_ROUTINE *a4)
{
  void (__stdcall **v4)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ebp
  void (__stdcall *v5)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ecx
  void (__stdcall *v6)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // esi
  int v7; // edi
  void (__stdcall *v8)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ecx
  bool v9; // zf
  Outpop::Utility::Stream_Base *v10; // ecx
  CHAR *v11; // eax
  struct sockaddr *v12; // eax
  LPWSAOVERLAPPED_COMPLETION_ROUTINE v14[9]; // [esp-4h] [ebp-38h] BYREF
  struct _WSABUF Buffers; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+30h] [ebp-4h]

  v4 = NumberOfBytesRecvd;
  v16 = 1;
  v6 = (void (__stdcall *)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD))operator new(92);
  v14[7] = v6;
  if ( v6 )
  {
    v14[8] = (LPWSAOVERLAPPED_COMPLETION_ROUTINE)v14;
    v14[0] = a3;
    if ( a3 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a3);
    LOBYTE(v16) = 1;
    v7 = sub_1003C370(v6, v14[0]);
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v16) = 0;
  *(_DWORD *)(v7 + 32) = a4;
  v14[0] = v5;
  *(_DWORD *)(v7 + 44) = 65500;
  v8 = *v4;
  v9 = *v4 == 0;
  a4 = v14;
  v14[0] = v8;
  if ( !v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v8);
  LOBYTE(v16) = 0;
  sub_1003C410(v14[0]);
  *(_DWORD *)(v7 + 36) = 16;
  v10 = (Outpop::Utility::Stream_Base *)*v4;
  NumberOfBytesRecvd = 0;
  v11 = Outpop::Utility::Stream_Base::get_write_ptr(v10);
  v14[0] = 0;
  Buffers.buf = v11;
  Buffers.len = 65500;
  v12 = (struct sockaddr *)(*(int (**)(void))(*(_DWORD *)(v7 + 60) + 16))();
  if ( WSARecvFrom(
         *a1,
         &Buffers,
         1u,
         (LPDWORD)&NumberOfBytesRecvd,
         (LPDWORD)(v7 + 40),
         v12,
         (LPINT)(v7 + 36),
         (LPWSAOVERLAPPED)(v7 + 4),
         v14[0]) != -1
    || WSAGetLastError() == 997 )
  {
    v16 = -1;
    if ( a3 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a3);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    v16 = -1;
    if ( a3 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a3);
    return -1;
  }
}
