/*
 * func-name: sub_1002C250
 * func-address: 0x1002c250
 * callers: 0x100279d0
 * callees: 0x1002c5c0, 0x1003c410, 0x1004e98e, 0x1004f170
 */

int __stdcall sub_1002C250(
        SOCKET *a1,
        void (__stdcall **a2)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        int a3,
        void (__stdcall *a4)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        void (__stdcall *a5)(DWORD dwError, DWORD cbTransferred, LPWSAOVERLAPPED lpOverlapped, DWORD dwFlags),
        int *a6)
{
  Outpop::Utility::Ref_Object *v6; // esi
  int v7; // edi
  void (__stdcall *v8)(DWORD, DWORD, LPWSAOVERLAPPED, DWORD); // ecx
  bool v9; // zf
  int *v10; // ebx
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  Outpop::Utility::Ref_Object *v13; // esi
  DWORD v14; // ebp
  ULONG readable; // eax
  Outpop::Utility::Ref_Object **v16; // ebx
  int v17; // eax
  const struct sockaddr *v18; // eax
  LPWSAOVERLAPPED_COMPLETION_ROUTINE v20[7]; // [esp-4h] [ebp-1038h] BYREF
  Outpop::Utility::Ref_Object *v21; // [esp+18h] [ebp-101Ch] BYREF
  LPWSAOVERLAPPED_COMPLETION_ROUTINE *v22; // [esp+1Ch] [ebp-1018h]
  DWORD NumberOfBytesSent; // [esp+20h] [ebp-1014h] BYREF
  struct _WSABUF Buffers[512]; // [esp+24h] [ebp-1010h] BYREF
  int v25; // [esp+1030h] [ebp-4h]

  v25 = 1;
  v6 = (Outpop::Utility::Ref_Object *)operator new(92);
  v21 = v6;
  if ( v6 )
  {
    v22 = v20;
    v20[0] = a4;
    if ( a4 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a4);
    LOBYTE(v25) = 1;
    v7 = sub_1002C5C0(v6, v20[0]);
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v25) = 0;
  *(_DWORD *)(v7 + 72) = a3;
  v20[0] = a5;
  *(_DWORD *)(v7 + 32) = a5;
  v8 = *a2;
  v9 = *a2 == 0;
  v21 = (Outpop::Utility::Ref_Object *)v20;
  v20[0] = v8;
  if ( !v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v8);
  LOBYTE(v25) = 0;
  sub_1003C410(v20[0]);
  v10 = a6;
  v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*a6 + 16))(a6);
  v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 40) + 16))(v7 + 40);
  *v12 = *v11;
  v12[1] = v11[1];
  v12[2] = v11[2];
  v12[3] = v11[3];
  v13 = (Outpop::Utility::Ref_Object *)*a2;
  v14 = 0;
  v22 = (LPWSAOVERLAPPED_COMPLETION_ROUTINE *)*a2;
  if ( v22 )
    Outpop::Utility::Ref_Object::addref(v13);
  LOBYTE(v25) = 4;
  if ( v13 )
  {
    do
    {
      Buffers[v14].buf = Outpop::Utility::Stream_Base::get_read_ptr(v13);
      readable = Outpop::Utility::Stream_Base::get_readable(v13);
      v20[0] = (LPWSAOVERLAPPED_COMPLETION_ROUTINE)&v21;
      Buffers[v14++].len = readable;
      v16 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v13, v20[0]);
      LOBYTE(v25) = 5;
      Outpop::Utility::Ref_Object::release(v13);
      v13 = *v16;
      v22 = (LPWSAOVERLAPPED_COMPLETION_ROUTINE *)*v16;
      if ( v22 )
        Outpop::Utility::Ref_Object::addref(v13);
      LOBYTE(v25) = 4;
      if ( v21 )
        Outpop::Utility::Ref_Object::release(v21);
    }
    while ( v13 );
    v10 = a6;
  }
  LOBYTE(v25) = 0;
  v17 = *v10;
  v20[0] = 0;
  v18 = (const struct sockaddr *)(*(int (__thiscall **)(int *))(v17 + 16))(v10);
  if ( WSASendTo(
         *a1,
         Buffers,
         v14,
         &NumberOfBytesSent,
         *(_DWORD *)(v7 + 36),
         v18,
         16,
         (LPWSAOVERLAPPED)(v7 + 4),
         v20[0]) != -1
    || WSAGetLastError() == 997 )
  {
    v25 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a4);
    return 0;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    v25 = -1;
    if ( a4 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a4);
    return -1;
  }
}
