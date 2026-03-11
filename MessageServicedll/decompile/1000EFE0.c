/*
 * func-name: ?close_acceptor@Acceptor_Manager@Message@Outpop@@QAEXG@Z
 * func-address: 0x1000efe0
 * callers: none
 * callees: 0x100083d0, 0x1000f8a0
 */

void __thiscall Outpop::Message::Acceptor_Manager::close_acceptor(
        Outpop::Message::Acceptor_Manager *this,
        unsigned __int16 a2)
{
  Outpop::Utility::Lock *v3; // ebx
  void *v4; // edx
  char *v5; // eax
  int v6; // esi
  _DWORD **v7; // edi
  char v8; // [esp+17h] [ebp-25h]
  int v9; // [esp+1Ch] [ebp-20h] BYREF
  void *v10; // [esp+20h] [ebp-1Ch]
  int v11; // [esp+24h] [ebp-18h] BYREF
  void *v12; // [esp+28h] [ebp-14h]
  int v13; // [esp+38h] [ebp-4h]

  v3 = (Outpop::Message::Acceptor_Manager *)((char *)this + 52);
  v8 = 0;
  Outpop::Utility::Lock::lock((Outpop::Message::Acceptor_Manager *)((char *)this + 52));
  v13 = 0;
  sub_100083D0((_DWORD *)this + 1, &v9, &a2);
  v4 = (void *)*((_DWORD *)this + 3);
  v5 = (char *)this + 8;
  v6 = v9;
  v12 = v4;
  if ( !v9 || (char *)v9 != v5 )
    invalid_parameter_noinfo();
  if ( v10 != v12 )
  {
    v8 = 1;
    sub_1000F8A0((int)&v11, v6, v10);
  }
  v13 = -1;
  Outpop::Utility::Lock::unlock(v3);
  if ( v8 )
  {
    if ( !v6 )
      invalid_parameter_noinfo();
    v7 = (_DWORD **)v10;
    if ( v10 == *(void **)(v6 + 4) )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD *))(*v7[3] + 12))(v7[3]);
  }
}
